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
	printf("��������µ�����:>\n");
	do
	{
		scanf("%d", &guess);
		if (guess < suijishu)
		{
			printf("��С��\n");
		}
		else if (guess>suijishu)
		{
			printf("�´���\n");
		}	
	} 
	while (guess != suijishu);
	if (guess = suijishu);
	{
		printf("��ϲ�㣬�¶���\n");
	}
}


int mune()
{
	printf("**********************\n");
	printf("***1 ��ʼ��Ϸ 2 �˳�**\n");
	printf("**********************\n");
	return 0;
}
int main()
{
	srand((unsigned int)time(NULL));
	int input = 0;
	mune();
	printf("��ѡ��:>\n");
	do
	{
		scanf("%d", &input);
			switch (input)
		{
			case 1:
			{
					  /*int start;*/
					  printf("��ʼ��Ϸ");
					  game();
					 printf("�Ƿ����¿�ʼ 1�� 0��\n");
					  break;
			}
			case 0:
			{
					  printf("�����˳�");
					  break;
			}
			default:
			{
					   printf("�����������������");
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
	//		  printf("��ʼ��Ϸ\n");
	//		  game();
	//		  break; 
	//}
	//case 2:
	//{
	//		  printf("�����˳�\n");
	//		  break;
	//}
	//default:
	//{
	//	 printf("�����������������\n");
	//  	 goto again; 
	//}
	//}
	//return 0;
}
