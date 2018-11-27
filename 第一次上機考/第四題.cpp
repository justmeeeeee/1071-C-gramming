#include<stdio.h>


void prchar(char c ,int n)
{
    for(int i=1;i<=n;i++)
    {
        printf("%c",c);
    }
}

float tem(int C,int F)
{
    C=(F-32)*5/9;
    return C;
}

int days(int year1,int year2)
{
    int total=0;
    for(int i=year1;i<=year2;i++)
    {
        if((i%4==0 && i%100!=0) || i%400==0)
            {
                total=total+1;
            }
    }
    return (year2-year1+1)*365+total;
}

void drawDiamond(int height)
{
    for(int i=1;i<=height/2+1;i++)
    {
        prchar(' ',(height/2+1)-i);
        prchar('*',2*i-1);
        printf("\n");
    }
    for(int i=height/2;i>=1;i--)
    {
        prchar(' ',(height/2+1)-i);
        prchar('*',2*i-1);
        printf("\n");
    }
}

int main()
{
    int choice;
    float F,C;
    int year1,year2;
    int height;
    int i;


    while(1)
    {
        printf("1. f2c(f)\n");
        printf("2. daysPassed(y1,y2)\n");
        printf("3. drawDiamond(h)\n");
        printf("4. Exit\n");
        printf("=>");
        scanf("%d",&choice);

        switch(choice)
        {
        case 1:
            printf("Enter temperature in F :");
            scanf("%f",&F);
            C = tem(C,F);
            printf("%.1f F = %.1f C\n",F,C);
            break;
        case 2:
            printf("Enter year1 and year2 :");
            scanf("%d %d",&year1,&year2);
            printf("days(%d,%d) = %d\n",year1,year2,days(year1,year2));
            break;
        case 3:
            printf("Enter height :");
            scanf("%d",&height);
            drawDiamond(height);
            break;
        case 4:
            if(choice==4)
                break;
        }
    }
    return 0;
}
