#include <stdio.h>


int main()
{
    int data[10]={34,74,12,9,87,66,88,99,56,11};
    int n=10;
    int temp;

    printf("original :");
    for(int i=0;i<n;i++)
    {
        printf("%2d ",data[i]);
    }
    printf("\n");

    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-1-i;j++)
        {
            if(data[j]>data[j+1])
            {
                temp = data[j];
                data[j] = data[j+1];
                data[j+1] = temp;
            }
        }
    }

    printf("sorting :");
    for(int i=0;i<n;i++)
    {
        printf("%2d ",data[i]);
    }
    printf("\n");
    return 0;
}
