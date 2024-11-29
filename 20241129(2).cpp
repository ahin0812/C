#include<stdio.h>
int Reversenum(int n)
{
	int a=0;
	while(1)
	{
		a=a+n%10;
		n=n/10;
		if(n==0)
		{
			break;
		}
		a=a*10;
		
	}
	return a;
}
int main()
{
	int a,r;
	scanf("%d",&a);
	r =Reversenum(a);
	printf("%d",r);
	return 0;
}
