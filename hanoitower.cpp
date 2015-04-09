#include<stdio.h>
void hano(int n,char one,char two,char three);
void move(char x,char y);
int main()
{
  int n;
  printf("输入盘子数量");
  scanf("%d",&n);
  hano(n,'1','2','3');
  return 0;
}

void hano(int n,char one ,char two,char three)    
{

  if(n==1)
      move(one,three);
  else
    {
       hano(n-1,one,three,two);               
       move(one,three);
       hano(n-1,two,one,three);
     }
}

void move(char x,char y)               
{
  printf("把%c最上面的移到%c最上面\n",x,y);
}
