#include<stdio.h>
int mayabs(int a,int b)
{
	int n1,n2;
	n1=a;
	n2=b;
	if(a<0)
	{
		n1 = a*-1;
	}
	if(b<0)
	{
		n2=b*-1;
		
	}
	return n1>n2? a:b;
}
int main()
{
	int a,b,c;
	scanf("%d %d",&a,&b);
	c=mayabs(a,b);
	printf("%d",c);
	return 0;
}
