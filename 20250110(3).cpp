#include<stdio.h>
#include<string.h>
struct person
{
	char name[10];
	int age;
	double height;
};
int main()
{
	struct person list[5]={{"������",15,178.3},{"������",13,173.3},{"�����",17,183.2},{"��ȿ",19,168.9},{"�庸��",13,187.3}}; 
	for(int i=0;i<5;++i)
	{
		printf("%s %d %.1lf\n",list[i].name,list[i].age,list[i].height);
	}
	return 0;
}
