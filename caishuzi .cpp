#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void game()
{
	int guess = 0;
	int suijishu = 0;
	suijishu = rand()%100 + 1;
	printf("%d", suijishu);
	printf("请输入你猜的数字:>\n");
	do
	{
		scanf("%d", &guess);
		if (guess < suijishu)
		{
			printf("猜小了\n");
		}
		else if (guess>suijishu)
		{
			printf("猜大了\n");
		}	
	} 
	while (guess != suijishu);
	if (guess = suijishu);
	{
		printf("恭喜你，猜对了\n");
	}
}


int mune()
{
	printf("**********************\n");
	printf("***1 开始游戏 2 退出**\n");
	printf("**********************\n");
	return 0;
}
int main()
{
	srand((unsigned int)time(NULL));
	int input = 0;
	mune();
	printf("请选择:>\n");
	do
	{
		scanf("%d", &input);
			switch (input)
		{
			case 1:
			{
					  /*int start;*/
					  printf("开始游戏");
					  game();
					 printf("是否重新开始 1是 0否\n");
					  break;
			}
			case 0:
			{
					  printf("正在退出");
					  break;
			}
			default:
			{
					   printf("输入错误，请重新输入");
					   break;
			}
		}
	} while (input);
 //   again:
	//scanf("%d", &input);
	//switch (input)
	//{
	//case 1:
	//{
	//		  printf("开始游戏\n");
	//		  game();
	//		  break; 
	//}
	//case 2:
	//{
	//		  printf("正在退出\n");
	//		  break;
	//}
	//default:
	//{
	//	 printf("输入错误，请重新输入\n");
	//  	 goto again; 
	//}
	//}
	//return 0;
}
