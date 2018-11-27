#include<stdio.h>
#include<math.h>


int main()
{
    int h1,h2;
    float w1,w2;
    int ID;


    while(1)
    {
        printf("Enter height(-1 yo exit) :");
        scanf("%d %d",&h1,&h2);
        if(h1==-1 && h2==-1)
        {
            printf("Bye! Enter your ID :");
            scanf("%d",&ID);
        }
        else
        {
            for(int i=h1;i<=h2;i++)
            {
                w1 = 18.5*(i/100.0*i/100.0);
                w2 = 24*(i/100.0*i/100.0);
                printf("%d cm : %4.1f ~ %4.1f(kg)\n",i,w1,w2);
            }
        }
    }
    return 0;
}



/*
Enter height(-1 to exit): 170 175
  170 cm: 53.5 ~ 69.4(kg)
  171 cm: 54.1 ~ 70.2(kg)
  172 cm: 54.7~ 71.0 (kg)
  173 cm: 55.4 ~ 71.8(kg)
  174 cm: 56.0 ~ 72.7(kg)
  175 cm: 56.7~73.5(kg)
  18.5<=BMI<24
*/
