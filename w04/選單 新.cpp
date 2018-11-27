#include <stdio.h>



void prchar(char c,int n)
{
    for(int i=1; i<=n; i++)
        printf("%c",c);
}

void drawRectangle(int height,int width,int filled)
{
    if(filled==1)
    {
        for(int i=1; i<=height; i++)
        {
            for(int j=1; j<=width; j++)
            {
                printf("*");
            }
            printf("\n");
        }
    }
    else
    {
        for(int i=1; i<=height; i++)
        {
            for(int j=1; j<=width; j++)
            {
                if(i==1 || i==height || j==1 || j==width)
                    printf("*");
                else
                    printf(" ");
            }
            printf("\n");
        }
    }

}



void drawVerticaltriangle(int height,int type,int filled,int i)
{
    switch(type)
    {
    case 1:

        if(filled==1)
        {
            for(int i=1;i<=height;i++)
            {
                for(int j=1;j<=height;j++)
                {
                    if(i>=j)
                        printf("*");
                    else
                        printf(" ");
                }
              printf("\n");
            }
        }
        else
        {
            for(int i=1; i<=height; i++)
            {
                for(int j=1; j<=height; j++)
                {
                    if(i==height || i==j || j==1)
                        printf("*");
                    else
                        printf(" ");
                }
                printf("\n");
            }
        }

        break;
    case 2:
         if(filled==1)
           {
              for(int i=1;i<=height;i++)
                {
                    for(int j=height;j>=1;j--)
                    {
                        if(i>=j)
                            printf("*");
                        else
                            printf(" ");
                    }
                    printf("\n");
                }
           }
        else
        {
            for(int i=1; i<=height; i++)
            {
                for(int j=height; j>=1; j--)
                {
                    if(i==height || i==j || j==1)
                        printf("*");
                    else
                        printf(" ");
                }
                printf("\n");
            }
        }

        break;
    case 3:
        if(filled==1)
        {
            for(int i=1; i<=height; i++)
            {
                for(int j=height; j>=1; j--)
                {
                    if(i<=j)
                        printf("*");
                    else
                        printf(" ");
                }
                printf("\n");
            }
        }
        else
        {
            for(int i=1; i<=height; i++)
            {
                for(int j=height; j>=1; j--)
                {
                    if(i==1 || i==j || j==height)
                        printf("*");
                    else
                        printf(" ");
                }
                printf("\n");
            }
        }

        break;
    case 4:
        if(filled==1)
        {
            for(int i=1; i<=height; i++)
            {
                for(int j=1; j<=height; j++)
                {
                    if(i<=j)
                        printf("*");
                    else
                        printf(" ");
                }
                printf("\n");
            }
        }
        else
        {
            for(int i=1; i<=height; i++)
            {
                for(int j=1; j<=height; j++)
                {
                    if(i==1 || i==j || j==height)
                        printf("*");
                    else
                        printf(" ");
                }
                printf("\n");
            }
        }

        break;
    }
}



void drawLsoscelestriangle(int height,int type,int filled,int i)
{
    switch(type)
    {
    case 1:
        if(filled==1)
        {
            for(int i=1; i<=height; i++)
            {
                if(i==1)
                {
                    prchar(' ',height-1);
                    prchar('*',1);
                }
                else
                {
                    prchar(' ',height-i);
                    prchar('*',2*i-1);
                }
                printf("\n");
            }
        }
        else
        {
             for(int i=1; i<=height; i++)
            {
                if(i==1)
                {
                    prchar(' ',height-1);
                    prchar('*',1);
                }
                else if(1<i && i<height)
                {
                    prchar(' ',height-i);
                    prchar('*',1);
                    prchar(' ',2*(i-1)-1);
                    prchar('*',1);
                }
                else
                    prchar('*',(height+height)-1);
                printf("\n");
            }
        }
        break;
    case 2:
        if(filled==1)
        {
            for(int i=height; i>=1; i--)
            {
                if(i==1)
                {
                    prchar(' ',height-1);
                    prchar('*',1);
                }
                else
                {
                    prchar(' ',height-i);
                    prchar('*',2*i-1);
                }
                printf("\n");
            }
        }
        else
        {
            for(int i=height; i>=1; i--)
            {
                if(i==1)
                {
                    prchar(' ',height-1);
                    prchar('*',1);
                }
                else if(i<height && i>1)
                {
                    prchar(' ',height-i);
                    prchar('*',1);
                    prchar(' ',2*i-3);
                    prchar('*',1);
                }
                else
                    prchar('*',(height+height)-1);
                    printf("\n");
            }
        }
        break;
    }
}



int main()
{
    int choice;
    int height;
    int width;
    int filled;
    int type;
    int i;

    while(1)
    {
        printf("Main Menu\n");
        printf("1. Rectangle\n");
        printf("2. Vertical triangle\n");
        printf("3. Lsosceles triangle\n");
        printf("4. Exit\n");
        printf("choice=>");
        scanf("%d",&choice);
        if (choice==4)
            break;
        switch(choice)
        {
        case 1:
            printf("Enter height width filled :");
            scanf("%d %d %d",&height,&width,&filled);
            drawRectangle(height,width,filled);
            break;
        case 2:
            printf("Enter height type filled :");
            scanf("%d %d %d",&height,&type,&filled);
            drawVerticaltriangle(height,type,filled,i);
            break;
        case 3:
            printf("Enter height type filled:");
            scanf("%d %d %d",&height,&type,&filled);
            drawLsoscelestriangle(height,type,filled,i);
            break;
        }
    }
    return 0;
}

