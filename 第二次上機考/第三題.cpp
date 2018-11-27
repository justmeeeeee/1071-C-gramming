#include <stdio.h>


void tower(int n,char to,char aux,char from)
{
    if(n==1)
        printf("%c -> %c\n",from,to);
    else
    {
        tower(n-1,aux,to,from);
        printf("%c -> %c\n",from,to);
        tower(n-1,to,from,aux);
    }
}

int main()
{
    int n;

    printf("Enter n :\n");
    scanf("%d",&n);
    tower(n,'A','B','C');
    return 0;
}
