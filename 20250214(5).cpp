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
	int i=0;
	do
	{
		gotoxy(0,0);
		printf("%d",i);
		Sleep(1000);
		i++;
	}while(1);
	return 0;
}
