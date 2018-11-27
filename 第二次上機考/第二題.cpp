#include <stdio.h>


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

    while(1)
    {
        printf("Enter height :");
        scanf("%d",&height);
        for(int i=1;i<=height/2+1;i++)
        {
            prchar(' ',i-1);
            prchar('*',(height+2)-2*(i-1));
            printf("\n");
        }
        for(int i=height/2;i>=1;i--)
        {
            prchar(' ',i-1);
            prchar('*',(height+2)-2*(i-1));
            printf("\n");
        }
    }
    return 0;
}
