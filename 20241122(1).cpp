#include<stdio.h>
int main()
{
	int i,j,a;
	for(i=1;i<=5;++i)
	{
		for(j=i;j<=4;++j)
		{
			printf(" ");
		}
		for(a=i;a>=1;--a)
		{
			printf("%d",a);
		}
		printf("\n");
	}
	return 0;
}
