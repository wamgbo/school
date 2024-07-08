#include <iostream>
#include <cstdlib>
using namespace std;
inline bool fun(long long matrix[], int num)//做回文判斷
{

    for (int i = 0; i < num/2; i++)
    {
        if (matrix[i]<0)
        {
            return 0;
        }
        
        if (matrix[i] != matrix[num-i-1])
        {
            return 0;
        }
    }
    return 1;
}
//w
int main(void)
{
    int num, N;
    bool status[1000] = {0};
    cin >> num;
    for (int i = 0; i < num; i++)
    {
        
        scanf(" N = %d",&N);//馬的這邊N前面要空格
        long long matrix[10000] = {0};
        int n=N*N;
        for(int i=0;i<n;i++)
        {
            cin >> matrix[i];
            
        }
        status[i] = fun(matrix,n);
    }

    for (int i = 0; i < num; i++)
    {
        
        if (status[i]==true)
            cout << "Test #" << i + 1 << ": Symmetric." << endl;
            
        else
            cout << "Test #" << i + 1 << ": Non-Symmetric." << endl;
    }
}