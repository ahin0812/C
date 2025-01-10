#include<stdio.h>
#include<string.h>
struct coorbi
{
	int x;
	int y;
};
struct circle
{
	struct coorbi cen;
	double r;
};
int main()
{
	struct circle c1;
	struct circle c2={{4,5},12.4};
	struct circle c3;
	scanf("%d %d",&c1.cen.x,&c1.cen.y);
	scanf("%lf",&c1.r);
	printf("(%d %d),%.2lf",c1.cen.x,c1.cen.y,c1.r);
	return 0;
}
