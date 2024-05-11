#include <iostream>
#include <cstdlib>
using namespace std;
class CBox
{
public:
    void ShowVolume()
    {
        cout << endl
             << "CBox usable volume is " << Volume();
    }
    virtual double Volume()
    {
        return m_Length * m_Breadth * m_Height;
    }
    CBox(double lv = 1.0, double bv = 1.0, double hv = 1.0)
        : m_Length(lv), m_Breadth(bv), m_Height(hv) {}

protected:
    double m_Length;
    double m_Breadth;
    double m_Height;
};
class CGlassBox : public CBox
{
public:
    virtual double Volume()
    {
        return 0.85 * m_Length * m_Breadth * m_Height;
    }
    CGlassBox(double lv, double bv, double hv) : CBox(lv, bv, hv) {}
};
// 增加兩個新的類別
class DBox : public CBox
{
public:
    virtual double Volume() { return 0.2 * m_Length * m_Breadth * m_Height; }
    DBox(double lv, double bv, double hv) : CBox(lv, bv, hv) {}
};
class EBox : public CGlassBox
{
public:
    virtual double Volume() { return 0.1 * m_Length * m_Breadth * m_Height; }
    EBox(double lv, double bv, double hv) : CGlassBox(lv, bv, hv) {}
};
class FBox :public EBox
{
    FBox(double lv, double bv, double hv) : EBox(lv, bv, hv) {}
    virtual double Volume() { return 0.85 * m_Length * m_Breadth * m_Height; }

};
int main()
{
    CBox myBox(2.0, 3.0, 4.0);           // Declare a base box
    CGlassBox myGlassBox(2.0, 3.0, 4.0); // Declare derived box - same size
    // 新增兩類別物件
    DBox a_dbox(2.0, 3.0, 4.0);
    EBox a_ebox(2.0, 3.0, 4.0);
    // output(&myBox);
    // output(&myGlassBox);
    cout << "*****第一種處理方式*****\n";
    output(myBox);
    output(myGlassBox);
    output(a_dbox);
    output(a_ebox);
    cout << "* ****接下來之方式非處理物件實體, 無法達成多型 * ****\n ";
    CBox array[10]; // 非物件實體, 無法達成多型
    array[0] = myBox;
    array[1] = myGlassBox;
    array[2] = a_dbox;
    array[3] = a_ebox;
    int i;
    for (i = 0; i < 4; i++)
        cout << array[i].Volume() << endl;
    cout << "\n*****第二種處理方式*****\n";
    CBox *array2[10]; // 使用物件實體, 達成多型
    array2[0] = &myBox;
    array2[1] = &myGlassBox;
    array2[2] = &a_dbox;
    array2[3] = &a_ebox;
    for (i = 0; i < 4; i++)
        cout << array2[i]->Volume() << endl;
    cout << endl;
}