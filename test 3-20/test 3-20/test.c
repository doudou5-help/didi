#define _CRT_SECURE_NO_WARNINGS

#include"game.h"
void game()
{
	//���ú��׵���Ϣ
	char mine[ROWS][COLS] = {0} ;
	//�Ų���׵���Ϣ
	char show[ROWS][COLS] = {0};
    //���̳�ʼ��
	Initboard (mine, ROW, COL, '#');
	Initboard (show, ROW, COL, '*');
	//��ӡ����
	//Displayboard(mine, ROW, COL);
	Displayboard(show, ROW, COL);
	//������
	SetMine(mine, ROW, COL);
	//Displayboard(mine, ROW, COL);
	//ɨ��
	ClearMine(mine, show, ROW,COL,EASY_COUNT);
	
}
void menu()
{
	printf("***************\n");
	printf("**** 1.play ***\n");
	printf("**** 0.exit ***\n");
	printf("***************\n");
}

void test()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("��ѡ��:\n");
		scanf("%d", &input);
		system("CLS");
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("�˳���Ϸ����\n");
			break;
		default:
			printf("����������������롷��\n");
		}
	} while (input);
}

int main()
{
	test();
	return 0;
}