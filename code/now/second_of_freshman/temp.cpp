#include <iostream>
#include <iomanip>
#include <string.h>
#include <cstdlib>
#include "head.h"
using namespace std;

int main()
{
    {
        string a = "John";
        string b = "William";
        string c = "Catht";
        cout << "\n(1)" << endl;
        // (1)
        Account John(a), William(b); // 定義兩個帳戶
        Account Cathy(c, 12456);
        // 定義帳戶Cathy
        Cathy.CheckCount();
        Cathy.WithDraw(450);
        William.Deposit(5000);
        cout << "\n(2)" << endl;
        cout << "Size of John is:  "
             << sizeof(John) << endl;
        John.CheckBalance();
        Cathy.CheckBalance();
        William.CheckBalance();
        John.WithDraw(450);
        cout << "\n(3)" << endl;
        {
            // (2)
            // (3) 區塊開始
            // 帳戶 Cathy 提款
            // 帳戶 Cathy 存款
            Account Albert("Albert", 1200); // 定義帳戶Albert
            Albert.CheckCount();
            Albert.WithDraw(258);
            // 帳戶Albert 提款
            Albert.CheckBalance();
        }
        Cathy.CheckCount();
        cout << "\n(4)" << endl;
        John.CheckRate();
    }
    getchar()
    return 0;
    // (3) 區塊結束
}
