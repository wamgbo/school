/*�@�س̴��M����չC���O�٬�"crap"���Y��l�C���A�o�ӹC�����W�h��²��G
���a���Y������l�A�C�@����l�����ӭ��A�o�ǭ����O�観1, 2, 3, 4, 5,�M6���I�C
���l�R��U�ӫ�A�N��ӻ�l�¤Ѫ����@�����I�Ƭۥ[�_�ӡC�p�G�Ĥ@�����Y�K�Y�X7�I��11�I�A
����P�w���aĹ�C�Y�Ĥ@���Y�X2�I�B3�I��12�I(�o���I�ƺ٬�crap)�A����h�O���a��]���aĹ�^�C
�p�G�Ĥ@���Y�X4�I�B5�I�B6�I�B8�I�B9�I��10�I�A�h�o���I�Ʀ������a���ؼ��I�ơC
�A�����~����Y�o������l�A�����Y�X�A���ؼ��I�Ƥ~��Ĺ�C���Y���a�b�F���ؼ��I�Ƥ��e�Y�X�F7�I�A
�h�P�w���a��C�����{���㦳��`�\��A�_�쪱�a���(balance) �]�w��1000���A�{�����ܪ��a��J�@�ө�`���B(wager)�C
��J���T��wager����A����craps�C���@���A���a�Y��F�A�N�qbalance�wager�F�Y���aĹ�F�A�h�Nwager�[��balance�C
��J���0�N�����{���A�{�����ӦL�X�������檺�L�{�A�H�K�P�_�{�����T�P�_�C
<Sample output>�ثe�l�B1000����J���: 300 //�ϥΪ̿�J300
�Y�X��l�M:10�ؼ��I: 10�Y�X��l�M:10���aĹ�l�B: 1300����J���: 200 
//�ϥΪ̿�J200�Y�X��l�M:8�ؼ��I: 8�Y�X��l�M:10�Y�X��l�M:6�Y�X��l�M:7���a��l�B: 1100��*/
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main() {
	srand(time(0));
	int wager, balance = 1000, num, player_num = 0,i=0;
	while (1) {
		printf("�ثe�l�B:%d\n", balance);
		printf("�п�J���:");
		scanf("%d", &wager);
		if (wager == 0) {
			printf("�l�B:%d\n", balance);
			break;
		}
		else
		{
			num = rand() % 10 + 2;
			if (num == 7 or num == 11)
			{
				balance += wager;
				printf("�Y�X����l�M:%d\n", num);
				printf("���aĹ!\n�l�B:%d\n", balance);
			}
			else if (num == 2 or num == 3 or num == 12)
			{
				balance -= wager;
				printf("�Y�X����l�M:%d\n", num);
				printf("���aĹ!\n�l�B:%d\n", balance);
			}
			else
			{
				printf("�Y�X����l�M:%d\n�ؼм�:%d\n", num, num);
				while (1)
				{
					i += 1;
					player_num = rand() % 10 + 2;
					if (player_num == 7) {
						balance -= wager;
						printf("�Y�X����l�M:%d\n", player_num);
						printf("���aĹ!\n�l�B:%d\n", balance);
						i = 0;
						break;
					}
					else if (num == player_num) {
						balance += wager;
						printf("�Y�X����l�M:%d\n", player_num);
						printf("���aĹ!\n�l�B:%d\n", balance);
						i = 0;
						break;
					}
					else
					{
						printf("�Y�X����l�M:%d\n", player_num);

					}

					if (i >= 3) {
						balance -= wager;
						printf("���aĹ!\n�l�B:%d\n", balance);
						i = 0;
						break;
					}
				}
			}
		}
		if (balance <= 0)
			{
				printf("�l�B����,�C������!!!");
				break;
		}
		

	}
}