#define _CRT_SECURE_NO_WARNINGS

#include"game.h"
void game()
{
	//布置好雷的信息
	char mine[ROWS][COLS] = {0} ;
	//排查出雷的信息
	char show[ROWS][COLS] = {0};
    //棋盘初始化
	Initboard (mine, ROW, COL, '#');
	Initboard (show, ROW, COL, '*');
	//打印棋盘
	//Displayboard(mine, ROW, COL);
	Displayboard(show, ROW, COL);
	//布置雷
	SetMine(mine, ROW, COL);
	//Displayboard(mine, ROW, COL);
	//扫雷
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
		printf("请选择》:\n");
		scanf("%d", &input);
		system("CLS");
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏》；\n");
			break;
		default:
			printf("输入错误，请重新输入》：\n");
		}
	} while (input);
}

int main()
{
	test();
	return 0;
}