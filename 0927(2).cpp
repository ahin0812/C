#include <stdio.h>
int main()
{
	int n1,n2;
	int a,b,c,d,e;
	
	printf("첫번째 수를 입력하세요 :");
	scanf("%d", &n1);
	printf("\n두번쨰 수를 입력하세요 :");
	scanf("%d",&n2);
	
	a = n1 + n2;
	b = n1 - n2;
	c = n1 * n2;
	d = n1 / n2;
	e = n1 % n2;
	
	printf("%d + %d = %d\n", n1, n2, a);
	printf("%d - %d = %d\n", n1, n2, b);
	printf("%d x %d = %d\n", n1, n2, c);
	printf("%d / %d = %d... %d\n", n1, n2, d ,e);
	
	
	return 0;
}
