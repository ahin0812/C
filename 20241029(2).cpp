#include<stdio.h>
int main()
{
	int n,a = 0,b = 0;
	scanf("%d",&n);
	
	for(int i = 1;i<=n;i++)
	{
		if(i%6==0)
		{
			printf("%d\n",i);
			a++;
			b += i;
		}
	}
	printf("°³¼ö : %d ÇÕ : %d",a,b);
	return 0; 
}
