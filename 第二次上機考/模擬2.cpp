#include <stdio.h>
#include <ctype.h>

#define Max 50

int prime(int N)
{
    for(int i=2;i<N;i++)
    {
        if(N%i==0)
            return 0;
    }
    return 1;
}


int  findPrimes(int data[],int n1,int n2)
{
    int index=0;
    int sum=0;

    for(int i=n1;i<=n2;i++)
    {
        if(prime(i))
        {
            data[index++]=i;
            sum++;
        }
    }
    return sum;
}


int prarr(int n,int data[])
{
    for(int i=0;i<n;i++)
    {
        printf("%2d",data[i]);
    }
    printf("\n");
}

int main()
{
    int n1,n2;
    int sum=0;
    int ID;
    char cont='Y';
    int data[Max]={0};

    while(cont=='Y')
    {
        printf("Enter n1 and n2 :");
        scanf("%d %d",&n1,&n2);
        sum = findPrimes(data,n1,n2);
        printf("%d primes between %d and %d.\n",sum,n1,n2);


        printf("Continue (Y/N)? ");
        getchar();
        cont = toupper(getchar());
    }
    printf("Coding by your ID name :");
    scanf("%d",&ID);
    return 0;
}
