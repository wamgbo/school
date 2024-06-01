#include <iostream>
using namespace std;
int logc(int x, int y)
{
    return ((x + y) * (x + y + 1) / 2) + x;//公式
}
int main(void)
{
    int num, sum[1000] = {0}, x1, y1, x2, y2;
    cin >> num;

    for (int i = 0; i < num; i++)
    {
        cin >> x1 >> y1 >> x2 >> y2;
        sum[i] = logc(x2, y2) - logc(x1, y1);
    }
    for (int i = 0; i < num; i++)
    {
        cout << "Case " << i + 1 << ": " << sum[i]<<endl;
    }
}
