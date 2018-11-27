#include <stdio.h>


int sumodd1(int n)
{
    if(n==1)
        return 1;
    else
        return sumodd1(n-1)+(2*n-1);
}

int sumodd2(int n)
{
    if(n==1)
        return 1;
    else
        return sumodd2(n-2)+n;
}


int main()
{
    int n;

    while(1)
    {
        printf("Enter n :");
        scanf("%d",&n);
        printf("sumodd1(%d) = %d\n",n,sumodd1(n));
        printf("sumodd2(%d) = %d\n",n,sumodd2(n));
    }
    return 0;
}



/*
Enter n: 10
sum(10)=55
10
9
8
7
6
5
4
3
2
1
rsum(10)=55
*/
