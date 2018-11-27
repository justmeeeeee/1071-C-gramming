#include <stdio.h>
#include <ctype.h>


int prime(int N)
{
    for(int i=2;i<N;i++)
    {
        if(N==i*i)
            return i;
    }
    return 0;
}

int main()
{
    int N;
    int i;
    int ID;
    char cont='Y';

    while(cont=='Y')
    {
        printf("Enter N :");
        scanf("%d",&N);
        if(i=prime(N))
            printf("Yes. %d = %d * %d\n",N,i,i);
        else
            printf("No.\n");

        printf("Continue (Y/N)?");
        getchar();
        cont = toupper(getchar());
    }
    printf("Coding by your ID name :");
    scanf("%d",&ID);
    return 0;
}
