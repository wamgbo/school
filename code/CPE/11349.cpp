<<<<<<< HEAD
#include <iostream>
#include <iomanip>

using namespace std;

void check(int num[], int n, bool result[], int index)
{

    for (int i = n * n - 1; i >= 0; i--)
    {
        if (num[i] < 0)
        {
            result[index] = 0;
            break;
        }
        else if (num[i] != num[n * n - 1 - i])
        {
            result[index] = 0;
            break;
        }
        else
        {
            result[index] = 1;
            break;
        }
    }
}
=======
#include<iostream>
>>>>>>> 911d571 (up)

using namespace std;

void check(int matrix[],int n,bool sum[],int index)
{
    int time=0;
    for(int i=0;i<n*n/2;i++)
    {
        if(matrix[i]==matrix[n*n-1-i])
            time++;
    }
    if(time==n*n/2)
        sum[index]=1;
    else
        sum[index]=0;
}
int main(void)
{
    int time,n,matrix[1024],index;
    bool ppap[99];
    cin>>time;
    for(int i=0;i<time;i++)
    {
<<<<<<< HEAD
        int matrix[1024] = {0};
        index = 0;
        cin >> n;
        for (int i = 0; i < n; i++)
=======
        index=0;
        cin>>n;
        for(int j=0;j<n;j++)
>>>>>>> 911d571 (up)
        {
            cin>>matrix[j];
            // for(int k=0;k<n;k++)
            // {
            //     cin>>matrix[index+k];
            // }
            // index+=n;
        }
        check(matrix,n,ppap,i);
    }
    for (int j=0;j<time;j++)
    {
<<<<<<< HEAD
        if (sum[i] == 1)
            cout << "Test #" << i + 1 << ": Symmetric." << endl;
=======
        if(ppap[j])
        {
            cout<<"Test #"<<j+1<<": Symmetric."<<endl;
        }
>>>>>>> 911d571 (up)
        else
            cout<<"Test #"<<j+1<<": Noe-symmetric."<<endl;
    }
}