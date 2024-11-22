#include<stdio.h>
int main()
{
	int a,i,b=0;
	scanf("%d",&a);
	for(i=1;i<=a;++i)
	{
		printf("%2d:",i);
		for(b=1;b<=i;++b)
		{
			if(i%b==0)
			{
				printf("%d ",b);
			}
		}
		printf("\n");
	}
	return 0;
}
