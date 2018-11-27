#include<stdio.h>
#include<math.h>


void prchar(char c,int n)
{
    for(int i=1;i<=n;i++)
        printf("%c",c);
}


void integer(int n1,int n2)
{
    printf("%d + %d = %d\n",n1,n2,n1+n2);
    printf("%d - %d = %d\n",n1,n2,n1-n2);
    printf("%d * %d = %d\n",n1,n2,n1*n2);
    printf("%d / %d = %d\n",n1,n2,n1/n2);
    printf("%d %% %d = %d\n",n1,n2,n1%n2);
}

void weight(int h1,int h2,float w1,float w2,int i)
{
    for(int i=h1; i<=h2; i++)
    {
        w1 = 18.5*(i/100.0*i/100.0);
        w2 = 24*(i/100.0*i/100.0);
        printf("%d cm : %4.1f ~ %4.1f(kg)\n",i,w1,w2);
    }
}

void triangle(int height,int i)
{
    for(int i=1; i<=height; i++)
    {
        prchar(' ',height-i);
        prchar('*',i);
        prchar(' ',2);
        prchar('*',i);
        printf("\n");
    }
}


void password(int num,int a1,int a2,int a3,int a4,int c,int b1,int b2,int b3,int b4,int num2,int choice)
{
    a1 = num / 1000;
    a2 = num / 100 % 10;
    a3 = num / 10 % 10;
    a4 = num % 10;
    c = (a1+5)%10;
    b1 = a3*1000;
    b2 = a4*100;
    b3 = c*10;
    b4 = a2;
    num2 = b1 + b2 + b3 + b4;

    printf("1. calling encode(n)\n");
    printf("2. calling decode(n)\n");
    printf("choice =>");
    scanf("%d",&choice);
    switch(choice)
    {
    case 1:
        printf("encode(%d) = %d%d%d%d\n",num,a3,a4,c,a2);
        break;
    case 2:
        printf("decode(%d) = %d%d%d%d\n",num2,a1,a2,a3,a4);
        break;
    }
}

int main()
{
    int choice;
    int n1,n2;
    float w1,w2;
    int i;
    int ID;
    int h1,h2;
    int height;
    int num,a1,a2,a3,a4,c,b1,b2,b3,b4,num2;


    while(1)
    {
        printf("Main Menu\n");
        printf("1. Arithmetic\n");
        printf("2. BMI\n");
        printf("3. Symmetrical triangle\n");
        printf("4. Password\n");
        printf("5. Exit\n");
        printf("choice=>");
        scanf("%d",&choice);
        if(choice==5)
        {
            printf("Bye! Enter your ID:");
            scanf("%d",&ID);
        }
        else
        {
            switch(choice)
            {
            case 1:
                printf("Enter two integer :");
                scanf("%d %d",&n1,&n2);
                integer(n1,n2);
                break;
            case 2:
                printf("Enter height :");
                scanf("%d %d",&h1,&h2);
                weight(h1,h2,w1,w2,i);
                break;
            case 3:
                printf("Enter height :");
                scanf("%d",&height);
                triangle(height,i);
                break;
            case 4:
                printf("Enter number :");
                scanf("%d",&num);
                password(num,a1,a2,a3,a4,c,b1,b2,b3,b4,num2,choice);
            }
        }

    }
    return 0;
}
