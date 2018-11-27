#include <stdio.h>


int sum(int n)
{
    if(n==1)
        return 1;
    else
        return sum(n-1)+3*(n-1)+1;
}

int main()
{
    int n;

    printf("Enter n :");
    scanf("%d",&n);
    printf("sum(%d) = %d\n",n,sum(n));
    printf("sum(%d) = %d\n",n+1,sum(n+1));
    printf("sum(%d) = %d\n",n+2,sum(n+2));
    return 0;
}
 /*sum(n) = 1 + 4 + 7 + 10 + ... +(3*(n-1)+1) */
