#include<stdio.h>
int main()
{
	char str[20];
	int a='a';
	scanf("%s",str);
	for(int i=0;str[i];++i)
	{
		if('a'<=str[i] &&str[i]<='z')
			printf("%c",str[i]-32);
		else
			printf("%c",str[i]);
	}
	
	return 0; 
}
