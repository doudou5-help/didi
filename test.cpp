#define _CRT_SECURE_NO_WARNINGS
//1����˳�����ɾ��������Сֵ��Ԫ�أ�����Ψһ�����ɺ������ر�ɾ���ĵ�ֵ��
//�ճ���λ�������һ��Ԫ�������˳���Ϊ�գ�����ʾ������Ϣ���˳����У�
//����һ��˳���
#include <stdio.h>
#define MaxSize 30    //�������Ա����󳤶�
typedef struct
{
	int arr[MaxSize];//˳����Ԫ��
	int length;      //˳���ĵ�ǰ����
}SqList;			//˳�������Ͷ���

void InitList(SqList &L)//��ʼ�����Ա��ݶ������Ա��е�Ԫ�ظ�ֵΪ�Ӵ�С���е�����
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
int Delete_Min(SqList &L)//��ƺ���(�������Ա��е�Ԫ��Ϊ����)
{
	if (L.length == 0)
	{
		printf("flase-���Ա�Ϊ��\n");//���Ա�Ϊ�գ���ʾ���󲢷���
		return 0;
	}
	int num=0;				//����һ����¼��Сֵ�±��Ԫ��
	int i = 0;				
	int min = L.arr[0];		//����һ�������������������Ա��һ��Ԫ�ظ�ֵ����
	for (i = 0; i < L.length; i++)//��������Ա��е�Ԫ�ؽ��бȽ�
	{
		if (min >= L.arr[i])
		{
			min = L.arr[i];//��¼��Сֵ
			num = i;		//��¼�±�
		}
	}
	if (num != L.length)//�ж���С��Ԫ���Ƿ�Ϊ���һ�����������ʾ���󲢷��أ�
	{
		L.arr[num] = L.arr[L.length];//�����һ��Ԫ�������ɾ����λ��
		L.length--;//���Ա��ȼ�һ
		return min;//������Сֵ
	}
	else
		printf("��СֵΪ���һ��Ԫ��\n");
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
