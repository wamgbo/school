#include <iostream>
using namespace std;
class RationalNumber
{
public:
    RationalNumber(int numerator = 0, int denominator = 1); // default
    constructorRationalNumber operator+(RationalNumber &num)
    {
        RationalNumber t;
        t.numerator = this->numerator + num.numerator;
        t.denominator = this->denominator + num.denominator;
        return t;
    }
    additionRationalNumber operator++(int)
    {
        RationalNumber t;
        t = *this;
        numerator++;
        denominator++;
        return t;
    } // 多載後加運算子，設後加會先以目前值運算，再將分子與分母各加一
    RationalNumber operator++()
    {
        numerator++;
        denominator++;
        return t;
    } // 多載前加運算子，設後加會先將分子與分母各加一，再傳出運算
    bool operator==(RationalNumber &num)
    {
        return numerator == num.numerator && denominator == num.denominator ? 1 : 0;
    } // 多載== 運算子
    bool operator!=(RationalNumber &num)
    {
        return numerator == num.numerator && denominator == num.denominator ? 0 : 1;
    } // 多載!= 運算子
    void reduction()
    {
        int n1 = numerator, n2 = denominator;
        while (n1 != 0)
        {
            int temp = n1;
            n1 = n2 % n1;
            n2 = temp;
        }
        numerator /= n2;
        denominator /= n2;
    } // 找分子與分母的最大公因數以對分子與分母進行化簡
private:
    int numerator;   // 分子
    int denominator; // 分母
    friend ostream &operator<<(ostream &output, RationalNumber &number);
    friend istream &operator>>(istream &input, RationalNumber &number);
    friend bool operator>(double a, const RationalNumber &number);
};
ostream &operator<<(ostream &output, RationalNumber &number)
{
    output
}


int main()
{
    RationalNumber c, d, x, y;
    printf("請輸入一有理數，格式如: 19/3\n");
    cin >> c; // 設輸入19/3
    printf("請輸入一有理數，輸入格式如: 2/3\n");
    cin >> d; // 設輸入2/3
    x = c + d;
    y = (++c) + d;
    cout << "x= " << x << endl; // 輸出x=7/1
    cout << "y= " << y << endl; // 輸出y=17/3
    x++;
    cout << x << endl; // 輸出分數格式如: 4/1
    if (7.2 > c)
        cout << "larger than\n"; // 輸出larger thanelse
    cout << "less or equal to\n";
    x = y;
    if (x == y)
        cout << "equal \n"; // 輸出equalelse
    cout << "not equal \n";
    return 0;
}