#include<cstdio>

class intStack
{
	int stack[100];
	int p;
public:
	intStack()
	{
		p=0;
		for(int i=0;i<100;i++)
			stack[i]=0;
	}
	int getP()
	{
		return p;
	}
	int getStack(int i)
	{
		return stack[i];
	}
	void intStackIn(int a)
	{
		stack[p]=a;
		p++;
	}
	void intStackOut()
	{
		stack[p-1]=0;
		p--;
	}
};

int main()
{
	int order,num;
	intStack intstack;
	order=0;
	num=0;
	while(1)
	{
		scanf("%d",&order);
		if(order==0)
			for(int i=0;i<intstack.getP();i++)
				printf("%d ",intstack.getStack(i) );
		if(order==1)
		{
			scanf("%d",&num);
			intstack.intStackIn(num);
		}
		if(order==2)
		{
			intstack.intStackOut();
		}
	}
	return 0;
}