#define _CRT_SECURE_NO_WARNINGS
#include"game.h"
//�˵�
void menu()
{
	printf("*********************\n");
	printf("*** 1.paly 2.exit ***\n");
	printf("*********************\n");
}
void game()
{
	char ret = 0;
	char Board[ROW][COL] = { 'a' };
	//���̳�ʼ��
	InitBoard(Board,ROW,COL);
	//��ӡ����
	Displayboard(Board, ROW, COL);
	while (1)
	{
		//�����
		PlayerMove(Board, ROW, COL);
		Displayboard(Board, ROW, COL);
		//�ж���Ӯ*Ϊ���ʤ��#Ϊ����ʤ��QΪƽ��cΪ����
		ret = isWin(Board,ROW,COL);
		if (ret != 'C')
		{
			break;
		}
		//������
		ComputerMove(Board, ROW, COL);
		Displayboard(Board, ROW, COL);
		ret = isWin(Board,ROW,COL);
		if (ret != 'C')
		{
			break;
		}
	}
	if (ret == '*')
	{
		printf("���ʤ\n");
	}
	else if (ret == '#')
	{
		printf("����ʤ\n");
	}
	else 
	{
		printf("ƽ��\n");
	}
}



void test()
{
	srand((unsigned int)time(NULL));
 	int input = 0;	
	do
	{
		menu();
		printf("��ѡ��:\n");
		scanf("%d", &input);
		switch (input)
		{
			case 1:
				game();			
				break;
			case 2:
				printf("�˳���Ϸ\n");
				input = 0;
				break;
			default:
				printf("�����������������\n");
				break;
		}
	} while (input);
}
int main()
{

	test();
	return 0;
}