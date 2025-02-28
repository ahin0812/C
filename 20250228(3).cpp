#include<stdio.h>
#include<string.h>
int main()
{
	int n=0,a=0,sum=0;
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		scanf("%1d",&a);
		sum=sum+a;
	}
	printf("%d",sum);
	return 0;
}
