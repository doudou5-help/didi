#define _CRT_SECURE_NO_WARNINGS
//1、从顺序表中删除具有最小值的元素（假设唯一）并由函数返回被删除的的值，
//空出的位置由最后一个元素填补，若顺序表为空，则显示出错信息并退出运行；
//创建一个顺序表
#include <stdio.h>
#define MaxSize 30    //定义线性表的最大长度
typedef struct
{
	int arr[MaxSize];//顺序表的元素
	int length;      //顺序表的当前长度
}SqList;			//顺序表的类型定义

void InitList(SqList &L)//初始化线性表，暂定给线性表中的元素赋值为从大到小排列的整数
{
	L.length = 0;
	int i = 0;
	for (i = 0; i < MaxSize; i++)
	{
		L.arr[i] = i;
		L.length++;
	}

}
void Printf_0(SqList L)
{
	int i = 0;
	for (i = 0; i < L.length; i++)
	{
		printf("L.arr[%d]=%d\n", i, L.arr[i]);
	}
}
int Delete_Min(SqList &L)//设计函数(假设线性表中的元素为整形)
{
	if (L.length == 0)
	{
		printf("flase-线性表为空\n");//线性表为空，提示错误并返回
		return 0;
	}
	int num=0;				//定义一个记录最小值下标的元素
	int i = 0;				
	int min = L.arr[0];		//定义一个辅助变量，并将线性表第一个元素赋值给他
	for (i = 0; i < L.length; i++)//逐个与线性表中的元素进行比较
	{
		if (min >= L.arr[i])
		{
			min = L.arr[i];//记录最小值
			num = i;		//记录下标
		}
	}
	if (num != L.length)//判断最小的元素是否为最后一个；如果是提示错误并返回，
	{
		L.arr[num] = L.arr[L.length];//将最后一个元素填补到被删除的位置
		L.length--;//线性表长度减一
		return min;//返回最小值
	}
	else
		printf("最小值为最后一个元素\n");
	return 0;
}


int main()
{
	SqList L;
	InitList(L);
	Printf_0(L);
	Delete_Min(L);
	Printf_0(L);
	return 0;
}
