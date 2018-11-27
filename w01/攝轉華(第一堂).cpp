#include<stdio.h>

int main(){
	float C,F;
	printf("Enter C:");
	scanf("%f",&C);
	F=C*9/5+32;
	printf("%.1fC=%.1fF",C,F);
	return 0; 
}
