#include<stdio.h>
int main()
{
	int i,j;
	int ar[6][9]= {{0,0,0,1,0,0,0,0,0},
					{0,0,0,0,0,0,0,2,0},
					{0,0,0,0,1,0,0,0,0},
					{0,2,0,1,0,0,1,0,0},
					{0,0,0,1,0,0,0,0,0},
					{0,0,1,0,0,0,1,0,0},
					};
	int a=0,b=0;
	for(i=0;i<6;++i)
	{
		for(j=0;j<9;++j)
		{
			if(ar[i][j]==0)
			{
				ar[i][j]=1;
			}
			else
			{
				ar[i][j]=0;
			}
		}
	
	}	
	for(i=0;i<6;++i)
	{
		for(j=0;j<9;++j)
		{
			printf("%d ",ar[i][j]);
		}
		printf("\n");
	}	
	return 0;
}
