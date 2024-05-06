#include <iostream>
#include <iomanip>
using namespace std;
class circle
{
private:
    double r;

public:
    circle(double a) { r = a; }
    double area() { return 3.14 * r * r; }
    double get_R() { return r; }
};
class inheritance_cylinder : public circle
{
    double h;

public:
    inheritance_cylinder(double a, double b) : circle(a) { h = b; }
    double area() { return 2 * 3.14 * get_R() * get_R() + 2 * 3.14 * get_R() * h; }
};
class composition_cylinder
{
    double h;
    circle a_circle;

public:
    composition_cylinder(double a, double b) : a_circle(a){h=b;}
    double area() { return 2 * 3.14 * a_circle.get_R() * a_circle.get_R() + 2 * 3.14 * a_circle.get_R() * h; }
};
int main()
{
    double r, h;
    printf("請輸入圓柱體之半徑與高: ");
    cin >> r >> h; // 設輸入 10 5
    cout << "以繼承方式建立圓柱體物件: \n ";
    inheritance_cylinder a(r, h); // 建立圓柱體物件 a，半徑與高分別為 r 及 h
    cout << "圓柱體物件面積為: ";
    cout << a.area() << endl; // 輸出 942
    cout << "以組合方式建立圓柱體物件: \n ";
    composition_cylinder b(r, h); // 建立圓柱體物件 b，半徑與高分別為 r 及 h
    cout << "圓柱體物件面積為: ";
    cout << b.area() << endl; // 輸出 942
    return 0;
}