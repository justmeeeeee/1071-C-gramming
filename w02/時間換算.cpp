#include<math.h>
#include<stdio.h>

int main(){
	int sec;
	int hh,mm,ss;
	  printf("Enter sec:");
	  scanf("%d",&sec);
	    hh=sec/3600;
		mm=sec%3600/60;
		ss=sec%60; 
	printf("%d sec=%02d hh:%02d mm:%02d ss",sec,hh,mm,ss);
	return 0;
} 
