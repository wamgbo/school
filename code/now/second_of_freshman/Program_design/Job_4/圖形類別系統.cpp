#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;

class Shape
{
protected:
    double x, y, f = 1;

public:
    Shape(double in_x, double in_y)
    {
        x = in_x;
        y = in_y;
    }
    ~Shape()
    {
    }
    double getX()
    {
        return x;
    }
    double getY()
    {
        return y;
    }

    void translate(double x, double y)
    {
        this->x = x;
        this->y = y;
    }
};
class Circle : public Shape
{
private:
    double r;

public:
    Circle(double in_x, double in_y, double in_r) : Shape(in_x, in_y)
    {
        r = in_r;
    }
    ~Circle()
    {
    }
    void scale(double f)
    {
        r *= f;
    }
    double perimeter()
    {
        return 2 * r * 3.14;
    }
    double area()
    {
        return r * r * 3.14;
    }
    void print()
    {
        cout << "圖形種類:圓形"
             << "圖形中心:" << getX() << ' ' << getY() << "半徑:" << getRadius() << endl;
    }
    double getRadius()
    {
        return r;
    }
};
class Square : public Shape
{
private:
    double s;

public:
    Square(double in_x, double in_y, double s) : Shape(in_x, in_y)
    {
        this->s=s;
    }
    ~Square()
    {
    }
    double perimeter()
    {
        return 4 * s;
    }
    void scale(double f)
    {
        s *= f;
    }
    double area()
    {
        return s * s;
    }
    void print()
    {
        cout << "圖形種類:方形"
             << "圖形中心:" << getX() << ' ' << getY() << "邊長:" << getSide() << endl;
    }
    double getSide()
    {
        return s;
    }
};
class Rectangle : public Shape
{
private:
    double h, w;

public:
    Rectangle(double in_x, double in_y, double h, double w) : Shape(in_x, in_y)
    {
        this->h=h;
        this->w=w;
    }
    ~Rectangle()
    {
    }
    void scale(double f)
    {
        w *= f;
        h *= f;
    }
    double area()
    {
        return w * h;
    }
    void print()
    {
        cout << "圖形種類:方形"
             << "圖形中心:" << getX() << ' ' << getY() << "高:" << getHeight() << "寬:" << getWidth() << endl;
    }
    double getHeight()
    {
        return h;
    }
    double getWidth()
    {
        return w;
    }
};

int main()
{
    Circle a_circle(20, 50, 10);                          // 建立一圓物件 a_circle 座標 (20,50),半徑 10
    Rectangle a_rectangle(30, 70, 10, 20);                // 建立一矩形物件座標 (30,70),寬 10 高 20
    Square a_square(50, 100, 3);                          // 建立一方形物件 a_square 座標 (50,100),邊長 3
    a_circle.translate(100, 200);                         // 圓物件 a_circle 座標移到 (100,200)
    a_square.scale(10);                                   // 方形物件 a_square 邊長放大 10 倍成 30
    a_circle.print();                                     // 印出 圖形種類:圓形 圖形中心:(100,200) 半徑: 10
    a_rectangle.print();                                  // 印出 圖形種類:矩形 圖形中心:(30,70) 寬:10 高:20
    a_square.print();                                     // 印出 圖形種類:方形 圖形中心:(50,100) 邊長:30
    cout << "圓面積: " << a_circle.area() << endl;        // 印出 圓面積: 314
    cout << "方形周長: " << a_square.perimeter() << endl; // 印出 方形周長: 120
    system("pause");
    return 0;
}
