#include<stdio.h>
void printarray(int ar[]);
void inputdata(int *p);
int main()
{
	int ar[20]={0};
	printarray(ar);
	return 0;
}
void printarray(int ar[])
{
	for(int i=0;i<20;++i)
	{
		printf("%d ",*(ar+i));
	}
}
