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
			printf("�魫�L��\n");
		else if(18.5<=BMI<24)
			printf("���`�d��\n");
		else if(24<=BMI<27)
			printf("�魫�L��\n");
		else if("27<=BMI<30")
			printf("���תέD\n");
		else if(30<=BMI<35)
			printf("���תέD\n");
		else
			printf("���תέD\n");
	printf("Enter height(cm):");
	scanf("%f",&height);
	printf("Enter weight(kg):");
	scanf("%f",&weight);
	BMI=weight/(height*height/10000);
	printf("BMI=%.1f\n",BMI);
	}
	  return 0;
}
