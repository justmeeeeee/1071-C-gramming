#include<math.h>
#include<stdio.h>

int main()
{
	float height,weight,BMI;
	printf("Enter height(cm):");
	scanf("%f",&height);
	printf("Enter weight(kg):");
	scanf("%f",&weight);
	BMI=weight/(height*height/10000);
	printf("BMI=%.1f\n",BMI);
	while(height>0 && weight>0)
	{
		if(BMI<18.5)
			printf("體重過輕\n");
		else if(18.5<=BMI<24)
			printf("正常範圍\n");
		else if(24<=BMI<27)
			printf("體重過重\n");
		else if("27<=BMI<30")
			printf("輕度肥胖\n");
		else if(30<=BMI<35)
			printf("中度肥胖\n");
		else
			printf("重度肥胖\n");
	printf("Enter height(cm):");
	scanf("%f",&height);
	printf("Enter weight(kg):");
	scanf("%f",&weight);
	BMI=weight/(height*height/10000);
	printf("BMI=%.1f\n",BMI);
	}
	  return 0;
}
