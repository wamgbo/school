#include<stdio.h>
#include<string.h>
void compare(char input[]) {
	int brackets_r_1 = 0, brackets_l_1 = 0;
	for (int i = 0; i < strlen(input)-1; i++) {//利用srtlen取的字串長度,逐字檢查大括號
		switch (input[i])
		{
		case'{':				//當左大括號出現
			brackets_l_1++;		//計數器++
			break;
		case'}':				//當右大括號出現
			brackets_r_1++;		//計數器++
			break;
		default:
			break;
		}
	}
	if (brackets_l_1 > brackets_r_1) {//依據左右大括號數判斷要用哪種輸出
		printf("左括號較右括號 多 %d 個\n", brackets_l_1 - brackets_r_1);
	}
	else if (brackets_l_1 < brackets_r_1)
	{
		printf("左括號較右括號 少 %d 個\n", brackets_r_1 - brackets_l_1);
	}
	else if (brackets_l_1 - brackets_r_1 == 0)//數字一樣
	{
		printf("OK\n");
	}
}
int main() {
	char input[30] = {0};
	while (1)
	{
		fgets(input, sizeof(input), stdin);//fgets(字串,字串大小,stdin)
		if (input[0] == '\n') {				//當輸入enter就中斷，以字串方式輸入當按下enter字串狀態input[]={'\n','\0'}
			break;
		}
		else
		{
			compare(input);
		}
	}
}
