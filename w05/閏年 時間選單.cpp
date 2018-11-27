#include<stdio.h>
#include<math.h>


int leap(int year)
{
    if((year%4==0&&(year%100!=0))||year%400==0)
        return 1;
    else
        return 0;
}

int timeconvert(int hh,int mm,int ss,int sec)
{
    sec = hh*3600 + mm*60 + ss;
    return sec;
}




int main()
{
    int choice;
    int year;
    int hh,mm,ss;
    int sec;




    while(1)
    {
        printf("Main Menu\n");
        printf("1. leap\n");
        printf("2. timeconvert\n");
        printf("3. Exit\n");
        printf("choice =>");
        scanf("%d",&choice);
        if(choice==3)
            break;

        switch(choice)
        {
        case 1:
            printf("Enter year :");
            scanf("%d",&year);
            leap(year);
            if(leap(year)==1)
                printf("year %d is a leap year.\n",year);
            else
                printf("year %d is not a leap year.\n",year);
            break;
        case 2:
            printf("Enter hh:mm:ss :");
            scanf("%d:%d:%d",&hh,&mm,&ss);
            sec = timeconvert(hh,mm,ss,sec);
            printf("%d:%d:%d = %d sec",hh,mm,ss,sec);
            break;
        }
    }
return 0;
}
