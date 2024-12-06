#include<stdio.h>
int mayabs(int a,int b)
{
	if(a<0)
	{
		a=a-(a-a);
		
	}
	if(b<0)
	{
		b=b-b-b;
	}
	return a,b;
}
int main()
{
	int a,b,c,d;
	scanf("%d %d",&a,&b);
	c,d=mayabs(a,b);
	printf("%d  %d ",c,d);
	if(c>d)
	{
		printf("%d",a);
	}
	else
	{
		printf("%d",b);
	}
	return 0;
}
