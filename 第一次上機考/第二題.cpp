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
            printf("體重過輕\n");
            printf("Your normal BMI(18.5)=56.7 You need to gain %.1f kg to normal.\n",56.7-weight);
        }
        else if(18.5<=BMI && BMI<24)
        {
            printf("正常範圍\n");

        }
        else if(24<=BMI && BMI<27)
        {
            printf("稍重\n");
            printf("Your normal BMI(24)=73.5 You need to reduce %.1f kg to normal.\n",weight-73.5);
        }
        else if(27<=BMI && BMI<30)
        {
            printf("輕度肥胖\n");
            printf("Your normal BMI(24)=73.5 You need to reduce %.1f kg to normal.\n",weight-73.5);
        }
        else if(30<=BMI && BMI<35)
        {
            printf("中度肥胖\n");
            printf("Your normal BMI(24)=73.5 You need to reduce %.1f kg to normal.\n",weight-73.5);
        }
        else
        {
            printf("重度肥胖\n");
            printf("Your normal BMI(24)=73.5 You need to reduce %.1f kg to normal.\n",weight-73.5);
        }
    }
    return 0;
}
