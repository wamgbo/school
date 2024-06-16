#include <iostream>
using namespace std;

class RationalNumber
{
public:
    RationalNumber(int num = 0, int num2 = 0) : numerator(num), denominator(num2) {} // default constructor
    RationalNumber operator+(RationalNumber &b)                                      // addition
    {
        RationalNumber temp;
        temp.numerator = numerator * b.denominator + b.numerator * denominator;
        temp.denominator = denominator * b.denominator;
        temp.reduction();
        return temp;
    }
    RationalNumber operator++(int) // 多載後加運算子，設後加會先以目前值運算，再將分子與分母各加一
    {
        RationalNumber temp = *this;
        denominator++;
        numerator++;
        reduction();//記得要加化簡
        return temp;
        
    }
    RationalNumber operator++() // 多載前加運算子，設後加會先將分子與分母各加一，再傳出運算
    {
        numerator++;
        denominator++;
        reduction();
        return *this;
    }
    bool operator==(RationalNumber &b) // 多載 == 運算子
    {
        if (denominator == b.denominator && numerator == b.numerator)
            return 1;
        else
            return 0;
    }
    bool operator!=(RationalNumber &b) // 多載 != 運算子
    {
        if (denominator != b.denominator && numerator != b.numerator)
            return 1;
        else
            return 0;
    }
    void reduction() // 找分子與分母的最大公因數以對分子與分母進行化簡
    {
        int temp, temp2 = numerator, temp3 = denominator;
        while (temp3 != 0)
        {
            temp = temp3;
            temp3 = temp2 % temp3;
            temp2 = temp;
        }
        denominator /= temp2;
        numerator /= temp2;
    }

private:
    int numerator;   // 分子
    int denominator; // 分母
    friend ostream &operator<<(ostream &output, RationalNumber &number);
    friend istream &operator>>(istream &input, RationalNumber &number);
    friend bool operator>(double a, const RationalNumber &number);
}; // end class RationalNumber
ostream &operator<<(ostream &output, RationalNumber &number)
{
    output << number.numerator << '/' << number.denominator;

    return output;
}
istream &operator>>(istream &input, RationalNumber &number)
{

    char slash;
    input >> number.numerator >> slash >> number.denominator;
    number.reduction();
    return input;
}
bool operator>(double a, const RationalNumber &number)
{

    int class_number = number.denominator / number.numerator;
    if (a > class_number)
        return 1;
    else
        return 0;
}
int main()
{
    RationalNumber c, d, x, y;
    printf("請輸入一有理數，格式如: 19/3\n");
    cin >> c; // 設輸入 19/3
    printf("請輸入一有理數，輸入格式如: 2/3\n");
    cin >> d; // 設輸入 2/3
    x = c + d;
    y = (++c) + d;
    cout << "x= " << x << endl; // 輸出 x=7/1
    cout << "y= " << y << endl; // 輸出 y=17/3
    x++;
    cout << x << endl; // 輸出分數格式如: 4/1
    if (7.2 > c)
        cout << "larger than\n"; // 輸出 larger than
    else
        cout << "less or equal to\n";
    x = y;
    if (x == y)
        cout << "equal \n"; // 輸出 equal
    else
        cout << "not equal \n";
    return 0;
}