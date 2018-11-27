#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define Max 60


struct Data
{
    int year;
    int month;
    int day;
};


struct Lotto
{
    Data data;
    int num[Max];
};

int main()
{
    Lotto lottos[Max];
    int n;

    printf("Enter n :");
    scanf("%d",&n);

    for(int i=0;i<n;i++)
    {
        lottos[i].data.year = rand()%11+2011;
        lottos[i].data.month = rand()%12+1;
        lottos[i].data.day = rand()%31+1;
        printf("%d/%02d/%02d   ",lottos[i].data.year,lottos[i].data.month,lottos[i].data.day);
        for(int j=0;j<6;j++)
        {
            lottos[i].num[j] = rand()%49+1;
            printf("%02d ",lottos[i].num[j]);
        }
        printf("\n");
    }
    return 0;
}
