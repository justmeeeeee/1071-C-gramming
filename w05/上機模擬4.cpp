#include<stdio.h>
#include<math.h>



int main()
{
    int ID;
    int choice;
    int num,a1,a2,a3,a4,c;
    int num2,b1,b2,b3,b4;
    int decode;


    while(1)
    {
        printf("Enter number(-1 to exit) :");
        scanf("%d",&num);

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

        if(num==-1)
        {
            printf("Bye! Enter your ID :");
            scanf("%d",&ID);
        }
        else
        {
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
    }
    return 0;
}



/*
Enter N (-1 to exit): 1234
encode(1234) = 3462  // by calling encode(n)

decode(3462) = 1234  // by calling decode(n)

Enter N (-1 to exit): 8391
encode(8391) = 9133
decode(9133) = 8391
 */
