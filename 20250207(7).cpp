#include<stdio.h>
#include<conio.h>
#include<windows.h>
int main()
{
	char str[50];
	scanf("%s",str);
	for(int i=0;str[i]!='\0';++i)
	{
		if(str[i]>='A' && str[i]<='z')
		{
			printf("%c",str[i]);
		}
	}
	return 0;
}
