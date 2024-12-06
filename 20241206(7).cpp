#include<stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
	srand((unsigned) time(NULL));
	int ar[10];
	int a=0,max=0,min=100,max_idx=0,min_idx=0;
	for(int i=0;i<10;++i)
	{
		ar[i]=rand()%100;
		if(ar[i]>max)
		{
			max=ar[i];
			max_idx=i;
		}
		if(ar[i]<min)
		{
			min=ar[i];
			min_idx=i;
		}
		printf("%d ",ar[i]);
	}
	printf("\n");
	printf("최대값은 %d이고 인덱스는 %d이다\n",max,max_idx);
	printf("최소값은 %d이고 인덱스는 %d이다 \n",min,min_idx);
	
	
	return 0;
}
