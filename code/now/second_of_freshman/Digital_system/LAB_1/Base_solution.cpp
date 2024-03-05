#include <iostream>
using namespace std;

inline void inpu(int num[])
{
    char word = 'A',input;
    for (int i = 0; i < 9; i++)
    {
        cout << word << ':';
        cin >> input;
        if(input>='0'&&input<='9')
        {
            num[i]=(input-'0');
        }
        else
        {
            num[i]=(input-'A')+10;
        }
        word++;
    }
}
inline void check(int num[], int &r)
{
    for (int i = 0; i < 3; i++)
    {
        if (num[8 - i] < num[2 - i] + num[5 - i])
        {
            r = num[2 - i] + num[5 - i] - num[8 - i];
        }
    }
}
int main()
{
    int num[9];
    int r = 0;
    inpu(num);
    check(num, r);
    cout <<"計算出基底r為:"<< r;
    cout << '\n';
}