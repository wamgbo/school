#include<stdio.h>
#include<string.h>
//骰子的對面加起來是7，上是1左是3後是5
int main() {
	int result[20] = { 0 }, j = 0;
	char word[20];
	while (1)
	{
        int up = 1, n = 2, s = 5, w = 3, e = 4, down = 6, temp = 0, casetime = 0;
		scanf("%d", &casetime);//指令輸入次數
        if (casetime == 0)//到0結束
            break;
        for (int i = 0; i < casetime; i++) {
            scanf("%s", word);//這邊會使用scanf不是fgets是因為scanf會以空格作為分隔，而fgets是讀取到'\0'
            if (strcmp(word, "north") == 0) {//當骰子往前滾(北)就將數字改面
                temp = n;//在做交換的時候需要的temp
                n = up;//往北滾 上會變成屁股
                up = s;
                s = down;
                down = temp;
            }
            else if (strcmp(word, "east") == 0) {//                                             >:D
                temp = up;
                up = w;
                w = down;
                down = e;
                e = temp;
            }
            else if (strcmp(word, "west") == 0) {
                temp = w;
                w = up;
                up = e;
                e = down;
                down = temp;
            }
            else if (strcmp(word, "south") == 0) {
                temp = s;
                s = up;
                up = n;
                n = down;
                down = temp;
            }
        }
        result[j++] = up;//將round結束時的上存入數字陣列
    }
    for (int k = 0; k < j; k++) {//一次將所有數字印出來
        printf("%d\n", result[k]);
    }
}// >:=D