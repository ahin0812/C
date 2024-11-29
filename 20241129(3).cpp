#include<stdio.h>
int power(int a,int b)
{
	int i,c=a;
	for( i = 1;i<b;++i)
	{
		a=c*a;
	}
	return a;
}
int main()
{
	int a,b,c;
	scanf("%d %d",&a,&b);
	c=power(a,b);
	printf("%d",c);
}
