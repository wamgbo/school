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

int main(void)
{
	int num[10]={0,1,2,3,4,5,6,7,8,9};
	binsrch(num,0,sizeof(num)/sizeof(num[0]),8);
	iterate_binsrch(num,0,sizeof(num)/sizeof(num[0]),2);
}
