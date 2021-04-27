#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
typedef struct LNode{
	int data;
	struct LNode *next;
}LNode,*LinkList;
LinkList List_HeadInsert(LinkList &L)//头插法建立单链表
{
	LNode *s; int x;
	L = new LNode;//创建头结点
	L->next = NULL;//初始链表为空
	scanf("%d", &x);//输入结点的值
	while (x != 9999)//输入9999表示结束
	{
		s = new LNode;//创建新的结点
		s->data = x;
		s->next = L->next;
		L->next = s;
		scanf("%d", &x);
	}
	return L;
}
//LinkList List_TailInsert(LinkList &L)//利用尾插法建立单链表
//{
//	LNode*s,*r=L; int x;//r为表尾指针
//	L = new LNode;
//	scanf("%d", &x);//输入节点的值
//	while (x != 9999)//输入9999结束
//	{
//		s = new LNode;
//		s->data = x;
//		s->next = r->next;
//		r->next = s;//r指向新的表尾结点
//		r = s;		
//		scanf("%d", &x);
//	}
//  r->next=NULL;//尾结点指针置空
//	return L;
//}
int main()
{
	LNode* L;
	List_HeadInsert(L); 
	//List_TailInsert(L)
	return 0;
}