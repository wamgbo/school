#include <iostream>
#include <iomanip>
#include <cstring>

using namespace std;
int main(void)
{
    string words, search;
    getline(cin, words);
    cin >> search;
    int index = words.find(search, 0);//第一次檢查看看有沒有要找的字
    if (index == -1)//如果沒有就中斷
    {
        return 1;
    }
    cout << index;
    while (1)
    {
        int temp = words.find(search, index + 1);//+1是為了要跳過找到的index不然會死胡同
        if (temp == -1)//find function如果沒找到會return -1
        {
            break;
        }
        else
        {
            cout << ',' << temp;//做完第一位的前一位放逗點
            index = temp;
        }
    }
}