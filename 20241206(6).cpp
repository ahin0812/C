#include<stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
	srand((unsigned) time(NULL));
	int ar[10];
	int a=0;
	for(int i=0;i<10;++i)
	{
		ar[i]=rand()%100;
		printf("%d ",ar[i]);
		a=a+ar[i];
	}
	printf("%d",a);
	
	
	return 0;
}
