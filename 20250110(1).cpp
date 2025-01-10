#include<stdio.h>
#include<string.h>
struct Person
{
	char name[10];
	int age;
	double height;
};
int main()
{
	struct Person m1;
	struct Person m2={"허난설헌",13,159.9};
	strcpy(m1.name,"허균");
	struct Person m3;
	scanf("%s %d %lf",&m3.name,&m3.age,&m3.height);
	m1.age=19;
	m1.height=168.34;
	printf("이름은 %s,나이는 %d,키는 %.2lf\n",m1.name,m1.age,m1.height);
	printf("이름은 %s,나이는 %d,키는 %.2lf\n",m2.name,m2.age,m2.height);
	printf("이름은 %s,나이는 %d,키는 %.2lf\n",m3.name,m3.age,m3.height);
	
	return 0;
}
