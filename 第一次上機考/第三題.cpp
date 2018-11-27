#include<stdio.h>


void prchar(char c,int n)
{
    for(int i=1;i<=n;i++)
    {
        printf("%c",c);
    }
}


int main()
{
    int height;
    int ID;


    while(1)
    {
        printf("Enter height(-1 to exit) :");
        scanf("%d",&height);

        for(int i=1;i<=height;i++)
        {
            prchar(' ',i-1);
            prchar('*',height-(i-1));
            prchar(' ',2);
            prchar('*',i);
            printf("\n");
        }

        if(height==-1)
            printf("Enter your ID name :");
            scanf("%d",&ID);
    }
    return 0;
}
