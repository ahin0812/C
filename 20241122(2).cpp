#include<stdio.h>
int main()
{
	int i,j,a,b;
	for(i=1;i<=5;++i)
	{
		for(j=i;j<=4;++j)
		{
			printf("  ");
		}
		for(a=1;a<=i;++a)
		{
			printf(" %d",a);
		}
		for(b=a-2;b>=1;--b)
		{
			printf(" %d",b);
		}
		printf("\n");
	}
	return 0;
}
