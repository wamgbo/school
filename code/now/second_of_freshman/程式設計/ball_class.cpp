#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
class Ball
{
public:
    double r = 1;
    Ball(double input)
    {
        set(input);
    }
    double area()
    {
        return 4 * M_PI * (r * r);
    }
    double volume()
    {
        return (4 / 3) * (M_PI * (r * r * r));
    }
    void print()
    {
        cout << r;
    }
    void set(double k)
    {
        r = k;
    }
};
int main(void)
{
    double radius;
    cout << "請輸入球半徑: ";
    cin >> radius;
    Ball ball_1(radius), ball_2(radius); // 建立兩球類別物件ball_1及ball_2, ball_1的半徑為radius
    cout << "ball_1之面積為: " << ball_1.area() <<'\n';
    cout << "ball_1之體積為: " << setprecision(1) << fixed << ball_1.volume() << endl; // 體積取到小數第一位
    ball_2.set(100);
    ball_2.print();
    return 0;
}
