#include<math.h>
#include<stdio.h>

int main(){
	int sec;
	int hh,mm,ss;
	printf("Enter sec:");
	scanf("%d sec",&sec);
	  hh=20000/3600;
	  mm=20000%3600/60;
	  ss=20000%60;
	  printf("%d sec=%02d:%02d:%02d\n",sec,hh,mm,ss);
	return 0;
}
