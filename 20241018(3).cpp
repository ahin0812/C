#include<stdio.h>
int main()
{
	int n , hour, min,sec;
	scanf("%d",&n);
	sec = n%60;
	min = n/60;
	hour = min/60;
	min %= 60;
	
	printf("%d�ʴ� %d�ð� %d �� %d���Դϴ�",n,hour,min,sec);
	
	return 0;
}
