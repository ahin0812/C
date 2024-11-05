#include<stdio.h>
int main()
{
	int sum,min,input;
	min = 101;
	sum = 0;
	for(int i = 1;i<= 4;i++)
	{
		scanf("%d",&input);
		if(input % 2 ==1)
		{
			
				sum += input;
				if(input <= min)
				{
					min = input;	
				}
				
	  		
		}
	}
	if(sum == 0)
	{
		printf("-1");
	}
	else
	{
	printf("%d %d",sum,min);
	}
	
	return 0;
}
