#include<stdio.h>


void prchar(char c,int n)
{
    for(int i=1;i<=n;i++)
        printf("%c",c);
}


int main()
{
    while(1)
    {
        int height;
        int ID;
        int i;


        printf("Enter height(-1 to exit) :");
        scanf("%d",&height);

        if(height==-1)
        {
            printf("Bye! Enter your ID :");
            scanf("%d",&ID);
        }
        else
        {
            for(int i=1; i<=height; i++)
            {
                prchar(' ',height-i);
                prchar('*',i);
                prchar(' ',2);
                prchar('*',i);
                printf("\n");
            }
        }
    }
    return 0;
}
