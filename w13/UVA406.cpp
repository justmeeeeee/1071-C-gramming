#include <stdio.h>


int prime(int n)
{
    for(int i=n-1;i>=2;i--)
    {
        if(n%i==0)
            return 0;
    }
    return 1;
}

int main ()
{
    int N,C;

    //printf("Enter N C:（1 <= N <= 1000， 1<= C <= N）");
    scanf("%d %d",&N,&C);
    printf("%d %d:",prime);
}
