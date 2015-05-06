#include<stdio.h>
#include<stdlib.h>
char mg[10][17]=
{
    "*****************",
    "   **          **",
    "** ** *** *******",
    "** ** *** *** ***",
    "** ** ***     ***",
    "**    *** *******",
    "** ****** *******",
    "** **      ******",
    "** **************",
    "**Y**************"
};

int main()
{
    char dir;
    int x,y;
    int i,j;
    dir=0;
    x=0;
    y=1;
    mg[y][x]='1';
    for(i=0;i<10;i++)
    {
        for(j=0;j<17;j++)
            printf("%c",mg[i][j]);
        printf("\n");
    }

    while(1)
    {
    	printf("输入wsad然后回车控制方向"); 
        scanf("%c",&dir);
        system("cls");
        if(dir=='w'&&mg[y-1][x]!='Y'&&mg[y-1][x]!='*'&&y-1>=0)
        {
            mg[y][x]=0;
            y--;
            mg[y][x]='1';
        }
        else if(dir=='w'&&mg[y][x]=='Y')
        {
            break;
        }

        if(dir=='s'&&mg[y+1][x]!='Y'&&mg[y+1][x]!='*'&&y+1<10)
        {
            mg[y][x]=0;
            y++;
            mg[y][x]='1';
        }
        else if(dir=='s'&&mg[1+y][x]=='Y')
        {
            break;
        }

        if(dir=='a'&&mg[y][x-1]!='Y'&&mg[y][x-1]!='*'&&x-1>=0)
        {
            mg[y][x]=0;
            x--;
            mg[y][x]='1';
        }
        else if(dir=='a'&&mg[y][x-1]=='Y')
        {
            break;
        }

        if(dir=='d'&&mg[y][1+x]!='Y'&&mg[y][1+x]!='*'&&x+1<17)
        {
            mg[y][x]=0;
            x++;
            mg[y][x]='1';
        }
        else if(dir=='d'&&mg[y][1+x]=='Y')
        {
            break;
        }

        for(i=0;i<10;i++)
        {
            for(j=0;j<17;j++)
                printf("%c",mg[i][j]);
            printf("\n");
        }

    }

    system("cls");
    printf("U find me~~~~\nI love U~~~~");
    while(1); 
    return 0;
}
