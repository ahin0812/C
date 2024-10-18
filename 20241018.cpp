#include<stdio.h>
int main()
{
	int a = 10;
	int b = 2;
	a = a - b;
	printf("a = %d\n",a);
	a *= b;
	printf("a = %d\n",a);
	a--;
	printf("a = %d\n",a);
	a %= b;
	printf("a = %d\n",a);
	a += b;
	printf("a = %d\n",a);
	a++;
	printf("a = %d\n",a);
	--a;
	printf("a = %d\n",a);
	
	return 0;
}
