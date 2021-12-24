#include<iostream>
#include<stdlib.h>
#include <time.h> 
using namespace std;
int main (){
	srand( time( NULL ) );
	int i,j,num[9],c;
	
	for(i=0;i<=9;i++){      
		c=rand()%50+1;							//拿到一個亂數 
		for(j=0;j<i;j++){ 						//跑跑跑跑跑 
			if(c==num[j]){						//比較一次,c跟 
				c=rand()%50+1;					
				j=0;				 	 
			} 
		} 
		num[i]=c;
			
		cout<<num[i]<<" ";
	}
	
	
}
