#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
typedef int bool;//����bool����
#define false 0
#define ture 1
#define MaxSize 10//�������Ա���󳤶�
typedef struct//�������Ա�
{
	int data[MaxSize];
	int length;//��¼��ǰ���Ա���
}SqList;
void InitList(SqList L)//���Ա��ʼ��
{
	int i = 0;
	for (i = 0; i < MaxSize; i++)
	{
		L.data[i] = i;
		L.length++;
	}
}
bool LocateElem(SqList L, int e)//��ֵ�������Ա��е�Ԫ��
{
	if (L.length = 0)
	{
		prinf("��Ϊ��\n");
		return false;
	}
	
	int i = 0;
	for (i = 0; i < L.length; i++)
	{
		if (L.data[i] = e)
		{
			printf("�ҵ����±�Ϊ%d\n",i);
			return ture;
		}
		else
		{
			printf("û���ҵ�\m");
			return false;
		}
	}
}
bool GetElem(SqList L, int i)//��λ�������Ա�Ԫ��
{
	if (i<0 & i>L.length)//�ж�����λ�õĺϷ���
	{
		return false;
	}
	printf("L[%d]=%d", i, L.data[i]);//�����ǰλ�õ�ֵ
	return ture;
}
bool ListInsert(SqList &L, int i, int e)//������뺯��
{
	int j = 0;
	if (i<0 & i>L.length + 1)//�жϲ���λ���Ƿ�Ϸ�
		return false;
	if (L.length >= MaxSize)//�ж����Ա��Ƿ�Ϊ��
		return false;
	for (j = L.length; j >= i; j--)//Ԫ�غ���
	{
		L.data[j] = L.data[j - 1];
	}
	L.data[i - 1] = e;
	L.length++;
	return ture;
}
bool ListDelete(SqList L, int i, int &e)//����ɾ������
{
	int j = 0;
	if (L.length == 0)//�ж����Ա��Ƿ�Ϊ��
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