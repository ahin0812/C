#include<stdio.h>
void addnum(int *a,int *b,int *c)
{
	*c=*a+*b;
}
void subnum(int *a,int *b,int *c)
{
	*c=*a - *b;
}
void mulnum(int *a,int *b, int *c)
{
	*c= *a * *b;
}
void divnum(int *a,int *b,double *c)
{
	*c = (0.0+*a )/ *b;
}

int main()
{
	int a,b,c;
	int *pa =&a,*pb=&b,*pc=&c;
	printf("정수 입력:");
	scanf("%d %d",pa,pb);
	addnum(pa,pb,pc);
	printf("%d \n",*pc);
	subnum(pa,pb,pc);
	printf("%d\n",*pc);
	mulnum(pa,pb,pc);
	printf("%d\n",*pc);
	
	double d; double *pd;pd=&d;
	divnum(pa,pb,pd);
	printf("%lf \n",*pd);
	return 0;
}
