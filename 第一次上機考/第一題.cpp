#include<stdio.h>


int main()
{
    int n1,n2;
    int ID;


    while(1)
    {
        printf("Enter two integers :");
        scanf("%d %d",&n1,&n2);
        if(n1>n2)
        {
            printf("%d > %d\n",n1,n2);
            if(n1%2==0 && n2%2==0)
                printf("%d is even ; %d is even\n",n1,n2);
            else if(n1%2==0 && n2%2!=0)
                printf("%d is even ; %d is odd\n",n1,n2);
            else if(n1%2!=0 && n2%2==0)
                printf("%d is odd ; %d is even\n",n1,n2);
            else
                printf("%d is odd ; %d is odd\n",n1,n2);
        }
        else if(n1<n2)
        {
            printf("%d < %d\n",n1,n2);
            if(n1%2==0 && n2%2==0)
                printf("%d is even ; %d is even\n",n1,n2);
            else if(n1%2==0 && n2%2!=0)
                printf("%d is even ; %d is odd\n",n1,n2);
            else if(n1%2!=0 && n2%2==0)
                printf("%d is odd ; %d is even\n",n1,n2);
            else
                printf("%d is odd ; %d is odd\n",n1,n2);
        }
        else
        {
            printf("%d = %d\n",n1,n2);
            if(n1%2==0 && n2%2==0)
                printf("%d is even\n",n1);
            else if(n1%2==0 && n2%2!=0)
                printf("%d is even ; %d is odd\n",n1,n2);
            else if(n1%2!=0 && n2%2==0)
                printf("%d is odd ; %d is even\n",n1,n2);
            else
                printf("%d is odd\n",n1);
        }


        printf("Coding by your ID name :");
        scanf("%d",&ID);
    }
    return 0;
}

