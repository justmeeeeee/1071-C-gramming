#include <stdio.h>
#include <stdlib.h>
#include <time.h>


void shuffle(int card[])
{
    for(int i=1;i<=52;i++)
    {
        temp = rand()%52+1;
        rand()%52+1 = card[i];
        card[i] = temp;
    }
}
void prarr(int card[])
{
    for(int i=1;i<=52;i++)
    {
        if(card[i]%13==0)
            printf("%c%c  ",color[i])
    }
}



int main()
{
    int card[52];
    int temp;
    char color[4]={'S','H','D','C'};
    char number[13]={'K','A','1','2','3','4','5','6','7','8','9','T','J','Q'};

    srand(time(NULL));
    printf("Original Card\n");
    for
}
