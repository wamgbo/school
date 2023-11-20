#include<stdio.h>

int main() {
	char word[100];
	int po[6] = { 1,6,2,3,5,4 };
	int count =0;
	while (true)
	{
		scanf("%s", word);
		if (	word == "0") {
			break;
		}
		else if (word == "north")
		{
			int x = po[0];
			po[0] = po[4];//上
			po[4] = po[1];//後
			po[2] = po[1];//下

		}
		else if (word == "east")
		{

		}
		else if (word == "west")
		{

		}
		else if (word == "south")
		{

		}
	}
}