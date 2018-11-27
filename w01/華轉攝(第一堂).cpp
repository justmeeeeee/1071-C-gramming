#include<stdio.h>

int main(){
	float F,C;
	printf("Enter F:");
	scanf("%f",&F);
	C=(F-32)*5/9;
	printf("%.1fF=%.1fC",F,C);
	return 0; 
} 
