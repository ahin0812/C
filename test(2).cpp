#include<stdio.h>
int main()
{
	int i=1,b= 0,c=0;
	while(i<=100)
	{
		if(i%3==0)
		{
			if(i%2==0)
			{
				b++;
			}
			else
			{
				c++;
			}
			
		}
		i++;
	}
	printf("%d %d",b,c);
}
