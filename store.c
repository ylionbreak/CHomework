#include<stdio.h>

struct Thing{
int Nember;
char name[100];
int amount;
}thing[100];


int main()
{
    int order=0;
    int i=0;
    int Times,Nember;
    char Names[20];
    for(i=0;i<100;i++)
    {
        thing[i].amount=0;
    }
    while(1)
    {
        system("cls");
        printf("商品管理系统\npower by:Y\n");
        for(i=1;i<100;i++)
        {
            if(thing[i].amount!=0)
                printf("%d号:%s %d件\n--------------\n",thing[i].Nember,thing[i].name,thing[i].amount);
        }
        printf("\n\n\n输入你的指令\n1:添加货物\n2:销售货物\n");
        scanf("%d",&order);
        if(order==1)
        {
            printf("输入货物编号 名称 多少件\n");
            scanf("%d%s%d",&Times,Names,&Nember);
            for(i=0;i<100;i++)
            {
                thing[Times].name[i]=Names[i];
            }
            thing[Times].Nember=Times;
            thing[Times].amount=thing[Times].amount+Nember;
        }
        else if(order==2)
        {
            printf("输入货物编号 多少件\n");
            scanf("%d%d",&Times,&Nember);
            thing[Times].Nember=Times;
            thing[Times].amount=thing[Times].amount-Nember;
        }
        else
        {
            printf("fuck yourmama!I don't know what u say!!!!");
        }
    }

}
