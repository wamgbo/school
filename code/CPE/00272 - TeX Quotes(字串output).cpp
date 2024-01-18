#include <stdio.h>
#include <string.h>
int main()
{
    int i=0;
    char lines[100] = {0}, word1[4] = "``", word2[4] = "''", c;
    bool quotes = true;
    while ((c = getchar()) != '0')//輸入到0就中斷
    {
        if (c == '"')
        {
            if (quotes)//題目順序第一次出現的要以``呈現
            {
                i++;//這裡是因為放入的``是站兩個空間所以要多++;
                strcat(lines,word1);
                quotes = false;
            }
            else//題目順序第二次出現的要以''呈現
            {
                i++;
                strcat(lines,word2);
                quotes = true;
            }
        }
        else
        {
            lines[i]=c;//把當前字元放入最後輸出的字串
        }
        i++;
    }
    printf("%s\n",lines);
}