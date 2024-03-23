#include <iomanip>
#include <iostream>
#include <string.h>
using namespace std;
class motor
{
private:
    string brand;
    double fuel, speed, km;

public:
    static int num;
    motor(string name, double fuel, double speed)
    {
        num++;
        brand = name;
        this->fuel = fuel;
        this->speed = speed;
    }
    ~motor()
    {
        num--;
    }
    void calKM()
    {
        km = fuel * 15;
    }
    void show()
    {
        calKM();
        cout << "機車品牌:" << brand << "油量:" << fuel << "速度:" << speed << "可行駛公里數:" << km;
    }
};
int motor::num = 0;

int main(void)
{
    motor A("三陽", 10, 50);                        // 建立 A 物件 機車品牌：三陽 油量：10 速度：50
    motor B("光陽", 15, 60);                        // 建立 B 物件 機車品牌：光陽 油量：15 速度：60
    cout << "已建立機車數: " << motor::num << endl; // output 2
    A.show();                                       // output 機車品牌：三陽 油量：10 速度：50 可行駛公里數：150
    return 0;
}
