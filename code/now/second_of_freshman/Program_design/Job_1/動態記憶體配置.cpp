#include <iostream>
#include <cstring>
using namespace std;

inline void word_to_num(char word[], int size)
{
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        if (word[i] >= '0' && word[i] <= '9')
        {
            sum += word[i] - '0';
        }
    }
    cout << "字串中之所有阿拉伯數字的和:" << sum;
}
int main(void)
{
    int num, size;
    char word[100];
    cout << "請輸入字串大小:";
    cin >> num;
    getchar();//擷取\n
    char *p = new char[num];
    cout << "請輸入字串內容:";
    cin.getline(p, num);
    size = strlen(p);//取得動態記憶體輸入內容的字串長度
    word_to_num(p, size);
    delete[] p;
}