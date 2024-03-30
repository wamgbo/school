#include <iostream>
#include <iomanip>
using namespace std;
class Circle
{
    double r;
    Circle(double input_r)
    {
        r = input_r;
    }
    double area()
    {
        return 3.14 * r * r;
    }
    void printR()
    {
        return r;
    }
};
class Cyn : public Circle
{
public:
    Cyn(double input_r, double input_h)
    {
        r = input_r;
        h = input_h;
    }
    double area()
    {
        return (2 * 3.14 * r * r) + 2 * 3.14 * r * h;
    }
    double vol()
    {
        return 3.14 * r * r * h;
    }
};

int main()
{
    double r, h;
    cout << "請輸入圓之半徑:";
    cin >> r;                                                                  // 設輸入 10
    Circle a_circle(r);                                                        // 建立圓物件 a_circle
    cout << "圓面積: " << setprecision(2) << fixed << a_circle.area() << endl; // 輸出  圓面積: 314.00
    cout << "請輸入圓柱體之半徑及高 :";
    cin >> r >> h;                                                               // 設輸入 20 及5
    Cylinder a_cy(r, h);                                                         // 建立圓柱體物件 a_cylinder, 其半徑為 20 高為 5
    cout << "圓柱體半徑: " << setprecision(2) << fixed << a_cy.printR() << endl; // 輸出 半徑: 20.00
    cout << "圓柱體面積: " << setprecision(2) << fixed << a_cy.area() << endl;   // 輸出  面積: 3140.00
    cout << "圓柱體體積: " << setprecision(2) << fixed << a_cy.vol() << endl;    // 輸出  面積:6280.00
    return 0;
}