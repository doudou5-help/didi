#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
typedef struct LNode{
	int data;
	struct LNode *next;
}LNode,*LinkList;
LinkList List_HeadInsert(LinkList &L)//ͷ�巨����������
{
	LNode *s; int x;
	L = new LNode;//����ͷ���
	L->next = NULL;//��ʼ����Ϊ��
	scanf("%d", &x);//�������ֵ
	while (x != 9999)//����9999��ʾ����
	{
		s = new LNode;//�����µĽ��
		s->data = x;
		s->next = L->next;
		L->next = s;
		scanf("%d", &x);
	}
	return L;
}
//LinkList List_TailInsert(LinkList &L)//����β�巨����������
//{
//	LNode*s,*r=L; int x;//rΪ��βָ��
//	L = new LNode;
//	scanf("%d", &x);//����ڵ��ֵ
//	while (x != 9999)//����9999����
//	{
//		s = new LNode;
//		s->data = x;
//		s->next = r->next;
//		r->next = s;//rָ���µı�β���
//		r = s;		
//		scanf("%d", &x);
//	}
//  r->next=NULL;//β���ָ���ÿ�
//	return L;
//}
int main()
{
	LNode* L;
	List_HeadInsert(L); 
	//List_TailInsert(L)
	return 0;
}