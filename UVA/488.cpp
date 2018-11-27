#include <stdio.h>


int main()
{
    while(1)
    {
        int n;
        int A,F;

        printf("Enter n :");
        scanf("%d",&n);

        for(int i=1; i<=n; i++)
        {
            printf("Enter A and F :");
            scanf("%d %d",&A,&F);
            printf("\n");
        }

        for(int m=1; m<=n; m++)
        {
            for(int k=1; k<=F; k++)
            {
                for(int i=1; i<=A; i++)
                {
                    for(int j=1; j<=i; j++)
                    {
                        printf("%d",i);
                    }
                    printf("\n");
                }

                for(int i=A-1; i>=1; i--)
                {
                    for(int j=1; j<=i; j++)
                    {
                        printf("%d",i);
                    }
                    printf("\n");
                }
                printf("\n");
            }
        }
    }
    return 0;
}
