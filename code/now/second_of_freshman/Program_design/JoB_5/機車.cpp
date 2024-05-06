#include <iomanip>
#include <iostream>
#include <string.h>
using namespace std;
class motor
{
protected:
    string brand;
    double fuel, speed, km;

public:
    static int num;
    motor(string name, double inf, double ins)
    {
        num++;
        brand = name;
        fuel = inf;
        speed = ins;
    }
    ~motor()
    {
        num--;
    }
    motor(const motor &b)
    {
        num++;
        brand = b.brand;
        fuel = b.fuel;
        speed = b.speed;
        
    }
    void calKM()
    {
        cout << "可行駛里程數:" << ' ' << fuel * 15 << "KM"<<endl;
    }
    void show()
    {
        cout << brand << ' ' << fuel << ' ' << speed;
        calKM();
    }
};
class electricMotor : public motor
{
private:
    int seat;

public:
    electricMotor(string name, double inf, double ins, int inseat) : motor(name, inf, ins)
    {
        seat = inseat;
    }
    void calKM()
    {
        cout << "可行駛里程數:" << ' ' << fuel * 20 << "KM"<<endl;
    }
    void show()
    {
        cout << "電動機車品牌：" << brand << "座位數:" << seat << "油量：" << fuel << "速度：" << speed << "可行駛公里數：";
        calKM();
    }
};
class raceMotor : public motor
{
private:
    string raceMotor_name;

public:
    raceMotor(string name, double inf, double ins, string type) : motor(name, inf, ins)
    {
        raceMotor_name = type;
    }
    void calKM()
    {
        if (speed > 60)
            cout << "可行駛里程數:" << ' ' << fuel * 10 << "KM"<<endl;
        else
            cout << "可行駛里程數:" << ' ' << fuel * 12 << "KM"<<endl;
    }
    void show()
    {
        cout << "競技機車品牌：" << brand << "華洋賽車型號：" << raceMotor_name << "油量：" << fuel << "速度：" << speed << "可行駛公里數：";
        calKM();
    }
};

int motor::num = 0;
int main()
{
    electricMotor A("Gogoro", 10, 25, 2);         // 座位數2
    raceMotor B("華洋賽車", 15, 150, "TT150");    // 型號TT 150
    A.show();                                     // 印出電動機車品牌：Gogoro座位數：2 油量10 速度：25可行駛公里數：200
    B.show();                                     // 印出競技機車品牌：華洋賽車型號：TT 150   油量：15速度：150可行駛公里數：150
    cout << "已建立機車數" << motor::num << endl; // 印出2
    system("pause");
    return 0;
}