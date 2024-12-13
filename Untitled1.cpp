#include<stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
	srand((unsigned) time(NULL));
	double a[10];
	int b[10]={0};
	
	for(int i=0;i<10;++i)
	{
		a[i]=rand()%1000/10.0;
		printf("a[%d]=%.1lf\n",i,a[i]);
	}
	for(int i=0;i<10;++i)
	{
		
		for(int c=0;c<10;++i)
		{
			for(int j=0;j<10;j++)
			{
				if(i!=j)
				{
					if(a[i]<a[j])
					{
						b[i]++;
					}
				}
			}
		}
	}
	printf("\n");
	for(int i=0;i<10;i++)
	{
		printf("b[%d]=%d\n",i,b[i]+1);
	}
	return 0;
	
}
