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
	printf("cl�� ������ ��ǥ�� (%d,%d)�̰�,\n",c1.x,c1.y);
	printf("�ѷ��� ���̴�%.2lf,���̴� %.2lf �Դϴ�\n",pi*c1.r*2,pi*c1.r*c1.r);
	return 0;
}
