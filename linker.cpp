#include "stdio.h"
#include <stdlib.h>
#include <time.h>




typedef struct LNode 
{
	int age;
	char name[20];
	LNode *next;
}LNode,*LinkList;

void CreatLink(LinkList &L,int n)
{
	LinkList p;
	LinkList Head;
	int i;
	L = (LinkList)malloc(sizeof(LNode));
	L->next = NULL;
	Head = L;
	if (L == NULL)
	{
		printf("error");
	}
	
	for (i = 0; i < n; ++i)
	{
		p = (LinkList)malloc(sizeof(LNode));
		if (p == NULL)
		{
			printf("error");
		}
	
		printf("输入名字年龄\n");
		scanf("%s",&p->name);
		scanf("%d",&p->age);
		
		p->next = NULL;
		Head->next = p;
		Head = p;
	}



}

void DestroyLink(LinkList &L)
{
	LinkList p = L->next;
	LinkList q;
	
	while (p != NULL)
	{
		q = p->next;
		free(p);
		p = q;
	}
	
	free(L);
	

}

void PrintLink(LinkList L)
{
	LinkList P = L->next;
	while (P != NULL)
	{
		printf("名字%s ",P->name);
		printf("年龄%d\n",P->age);
		P = P->next;
	}

	printf("\n");

}


int main()
{
	int n,order;
	order=0;
	LinkList L;
	while(1)
	{
		printf("输入1:建立链表\n输入2:输出链表\n输入3:删除链表\n");
		scanf("%d",&order);
		if(order==1)
		{
			printf("输入数据数量：\n");
			scanf("%d",&n);
			CreatLink(L,n);
		}	
		else if(order==2)
			PrintLink(L);
		else if(order==3)
			DestroyLink(L);
	} 

	return 0;
}
