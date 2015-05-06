#include<stdio.h>
#include<stdlib.h>
struct node
{
 int data;//结点存放的数据
 struct node *next;//指向下一个结点的指针
};

/*建立单链表的函数，返回的是头结点*/
struct node *Create_slist()
{
 int x;
 struct node *h,*s,*r;
 h=(struct node *) malloc(sizeof(struct node));//h为头结点
 r=h;
 scanf("%d",&x);
 while(x!=-1)//输入数据时以-1作为结束标志
 {
  s=(struct node *)malloc(sizeof(struct node));
  s->data=x;
  r->next=s;
  r=s;
  scanf("%d",&x);
 }
 r->next='\0';
 return h;
}

/*输出链表的函数，形参为头结点*/
void print_slist(struct node *h)
{
 struct node *p;
 p=h->next;
 if(p=='\0')
  printf("Linklist is null!\n");
 else
 {
  printf("head");
  while(p!='\0')
  {
   printf("->%d",p->data);
   p=p->next;
  }
  printf("->end\n");
 }
}

/*插入结点的函数*/
void insert_node(struct node *h,int x)
{
 struct node *s,*p,*q;
 s=(struct node *)malloc(sizeof(struct node));
 s->data=x;
 q=h->next;//q初始值为第一个结点
 p=q->next;//p初始值为第二个节点
 while(p!='\0')
 {
  if(x<=q->data&&x>=p->data)//当x满足条件时终止循环
  {
   q->next=s;//在q和P中插入结点
   s->next=p;
   break;
  }
  else
  {
   q=p;
   p=p->next;
  }
 }
 if(s->data<=q->data)//如果插入的值比最小值（也是最后一个值）小，则插入在最后面
 {
  q->next=s;
  s->next=p;
 }
 else//如果插入的值比最大值（也就是第一个值）大，则插入在最前面
 {
  q=h->next;
  h->next=s;
  s->next=q;
 }
}
/*从大到小排序函数*/
void sort_slist(struct node *h)
{
 struct node *p,*q,*t;
 t=(struct node *)malloc(sizeof(struct node));
 q=h->next;
 p=q;
 while(q!='\0')//利用冒泡排序方法
 {
  p=q->next;
  while(p!='\0')
  {
   if(q->data<=p->data)
   {
    t->data=q->data;
    q->data=p->data;
    p->data=t->data;
    p=p->next;
   }
   else
    p=p->next;
  }
  q=q->next;
 }
}
/*主函数*/
int main()
{
 struct node *head;
 int x,y;
 printf("建立并初始化,以-1为结束标志，遍历访问链表\n");
 head=Create_slist();
 sort_slist(head);
 print_slist(head);
 printf("输入插入点结点的数据值x=");
 scanf("%d",&x);
 printf("在链表中插入结点\n");
 insert_node(head,x);
 print_slist(head);
}
