#include <stdio.h>


void prchar(char c,int n)

{
	for(int i=1;i<=n;i++)
	{
		printf("%c",c);
	}
	printf("\n");
}

void prarr(int data[],int NumberCount)
{
	for(int i=1;i<=NumberCount;i++)
	{
		printf("%2d ",data[i]);
		if(NumberCount%9==0)
			printf("\n");
	}
	printf("\n");
}

int main()
{
	int n;
	int data[100];
	int sum=0;
	int A_plus=0;   //100
	int A=0;   //90~99
	int B=0;   //80~89
	int C=0;   //70~79
	int D=0;   //60~69
	int E=0;   ///0~59
	int NumberCount=0;
	int FailedCount=0;
	int PassCount=0;
	float Average;

	printf("Enter a series of scores between 0~100(-1 to exit). \n");
	scanf("%d",&n);

	while(n!=0 && n!=-1)
	{
		if(n==100)
			{
				A_plus++;
				PassCount++;
			}
		else if(n>=90 && n<100)
			{
				A++;
				PassCount++;
			}
		else if(n>=80 && n<90)
			{
				B++;
				PassCount++;
			}
		else if(n>=70 && n<80)
			{
				C++;
				PassCount++;
			}
		else if(n>=60 && n<70)
			{
				D++;
				PassCount++;
			}
		else
			{
				E++;
				FailedCount++;
			}

			data[++NumberCount]=n;
			sum+=n;
			scanf("%d",&n);
	}

	Average = (float)sum/(float)NumberCount;

	printf("\n");
	printf("Scores listing: \n");
	prarr(data,NumberCount);
	printf("\n\n");
	printf("The summary:\n");
	printf("NumberCount = %d\n",NumberCount);
	printf("FailedCount = %d\n",FailedCount);
	printf("PassCount = %d\n",PassCount);
	printf("Average = %.1f\n\n",Average);

	printf("100\t%d ", A_plus);
	prchar('*', A_plus);
	printf("90~99\t%d ", A);
	prchar('*', A);
	printf("80~89\t%d ", B);
	prchar('*', B);
	printf("70~79\t%d ", C);
	prchar('*', C);
	printf("60~69\t%d ", D);
	prchar('*', D);
	printf("0~59\t%d ", E);
	prchar('*', E);

	return 0;
}
