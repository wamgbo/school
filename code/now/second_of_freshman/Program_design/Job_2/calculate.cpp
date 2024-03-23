#include <iomanip>
#include <iostream>
#include <math.h>

using namespace std;

class calculate
{
private:
    double *ptr;
    int n;

public:
    calculate(int size);
    void get_data(int i, double value); // 設定 ptr[i]=value
    double total();                     // 傳回 ptr 陣列和
    double average();                   // 傳回 ptr 陣列平均值
    double median();                    // 傳回 ptr 陣列中位數
    double sd();                        // 傳回 ptr 陣列標準差
};

calculate::calculate(int size)
{
    n = size;
    ptr = new double[n];
}

void calculate::get_data(int i, double value)
{
    ptr[i] = value;
}
double calculate::total()
{
    double sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += ptr[i];
    }
    return sum;
}
double calculate::average()
{
    double mean;
    mean = total() / n;
    return mean;
}
double calculate::median()
{
    double temp, median;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (ptr[j] > ptr[j + 1])
            {
                temp = ptr[j];
                ptr[j] = ptr[j + 1];
                ptr[j + 1] = temp;
            }
        }
    }
    if (n % 2 == 0)
    {
        median = (ptr[n / 2] + ptr[n / 2 - 1])/2;
    }
    else
    {
        median = ptr[n / 2];
    }
    return median;
}
double calculate::sd()
{
    double standard=0,mean,sum=0;
    mean = total() / n;
    for (int i = 0; i < n; i++)
    {
        sum+=(ptr[i]-mean)*(ptr[i]-mean);
    }
    standard=sqrt(sum/=n);
    return standard;
}
int main(void)
{
    int size, i, value;
    cout << "Input size of the array:" << endl;
    cin >> size;                                  // 設輸入 12
    calculate cal(size);                          // 建立物件 cal 具有大小為 size 的浮點數陣列 ptr
    cout << "Input values of the array:" << endl; // 設輸入 11  1  5  2  8  7  12  4  -6  -10  1  5
    for (i = 0; i < size; i++)
    {
        cin >> value;
        cal.get_data(i, value);
    }
    cout << "總  合 (sum)  = " << setprecision(2) << fixed << cal.total() << endl;    // output  40.00
    cout << "平均值 (mean)  = " << setprecision(2) << fixed << cal.average() << endl; // output  3.33
    cout << "中位數 (median) =" << setprecision(2) << fixed << cal.median() << endl;  // output  4.50
    cout << "標準差 (standard deviation) = " << cal.sd() << endl;                     // output  6.14
    return 0;
}