#include<stdio.h>
struct circle
{
	int x;
	int y;
	double r;	
};
int main()
{
	struct circle c1;
	scanf("%d %d",&c1.x,&c1.y);
	scanf("%lf",&c1.r);
	double pi=3.14;
	printf("cl의 중점의 좌표는 (%d,%d)이고,\n",c1.x,c1.y);
	printf("둘레의 길이는%.2lf,넓이는 %.2lf 입니다\n",pi*c1.r*2,pi*c1.r*c1.r);
	return 0;
}
