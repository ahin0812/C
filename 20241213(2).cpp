#include<stdio.h>
int main()
{
	char sentence[80];
	printf("문장을 입력하세요");
	gets(sentence);
	puts(sentence);
	printf("%s",sentence);
	return 0; 
}
