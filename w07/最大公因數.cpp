#include <stdio.h>


int gcd(int a,int b)
{
    for(int i=a;i>=2;i--)
    {
        if(a%i==0 && b%i==0)
            return i;
    }
}

int rgcd(int a,int b)
{
    if(a==0)
        return b;
    else
        return rgcd(b%a,a);
}

int main()
{
    int a,b;

    while(1)
    {
        printf("Enter a b :");
        scanf("%d %d",&a,&b);
        printf("gcd(%d,%d) = %d\n",a,b,gcd(a,b));
        printf("rgcd(%d,%d) = %d\n",a,b,rgcd(a,b));
    }
    return 0;
}
