#include<stdio.h>

void binsrch(int num[],int left,int right,int target)
{
	int mid=(right+left)/2;
	if(right<left)
	{
		printf("can't find\n");
		return;
	}	
	if(num[mid]==target)
		printf("find:%d index:%d",num[mid],mid);
	else
	{
		if(target>num[mid])
		{
			binsrch(num,mid+1,right,target);
		}
		else
			binsrch(num,left,right,target);
	}
}
void iterate_binsrch(int num[],int left,int right,int target)
{
	while(right>=left)
	{
		int mid=(right+left)/2;
		if(num[mid]==target)
		{	
			printf("find:%d index:%d",num[mid],mid);
			return;
		}
		else if(num[mid]<target)
			left=mid+1;
		else if(num[mid]>target)
			right=mid-1;
	}
	printf("can't find\n");
	
}
int iterate_fibonacci(int n)
{
	if(n==0)
		return 0;
	else if (n==1)
		return 1;
	else{
		int prev1=1;
		int prev2=0,item;
		for(int i=0;i<=n;i++)
		{
			item=prev1+prev2;
			prev2=prev1;
			prev1=item;
		}
		return item;
	}
}
int main(void)
{
	int num=iterate_fibonacci(4);
	printf("%d",num);
}


