#define _CRT_SECURE_NO_WARNINGS


#include <stdio.h>

int main()
{
	int i, j;

	printf("     ******       ******\n"
		"   **********   **********\n"
		" ************* *************\n");

	//前三排的规律性不强  所以直接显示就好了

	for (i = 0; i<3; i++)//显示中间三排
	{
		for (j = 0; j<29; j++)
			printf("*");
		printf("\n");
	}

	for (i = 0; i<7; i++)//显示呈递减趋势规律的中间7排
	{
		for (j = 0; j<2 * (i + 1) - 1; j++)
			printf(" ");
		for (j = 0; j<27 - i * 4; j++)
			printf("*");
		printf("\n");
	}

	for (i = 0; i<14; i++)//最后一个星号*与上面的规律脱节了  所以独立显示
		printf(" ");
	printf("*\n");
	return 0;
}
//#include<stdio.h>
//#include<math.h>
//int main()
//{
//	double a = 0;
//	int lie = 0;
//	int hang = 0;
//	int j = 0;
//	int t = 0;
//	char arr[62][62];
//	for (t = 0; t<62; t++)
//	{
//		for (j = 0; j<62; j++)
//		{
//			arr[t][j] = ' ';
//		}
//	}
//
//	for (t = 0; t<10; t++)
//	{
//		a = pow(t*t, 1.0 / 3) + sqrt(1 - t*t)+20;
//		arr[(int)a][t + 20] = 'L';
//		a = pow(t*t, 1.0 / 3) - sqrt(1 - t*t)+20;
//		arr[(int)a][t + 20] = 'L';
//		/*a++;
//		hang = 30 + 20 * (2 * cos(a / 10) - cos((2 * a / 10)));
//		lie = 30 + 20 * (2 * sin(a / 10) - sin((2 * a / 10)));
//		arr[hang][lie] = 'l';*/
//	}
//	for (t = 0; t<62; t++)
//	{
//		for (j = 0; j<62; j++)
//		{
//			printf("%c", arr[t][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}
//
