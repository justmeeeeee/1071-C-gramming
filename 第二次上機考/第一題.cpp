#include <stdio.h>
#include <ctype.h>


int prime(int n)
{
    for(int i=2;i<n;i++)
    {
        if(n%i==0)
            return 0;
    }
    return 1;
}

int even(int n)
{
    if(n%2==0)
        return 1;
    else
        return 0;
}


void pprime(int n)
{
    if(prime(n))
        printf("prime\n");
    else
        printf("nonprime\n");
}


void eeven(int n)
{
    if(even(n))
        printf("%d is even; ",n);
    else
        printf("%d is odd; ",n);
}

int main()
{
    int n1,n2;
    char cont='Y';

    while(cont='Y')
    {
        printf("Enter n1 and n2 :");
        scanf("%d %d",&n1,&n2);
        eeven(n1);
        pprime(n1);
        eeven(n2);
        pprime(n2);

        printf("%d + %d = %d\n",n1,n2,n1+n2);
        printf("%d - %d = %d\n",n1,n2,n1-n2);
        printf("%d * %d = %d\n",n1,n2,n1*n2);
        printf("%d / %d = %d\n",n1,n2,n1/n2);
        printf("%d %% %d = %d\n",n1,n2,n1%n2);

        printf("Continue(Y/N)?");
        getchar();
        cont = toupper(getchar());
    }
    return 0;
}
