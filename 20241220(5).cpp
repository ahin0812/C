#include<stdio.h>
void inputin(int *a)
{
	scanf("%d",a);
}
void inputdouble(double *a)
{
	scanf("%lf",a);
}
void printint(int *a)
{
	printf("%d\n",*a);
}
void printdouble(double *a)
{
	printf("%lf\n",*a);
}
void changeint(int *a)
{
	*a=-1* *a;
}
void changedouble(double *a)
{
	*a=-1* *a;
}
int main()
{
	int n;
	double d;
	int *pa=&n;double *pb=&d;
	inputin(pa);
	inputdouble(pb);
	printint(pa);
	printdouble(pb);
	changeint(pa);
	changedouble(pb);
	printint(pa);
	printdouble(pb);
	
	
	return 0;
}
