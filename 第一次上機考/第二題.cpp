#include <stdio.h>


int main()
{
    int height;
    float weight;
    float BMI;

    while(1)
    {
        printf("Enter height and weight :");
        scanf("%d %f",&height,&weight);
        BMI = weight / (height*height/10000);
        printf("Your BMI = %.1f\n",BMI);

        if(BMI<18.5)
        {
            printf("�魫�L��\n");
            printf("Your normal BMI(18.5)=56.7 You need to gain %.1f kg to normal.\n",56.7-weight);
        }
        else if(18.5<=BMI && BMI<24)
        {
            printf("���`�d��\n");

        }
        else if(24<=BMI && BMI<27)
        {
            printf("�y��\n");
            printf("Your normal BMI(24)=73.5 You need to reduce %.1f kg to normal.\n",weight-73.5);
        }
        else if(27<=BMI && BMI<30)
        {
            printf("���תέD\n");
            printf("Your normal BMI(24)=73.5 You need to reduce %.1f kg to normal.\n",weight-73.5);
        }
        else if(30<=BMI && BMI<35)
        {
            printf("���תέD\n");
            printf("Your normal BMI(24)=73.5 You need to reduce %.1f kg to normal.\n",weight-73.5);
        }
        else
        {
            printf("���תέD\n");
            printf("Your normal BMI(24)=73.5 You need to reduce %.1f kg to normal.\n",weight-73.5);
        }
    }
    return 0;
}
