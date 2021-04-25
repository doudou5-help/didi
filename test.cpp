#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
typedef int bool;//定义bool函数
#define false 0
#define ture 1
#define MaxSize 10//定义线性表最大长度
typedef struct//定义线性表
{
	int data[MaxSize];
	int length;//记录当前线性表长度
}SqList;
void InitList(SqList L)//线性表初始化
{
	int i = 0;
	for (i = 0; i < MaxSize; i++)
	{
		L.data[i] = i;
		L.length++;
	}
}
bool LocateElem(SqList L, int e)//按值查找线性表中的元素
{
	if (L.length = 0)
	{
		prinf("表为空\n");
		return false;
	}
	
	int i = 0;
	for (i = 0; i < L.length; i++)
	{
		if (L.data[i] = e)
		{
			printf("找到了下标为%d\n",i);
			return ture;
		}
		else
		{
			printf("没有找到\m");
			return false;
		}
	}
}
bool GetElem(SqList L, int i)//按位查找线性表元素
{
	if (i<0 & i>L.length)//判断输入位置的合法性
	{
		return false;
	}
	printf("L[%d]=%d", i, L.data[i]);//输出当前位置的值
	return ture;
}
bool ListInsert(SqList &L, int i, int e)//定义插入函数
{
	int j = 0;
	if (i<0 & i>L.length + 1)//判断插入位置是否合法
		return false;
	if (L.length >= MaxSize)//判断线性表是否为空
		return false;
	for (j = L.length; j >= i; j--)//元素后移
	{
		L.data[j] = L.data[j - 1];
	}
	L.data[i - 1] = e;
	L.length++;
	return ture;
}
bool ListDelete(SqList L, int i, int &e)//定义删除函数
{
	int j = 0;
	if (L.length == 0)//判断线性表是否为空
	{
		return false;
	}
	for (j = i - 1; j < L.length-1; j++)
	{
		L.data[j] = L.data[j + 1];
	}
	L.length--;
	return ture;
}
void Print(SqList L)
{
	for (int j = 0; j < L.length; j++)
	{
		printf("%d", L.data[j]);
	}
}
int main()
{
	int i;
	int e;
	SqList L;
	InitList(L);	
	scanf("%d", &e);
	LocateElem(L, e);
	scanf("%d&d", &i, &e);
	ListInsert(L, i, e);
	scanf("%d%d",&i,&e);
	ListDelete(L, i, e);
	Print(L);
}