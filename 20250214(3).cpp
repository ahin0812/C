#include<stdio.h>
#include<conio.h>
#include<windows.h>
int main()
{
	int x,y;
	COORD pos;
	do
	{
		pos.X=0;
		pos.Y=0;
		SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),pos);
		printf("Ŀ���� ��ġ�� �Է��ϼ���:");
		scanf("%d %d",&pos.X,&pos.Y);
		system("cls");
		SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),pos);
		printf("+",pos.X,&pos.Y);
		getch();
	}while(pos.X<=80 &&pos.Y<=24);
	return 0;
}
