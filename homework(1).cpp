#include<stdio.h>
int boolisprime(int n)
{
	int i,a=0;
	for(i=2;i<n;++i)
	{
		if(n%i==0)
		{
			++a;
		}
	}
	return a;
	
}
int main()
{
	int n;
	scanf("%d",&n);
	n=boolisprime(n);
	if(n==0)
	{
		printf("소수");
	}
	else
	{
		printf("소수가 아닙니다");
	}
	return 0;
}
