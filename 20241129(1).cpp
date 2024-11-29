#include<stdio.h>
void divison(int n)
{
	int b=1;
	while(b<n)
	{
		if(n%b==0)
		{
			printf("%d ",b);
		}
		++b;
	}
}
int main()
{
	int a;
	scanf("%d",&a);
	divison(a);
	return 0;
}
