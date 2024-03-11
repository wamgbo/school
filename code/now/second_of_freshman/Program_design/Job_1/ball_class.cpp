#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
class Ball
{
private:
    double *r=new double;
public:
    Ball(double input)
    {
        *r = input;
    }
    ~Ball()
    {
        delete r;
    }
    double area()
    {
        return 4 * 3.14 * (*r * *r);
    }
    double volume()
    {
        return 1.33333333333 * 3.14 * *r * *r * *r;
    }
    void print()
    {
        cout << fixed << setprecision(0) << *r;
    }
    void set(double k)
    {
        *r = k;
    }
};
int main(void)
{
    double radius;
    cout << "請輸入球半徑: ";
    cin >> radius;
    Ball ball_1(radius), ball_2(radius); // 建立兩球類別物件ball_1及ball_2, ball_1的半徑為radius
    cout << "ball_1之面積為: " << setprecision(0) << fixed << ball_1.area() << '\n';
    cout << "ball_1之體積為: " << setprecision(1) << fixed << ball_1.volume() << endl; // 體積取到小數第一位
    ball_2.set(100);
    ball_2.print();
    ~ball_1();
    ~ball_2();
}
