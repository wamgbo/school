#include <iostream>
#include <iomanip>
#include <windows.h>
using namespace std;
class Time
{
public:
    Time();                      // 建構子, 將資料成員時,分,秒初設為0
    ~Time();                     // 解構子, 印出 “時間物件已解構” 訊息
    void setTime(int, int, int); // 由外部設定時,分,秒
    void tick();                 // 每執行一次tick函式會將目前時間物件增加一秒
    void Show();                 // 顯示時間物件內的時間
private:
    int hour;   // 時, 0 - 23
    int minute; // 分, 0 - 59
    int second; // 秒, 0 - 59
};
Time::~Time()
{
    cout << "時間物件已解構";
}
Time::Time()
{
    hour = 0;
    minute = 0;
    second = 0;
}
void Time::setTime(int h, int m, int s)
{
    hour = h;
    minute = m;
    second = s;
}

void Time::tick()
{
    second++;
    if (second >= 60)
    {
        second -= 60;
        minute++;
    }
    if (minute >= 60)
    {
        hour++;
        minute -= 60;
    }
    if (hour >= 24)
    {
        hour -= 24;
    }
}

void Time::Show()
{
    cout << "目前時間!：" << setw(2) << setfill('0') << hour << ":" << setw(2) << setfill('0') << minute << ":" << setw(2) << setfill('0') << second;
}
int main()
{
    Time t;                // 建立時間物件t
    t.setTime(13, 59, 56); // 設定物件t為13時59分56秒
    while (1)
    {
        Sleep(1000);   // 延遲1000毫秒=1秒
        system("cls"); // 清除畫面
        t.tick();      // 將物件t增加一秒
        t.Show();      // 顯示t的時間
    }
    return 0;
}