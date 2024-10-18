#include<stdio.h>
int main()
{
	int n , hour, min,sec;
	scanf("%d",&n);
	sec = n%60;
	min = n/60;
	hour = min/60;
	min %= 60;
	
	printf("%d초는 %d시간 %d 분 %d초입니다",n,hour,min,sec);
	
	return 0;
}
