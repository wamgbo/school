#include <iostream>
#include <iomanip>

using namespace std;
template <class T>
class sample
{
protected:
    T x[5] = {0}, y[5] = {0}, z[10] = {0};

public:
    sample()
    {
        for (int i = 0; i < 5; i++)
        {
            cin >> x[i];
        }
        for (int j = 0; j < 5; j++)
        {
            cin >> y[j];
        }
    }
    void display()
    {
        for (int i = 0; i < 10; i++)
        {
            cout << z[i] << ' ';
        }
        cout << endl;
    }
    void sort()
    {
        T temp;
        for (int i = 0; i < 5; i++)
        {
            for (int j = 0; j < 5 - i - 1; j++)
            {
                if (x[j] > x[j + 1])
                {
                    temp = x[j];
                    x[j] = x[j + 1];
                    x[j + 1] = temp;
                }
                if (y[j] > y[j + 1])
                {
                    temp = y[j];
                    y[j] = y[j + 1];
                    y[j + 1] = temp;
                }
            }
        }
    }
    void merger()
    {
        int j = 0;
        for (int i = 0; i < 10; i += 2)
        {
            z[i] = x[j] > y[j] ? y[j] : x[j];
            z[i + 1] = x[j] > y[j] ? x[j] : y[j];
            j++;
        }
    }
};

int main(void)
{
    sample<int> A; // 建立樣板物件 A, 在 sample 類別建構子中讓使用者分別輸入資
                   // 料成員 x 陣列與 y 陣列的各 5 筆整數資料
    A.sort();      // 分別對物件 A 資料成員 x 陣列與 y 陣列進行由小到大排序
    A.merger();    // 合併物件 A 的 x 陣列與 y 陣列資料內容到 z 陣列中
    A.display();   // 印出 z 陣列的內容
    sample<double> B;
    B.sort();
    B.merger();
    B.display();
}
