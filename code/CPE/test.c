#include<stdio.h>
#include<stdbool.h>
#include<string.h>

int main(){

    char str[1001] = {0};
    int i, j;
    bool flag = false;

    while(fgets(str,sizeof(str),stdin)){

        if(flag){
            printf("\n");
        }

        int count[128] = {0};
        flag = true;

        for(i = 0; i < strlen(str); i++){
            count[str[i]]++;
        }

        for(i = 1; i <= strlen(str); i++){  // the number of each ASCII
            for(j = 127; j >= 32; j--){      // counter of ASCII
                if(count[j] == i){
                    printf("%d %d\n", j, i);
                }
            }
        }    
    }

    return 0;
}