#include <stdio.h>
int main()
{
	int grade;
	int Class;
	int number;
	printf("학년 : ");
	scanf("%d",&grade);
	printf("반 : ");
	scanf("%d",&Class);
	printf("번호 :");
	scanf("%d", &number);
	
	printf("%d학년 %d반 %d번입니다.",grade,Class,number);
	return 0; 
}
