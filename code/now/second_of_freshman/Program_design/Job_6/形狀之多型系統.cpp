#include <iostream>
#include <math.h>
#include <string>
#include <cstdlib>
using namespace std;
class Shape
{
protected:
    string name;
    double r, h, a;

public:
    Shape(string in_name, double in_r, double in_h, double in_a)
    {
        name = in_name;
        r = in_r;
        h = in_h;
        a = in_a;
    }
    virtual void printname()
    {
        cout << name << endl;
    }
    virtual double area()
    {
        return 1;
    }
    virtual double volume()
    {
        return 1;
    }
};
class Cylinder : public Shape
{
public:
    Cylinder(string in_name, double in_r, double in_h) : Shape(in_name, in_r, in_h, 1) {}
    double area()
    {
        return 3.14 * (r * r) + 2 * 3.14 * r * h;
    }
    double volume()
    {
        return 3.14 * (r * r) * h;
    }
};
class Ball : public Shape
{
public:
    Ball(string in_name, double in_r) : Shape(in_name, in_r, 1, 1) {}
    double area()
    {
        return 3.14 * 4 * (r * r);
    }
    double volume()
    {
        return (double)4 / 3 * 3.14 * (r * r * r);
    }
};
class Pyramid : public Shape
{
public:
    Pyramid(string in_name, double in_a, double in_h) : Shape(in_name,1,in_h, in_a) {}
    double area()
    {
        return a * a + 2 * a * sqrt((a / 2) * (a / 2) + h * h);
    }
    double volume()
    {
        return ((a * a) * h)/3;
    }
};
class Cube : public Shape
{


public:
    Cube(string in_name, double in_a) : Shape(in_name, 1, 1, in_a) {}
    double area()
    {
        return 6 * (a * a);
    }
    double volume()
    {
        return a * a * a;
    }
};
int main(void)
{
    Shape *ptr[4];
    int i;
    Ball a_ball("a_ball", 10);                // 10 為 半徑
    Cylinder a_cylinder("a_cylinder", 10, 5); // 10 為半徑, 5 為高
    Cube a_cube("a_cube", 10);                // 10 為邊長
    Pyramid a_pyramid("a_pyramid", 10, 5);    // 10 為邊長, 5 為高
    ptr[0] = &a_ball;
    ptr[1] = &a_cylinder;
    ptr[2] = &a_cube;
    ptr[3] = &a_pyramid;
    for (i = 0; i < 4; i++)
    {
        ptr[i]->printname();
        cout << ptr[i]->area() << endl;
        cout << ptr[i]->volume() << endl;
        cout << endl;
    }
}