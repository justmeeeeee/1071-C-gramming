#include <stdio.h>


int main()
{
    int n1,n2;
    int max=0;
    int temp;

    while(1)
    {
        printf("Enter n1 and n2 :");
        scanf("%d %d",&n1,&n2);

        if(n1>n2)
        {
            temp = n1;
            n1 = n2;
            n2 = temp;
        }

        for(int i=n1;i<=n2;i++)
        {
            int j=i;
            int lengh=1;

            while(j>1)
            {
                if(j%2==0)
                    j = j/2;
                else
                    j = 3*j+1;

                lengh++;
            }
            if(lengh>max)
                max = lengh;
        }
        printf("%d %d %d\n",n1,n2,max);
    }
    return 0;
}
