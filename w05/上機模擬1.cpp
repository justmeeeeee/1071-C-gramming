#include<stdio.h>
#include<math.h>

int main()
{
    int n1,n2;
    int ID;


    while(1)
    {
        printf("Enter two integer(-1 to exit) :");
        scanf("%d %d",&n1,&n2);
        if(n1==-1 && n2==-1)
        {
            printf("Bye! Enter your ID:");
            scanf("%d",&ID);
        }
        else
        {
            printf("%d + %d = %d\n",n1,n2,n1+n2);
            printf("%d - %d = %d\n",n1,n2,n1-n2);
            printf("%d * %d = %d\n",n1,n2,n1*n2);
            printf("%d / %d = %d\n",n1,n2,n1/n2);
            printf("%d %% %d = %d\n",n1,n2,n1%n2);
        }
    }
    return 0;
}
