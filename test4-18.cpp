#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
int main()
{
	int a=1;
	int b;
	switch (a)
	{
	case 1: b = 30;
	case 2: b = 20;
	case 3: b = 10;
	default: b = 0;
		printf("%d\n", b);
	}
	
	return 0;
}
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int k = 11;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		if (k == arr[i])
//		{
//			printf("我找到了");
//			break;
//		}
//	}
//	
//	
//	return 0;
//
//}
////int main()
//{
//	int sum = 0;
//	int ret = 1;
//	int i = 0;
//	for (i = 1; i <= 10; i++)
//	{
//		int j = 1;
//		ret = 1;
//		for (j = 1; j <= i; j++)
//			ret = ret*j;
//		sum = sum + ret;
//	}
//	
//	printf("%d\n", sum);
//	return 0;
//
//}
//int main()
//{
//	int j = 1;
//	int i = 0;
//	int a = 0;
//	printf("请输入一个数字\n");
//	scanf("%d", &a);
//	for (i = 1; i <= a; i++)
//		j = j*i;
//	printf("%d\n", j);
//	return 0;
//
//}
//int main()
//{
//	int i = 1;
//	for (i = 1; i < 10; i++)
//	{
//		int j = 1; 
//		for (j = 1; j <=i; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	return 0;
//}