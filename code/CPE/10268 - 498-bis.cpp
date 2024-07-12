#include <iostream>
#include <vector>  // 包含向量的標頭檔案
using namespace std;

vector<int> a;  // 宣告一個向量來存儲多項式的係數

int differential(int &x, int &max) {
    int sum = 0, exp = 1;
    for (int i = max - 1; i >= 0; i--) {  // 從高次項到低次項計算導數值
        sum += a[i] * exp * (max - i);
        exp *= x;
    }
    return sum;
}

int main(void) {
    int x, n;
    while (cin >> x) {  // 讀取 x 的值，直到 EOF 結束
        a.clear();  // 清空向量 a，以便存儲新的多項式係數
        int coef;
        char ch;
        while (cin >> coef) {  // 讀取多項式的每個係數
            a.push_back(coef);  // 將讀取的係數加入向量 a 的末尾
            ch = cin.get();  // 讀取下一個字符
            if (ch == '\n' || ch == EOF) {  // 如果下一個字符是換行符或 EOF，則退出循環
                break;
            }
        }
        n = a.size();  // 計算多項式的項數
        cout << differential(x, n) << endl;  // 計算並輸出多項式在 x 點的導數值
    }
    return 0;
}
