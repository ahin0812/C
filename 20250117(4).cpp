#include<stdio.h>
#include<stdlib.h>
int main()
{
	FILE *out=fopen("numberfile.txt","r");
	int n,m;
	double d1,d2;
	if(out==NULL)
	{
		printf("���� ����\n");
		exit(1);
	}
	printf("������ �� �� �Է��մϴ�\n");
	fscanf(out,"%d %d",&n,&m);
	printf("�Ǽ��� �� �� �Է��մϴ�\n");
	fscanf(out,"%lf %lf",&d1,&d2);
	printf("\n�Է� ���� ������ ��� ����մϴ�\n");
	printf("%d %d\n",n,m);
	printf("%lf %lf\n",d1,d2);
	printf("\n\n>>>>>>>>>>>>>>>\n");
	printf("��� �Է� �޾������?\n");
	fclose(out);
	return 0;
}
