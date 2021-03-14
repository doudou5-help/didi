#define _CRT_SECURE_NO_WARNINGS
#include"game.h"
//菜单
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
	//棋盘初始化
	InitBoard(Board,ROW,COL);
	//打印棋盘
	Displayboard(Board, ROW, COL);
	while (1)
	{
		//玩家走
		PlayerMove(Board, ROW, COL);
		Displayboard(Board, ROW, COL);
		//判断输赢*为玩家胜利#为电脑胜利Q为平局c为继续
		ret = isWin(Board,ROW,COL);
		if (ret != 'C')
		{
			break;
		}
		//电脑走
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
		printf("玩家胜\n");
	}
	else if (ret == '#')
	{
		printf("电脑胜\n");
	}
	else 
	{
		printf("平局\n");
	}
}



void test()
{
	srand((unsigned int)time(NULL));
 	int input = 0;	
	do
	{
		menu();
		printf("请选择:\n");
		scanf("%d", &input);
		switch (input)
		{
			case 1:
				game();			
				break;
			case 2:
				printf("退出游戏\n");
				input = 0;
				break;
			default:
				printf("输入错误，请重新输入\n");
				break;
		}
	} while (input);
}
int main()
{

	test();
	return 0;
}