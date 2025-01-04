#include<stdio.h>
int main()
{
	int n,*p;
	p=&n;
	*p=70;
	printf("%d %d",n,*p);
	
	return 0;
}
