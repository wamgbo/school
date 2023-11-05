/*一種最普遍的賭博遊戲是稱為"crap"的擲骰子遊戲，這個遊戲的規則很簡單：
玩家投擲兩顆骰子，每一顆骰子有六個面，這些面分別刻有1, 2, 3, 4, 5,和6個點。
當骰子靜止下來後，將兩個骰子朝天的那一面的點數相加起來。如果第一次投擲便擲出7點或11點，
那麼判定玩家贏。若第一次擲出2點、3點或12點(這些點數稱為crap)，那麼則是玩家輸（莊家贏）。
如果第一次擲出4點、5點、6點、8點、9點或10點，則這個點數成為玩家的目標點數。
你必須繼續投擲這兩顆骰子，直到擲出你的目標點數才算贏。但若玩家在達成目標點數之前擲出了7點，
則判定玩家輸。讓此程式具有押注功能，起初玩家賭金(balance) 設定為1000元，程式提示玩家輸入一個押注金額(wager)。
輸入正確的wager之後，執行craps遊戲一次，玩家若輸了，就從balance減掉wager；若玩家贏了，則將wager加到balance。
輸入賭金0代表結束程式，程式應該印出中間執行的過程，以便判斷程式正確與否。
<Sample output>目前餘額1000元輸入賭金: 300 //使用者輸入300
擲出骰子和:10目標點: 10擲出骰子和:10玩家贏餘額: 1300元輸入賭金: 200 
//使用者輸入200擲出骰子和:8目標點: 8擲出骰子和:10擲出骰子和:6擲出骰子和:7玩家輸餘額: 1100元*/
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main() {
	srand(time(0));
	int wager, balance = 1000, num, player_num = 0,i=0;
	while (1) {
		printf("目前餘額:%d\n", balance);
		printf("請輸入賭金:");
		scanf("%d", &wager);
		if (wager == 0) {
			printf("餘額:%d\n", balance);
			break;
		}
		else
		{
			num = rand() % 10 + 2;
			if (num == 7 or num == 11)
			{
				balance += wager;
				printf("擲出的骰子和:%d\n", num);
				printf("玩家贏!\n餘額:%d\n", balance);
			}
			else if (num == 2 or num == 3 or num == 12)
			{
				balance -= wager;
				printf("擲出的骰子和:%d\n", num);
				printf("莊家贏!\n餘額:%d\n", balance);
			}
			else
			{
				printf("擲出的骰子和:%d\n目標數:%d\n", num, num);
				while (1)
				{
					i += 1;
					player_num = rand() % 10 + 2;
					if (player_num == 7) {
						balance -= wager;
						printf("擲出的骰子和:%d\n", player_num);
						printf("莊家贏!\n餘額:%d\n", balance);
						i = 0;
						break;
					}
					else if (num == player_num) {
						balance += wager;
						printf("擲出的骰子和:%d\n", player_num);
						printf("玩家贏!\n餘額:%d\n", balance);
						i = 0;
						break;
					}
					else
					{
						printf("擲出的骰子和:%d\n", player_num);

					}

					if (i >= 3) {
						balance -= wager;
						printf("莊家贏!\n餘額:%d\n", balance);
						i = 0;
						break;
					}
				}
			}
		}
		if (balance <= 0)
			{
				printf("餘額不足,遊戲結束!!!");
				break;
		}
		

	}
}