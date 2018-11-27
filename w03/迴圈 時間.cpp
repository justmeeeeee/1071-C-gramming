#include<math.h>
#include<stdio.h>

int main()
{
	int sec;
	int hh,mm,ss;
	printf("Enter sec:");
	scanf("%d",&sec);
		hh=sec/3600;
		mm=sec%3600/60;
		ss=sec/60; 
	while(sec>=0)
	{
		printf("%d sec = %d hh : %d mm : %d ss\n",sec,hh,mm,ss);
		printf("Enter sec:");
	    scanf("%d",&sec);
			hh=sec/3600;
			mm=sec%3600/60;
			ss=sec/60; 
	}
	return 0;
 } 
