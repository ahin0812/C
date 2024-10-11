
#include<stdio.h>
int main()
{
	
	int n;
	scanf("%d", &n);
	printf("%d\n", (n%2 ==0)&& (n%3 == 0));
	printf("%d\n",(n %2!=0)&& (n%3 !=0));
	return 0;
}
