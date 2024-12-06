#include<stdio.h>
int main()
{
	int br[5];
	for(int i=0;i<5;++i)
	{
		scanf("%d",&br[i]);
	}	
	for(int i=0;i<5;i++)
		printf("%d ",br[i]);
	return 0;
}
