#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define Max 60


void randgen(int score[],int n)
{
    for(int i=1;i<=n;i++)
    {
        score[i] = rand()%101;
    }
}

void prarray(int score[],int n)
{
    for(int i=0;i<n;i++)
    {
        printf("%3d ",score[i]);
        if(i%9==0)
        printf("\n");
    }
}


int max(int score[],int n)
{
    int max=0;

    for(int i=0;i<n;i++)
    {
        if(score[i]>max)
            max = score[i];
    }
    return max;
}


int min(int score[],int n)
{
    int min=0;

    for(int i=0;i<n;i++)
    {
        if(score[i]<min)
            min = score[i];
    }
    return min;
}


float average(int score[],int n)
{
    int sum=0;

    for(int i=0;i<n;i++)
    {
        sum+=score[i];
    }
    return sum/n;
}


int passed(int score[],int n)
{
    int passed=0;

    for(int i=0;i<n;i++)
    {
        if(score[i]>=60)
            passed++;
    }
    return passed;
}


int failed(int score[],int n)
{
    int failed=0;

    for(int i=0;i<n;i++)
    {
        if(score[i]<60)
            failed++;
    }
    return failed;
}


void sorting(int score[],int scoreSort[],int n)
{
    int temp;

    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-1-i;j++)
        {
            scoreSort[i]=score[i];
            scoreSort[j]=score[j];
            temp = scoreSort[j];
            scoreSort[j] = scoreSort[j+1];
            scoreSort[j+1] = temp;
        }
    }
}


void prfail(int score[],int n)
{
    for(int i=0;i<n;i++)
    {
        printf("%3d ",score[i]);
        if(i%9==0)
        printf("\n");
    }
}

int main()
{
    int scores[Max]= {0};
    int scoresSort[Max]= {-1};
    int n;
    int testrun;

    srand(time(NULL));
    printf("Enter the number of test run: ");
    scanf("%d", &testrun);
    for(int i=0; i<testrun; i++)
    {
        printf("Enter n : ");
        scanf("%d", &n);
        randgen(scores,n);
        prarray(scores,n);
        int maxScore = max(scores,n);
        int minScore = min(scores,n);
        float averageScore = average(scores,n);
        int numPassed = passed(scores,n);
        int numFailed = failed(scores,n);
        printf("\n\n");
        printf("Number of scores : %d\n", n);
        printf("*** Scores Summary ***\n");
        printf("Max = %d\n", maxScore);
        printf("Min = %d\n", minScore);
        printf("Average = %.1f\n", averageScore);
        printf("Passed = %d\n", numPassed);
        printf("Failed = %d\n", numFailed);
        sorting(scores,scoresSort,n);
        prfail(scoresSort,n);
        printf("\n");
    }
    return 0;
}
