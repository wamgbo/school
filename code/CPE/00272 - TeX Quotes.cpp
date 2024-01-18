#include<stdio.h>
#include<string.h>
int main()
{
    char lines[100]={0};
    bool quotes=false;
    while (fgets(lines,sizeof(lines),stdin)!=NULL)
    {
        lines[strlen(lines)-1]='\0';
        for (int i = 0; i < strlen(lines); i++)
        {
            if (lines[i]='"')
            {
                
            }
            
        }
        
    }
    
}