#include<stdio.h>
#include<conio.h>
#include<windows.h>
void gotoxy(int x,int y)
{
	COORD pos;
	pos.X=x;
	pos.Y=y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),pos);
}
int main()
{
	int x,y;
	do
	{
		gotoxy(0,0);
		printf("Ŀ���� ��ġ�� �Է��ϼ���:");
		scanf("%d %d",&x,&y);
		system("cls");
		gotoxy(x,y);
		printf("+");
	}while(x<=80 &&y<=24);
	return 0;
}
