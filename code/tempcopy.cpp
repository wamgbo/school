#include <iostream>
#include <cmath>
#include <time.h>
#include <cmath>
using namespace std;

// 定義函數
double f1(double x)
{
    return pow(x, 3) + 4 * pow(x, 2) - 10;
}

double f2(double x)
{
    return -cos(2 * x) - pow(x, 2);
}

// 二分法求根
double bisection(double (*f)(double), double a, double b, double tol)
{
    double c;
    while ((b - a) / 2 > tol)
    {
        c = (a + b) / 2;
        if (f(c) == 0)
            return c;
        else if (f(a) * f(c) < 0)
            b = c;
        else
            a = c;
    }
    return (a + b) / 2;
}

// 牛頓法求根
double newton(double (*f)(double), double x0, double tol, int max_iter)
{
    double x = x0;
    int iter = 0;
    while (fabs(f(x)) > tol && iter < max_iter)
    {
        x = x - f(x) / (3 * pow(x, 2) + 8 * x);
        iter++;
    }
    return x;
}

// 割線法求根
double secant(double (*f)(double), double x0, double x1, double tol, int max_iter)
{

    double x2;
    int iter = 0;
    while (fabs(f(x1)) > tol && iter < max_iter)
    {
        x2 = x1 - f(x1) * (x1 - x0) / (f(x1) - f(x0));
        x0 = x1;
        x1 = x2;
        iter++;
    }

    return x1;
}

int main()
{
    clock_t start[3], end[3],start_1[3], end_1[3];//紀錄開始與結束
    double tol = 1e-6;
    int max_iter = 1000;
    string name[3]={"二分法求根時間:","牛頓法求根時間:","割線法求根時間:"};
    // 第一個方程
    cout << "Solving equation 1: x^3 + 4x^2 - 10 = 0\n";
    start[0] = clock();//紀錄開始
    cout << "Bisection Method: " << bisection(f1, 1, 2, tol) << endl;
    end[0] = clock();//紀錄結束
    start[1] = clock();//以此類推
    cout << "Newton's Method: " << newton(f1, 1.5, tol, max_iter) << endl;
    end[1] = clock();
    start[2] = clock();
    cout << "Secant Method: " << secant(f1, 1, 2, tol, max_iter) << endl;
    end[2] = clock();

    // 第二個方程
    cout << "\nSolving equation 2: -cos(2x) - x^2 = 0\n";
    start_1[0] = clock();
    cout << "Bisection Method: " << bisection(f2, -1, 0, tol) << endl;
    end_1[0] = clock();
    start_1[1] = clock();
    cout << "Newton's Method: " << newton(f2, -0.5, tol, max_iter) << endl;
    end_1[1] = clock();
    start_1[2] = clock();
    cout << "Secant Method: " << secant(f2, -1, 0, tol, max_iter) << endl
         << endl;
    end_1[2] = clock();

    double diff[3]={0};
    cout<<"第一個方程:"<<endl;
    for (int i = 0; i < 3; i++)//依序紀錄時間
    {
        cout<<name[i]<<' ';//字串
        diff[i] = end[i] - start[i]; // ms//相減得到這段執行的時間
        printf(" %f  ms", diff[i]);
        printf(" %f  sec", diff[i] / CLOCKS_PER_SEC);
        cout<<endl;
    }
    cout<<"第二個方程:"<<endl;
    for (int i = 0; i < 3; i++)
    {
        cout<<name[i]<<' ';
        diff[i] = end_1[i] - start_1[i]; // ms
        printf(" %f  ms", diff[i]);
        printf(" %f  sec", diff[i] / CLOCKS_PER_SEC);
        cout<<endl;
    }

    return 0;
}