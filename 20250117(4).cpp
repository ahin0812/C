#include<stdio.h>
#include<stdlib.h>
int main()
{
	FILE *out=fopen("numberfile.txt","r");
	int n,m;
	double d1,d2;
	if(out==NULL)
	{
		printf("파일 없음\n");
		exit(1);
	}
	printf("정수를 두 개 입력합니다\n");
	fscanf(out,"%d %d",&n,&m);
	printf("실수를 두 개 입력합니다\n");
	fscanf(out,"%lf %lf",&d1,&d2);
	printf("\n입력 받은 수들을 모두 출력합니다\n");
	printf("%d %d\n",n,m);
	printf("%lf %lf\n",d1,d2);
	printf("\n\n>>>>>>>>>>>>>>>\n");
	printf("어디서 입력 받았을까요?\n");
	fclose(out);
	return 0;
}
