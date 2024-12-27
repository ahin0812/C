#include<stdio.h>
int main()
{
	int a[6][5]={{23,22,27,21,24},
				{21,22,25,24,23},
				{20,23,22,21,24},
				{25,26,24,27,28},
				{26,24,28,29,26},
				{27,28,29,26,27}};
	for(int i=0;i<6;++i)				
	{
		for(int j=0;j<5;++j)
		{
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
	int c=0,b=0;
	scanf("%d",&c);
	for(int i=0;i<5;++i)
	{
		printf("%d ",a[c-1][i]);
		b=b+a[c-1][i];
	}
	printf("\n%d학년의 전체 인원:%d명\n",c,b);
	int d=0;
	b=0;
	scanf("%d",&d);
	for(int i=0;i<6;++i)
	{
		b=b+a[i][d-1];
		printf("%d학년 %d반:%d명\n",i+1,d,a[i][d-1]);
		
	}
	printf("%d반의 전체 인원:%d명",d,b);
			
	return 0;
}
