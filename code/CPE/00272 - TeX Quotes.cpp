#include <stdio.h>
#include <string.h>
int main()
{
    char word1[4] = "``", word2[4] = "''", c;
    bool quotes = true;
    while ((c = getchar()) != EOF)//逐字檢查
    {
        if (c == '"')//當等於"就輸出``
        {
            if (quotes)//題目順序第一次出現的要以``呈現
            {
                printf("%s", word1);
                quotes = false;
            }
            else//題目順序第二次出現的要以''呈現
            {
                printf("%s", word2);
                quotes = true;
            }
        }
        else
        {
            putchar(c);//把當前字元印出來
        }
    }
}