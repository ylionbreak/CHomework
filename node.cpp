#include<stdio.h>
#include<stdlib.h>
struct node
{
 int data;//����ŵ�����
 struct node *next;//ָ����һ������ָ��
};

/*����������ĺ��������ص���ͷ���*/
struct node *Create_slist()
{
 int x;
 struct node *h,*s,*r;
 h=(struct node *) malloc(sizeof(struct node));//hΪͷ���
 r=h;
 scanf("%d",&x);
 while(x!=-1)//��������ʱ��-1��Ϊ������־
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

/*�������ĺ������β�Ϊͷ���*/
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

/*������ĺ���*/
void insert_node(struct node *h,int x)
{
 struct node *s,*p,*q;
 s=(struct node *)malloc(sizeof(struct node));
 s->data=x;
 q=h->next;//q��ʼֵΪ��һ�����
 p=q->next;//p��ʼֵΪ�ڶ����ڵ�
 while(p!='\0')
 {
  if(x<=q->data&&x>=p->data)//��x��������ʱ��ֹѭ��
  {
   q->next=s;//��q��P�в�����
   s->next=p;
   break;
  }
  else
  {
   q=p;
   p=p->next;
  }
 }
 if(s->data<=q->data)//��������ֵ����Сֵ��Ҳ�����һ��ֵ��С��������������
 {
  q->next=s;
  s->next=p;
 }
 else//��������ֵ�����ֵ��Ҳ���ǵ�һ��ֵ�������������ǰ��
 {
  q=h->next;
  h->next=s;
  s->next=q;
 }
}
/*�Ӵ�С������*/
void sort_slist(struct node *h)
{
 struct node *p,*q,*t;
 t=(struct node *)malloc(sizeof(struct node));
 q=h->next;
 p=q;
 while(q!='\0')//����ð�����򷽷�
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
/*������*/
int main()
{
 struct node *head;
 int x,y;
 printf("��������ʼ��,��-1Ϊ������־��������������\n");
 head=Create_slist();
 sort_slist(head);
 print_slist(head);
 printf("���������������ֵx=");
 scanf("%d",&x);
 printf("�������в�����\n");
 insert_node(head,x);
 print_slist(head);
}
