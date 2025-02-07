#include<stdio.h>
#include<conio.h>
#include<windows.h>
int main()
{
	char ch;
	while (1)
	{
		scanf("%c",&ch);
		if(ch=='\n')
			break;
		printf("%c",ch);
	}
	return 0;
}
