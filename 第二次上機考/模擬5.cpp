#include <stdio.h>


void prchar(char c,int n)
{
    for(int i=1;i<=n;i++)
    {
        printf("%c",c);
    }
}

int iteration(int height,int width)
{
    for(int i=1;i<=height;i++)
    {
        for(int j=1;j<=width;j++)
        {
            printf("*");
        }
        printf("\n");
    }
}

int recursion(int height,int width)
{
    if(height==1)
    {
        prchar('*',width);
        printf("\n");
    }
    else
    {
        recursion(height-1,width);
        prchar('*',width);
        printf("\n");
    }
}

int main()
{
    int height,width;

    printf("Enter height :");
    scanf("%d",&height);
    printf("Enter width :");
    scanf("%d",&width);

    printf("Draw using iteration\n");
    iteration(height,width);
    printf("\n\n");

    printf("Draw using recursion\n");
    recursion(height,width);
    return 0;
}
