#include <stdio.h>
#include <ctype.h>


int prime(int N)
{
    for(int i=2;i<N;i++)
    {
        if(N%i==0)
            return 1;
    }
    return 0;
}

int main()
{
    int N;
    int ID;
    char cont='Y';

    while(N>2 && cont=='Y')
    {
        printf("Enter N :");
        scanf("%d",&N);
        if(prime(N))
            printf("%d is not a prime.\n",N);
        else
            printf("%d is a prime.\n",N);

        printf("Continue (Y/N)?");
        getchar();
        cont = toupper(getchar());
    }
    printf("Coding by your ID name :");
    scanf("%d",&ID);
    return 0;
}
