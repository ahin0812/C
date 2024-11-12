#include<stdio.h>
int main()
{
	int a = 1,c = 0,b = 0;
	while(a <10)
	{
		if(a%2==0)
		{
			c = c+a;
		}
		else
		{
			b = b+a;
		}
		a++;
	}
	printf("%d\n%d",c,b);
	 
	return 0;
}
