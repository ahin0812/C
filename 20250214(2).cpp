#include<stdio.h>
#include<conio.h>
#include<windows.h>
int main()
{
	int x,y;
	COORD pos={10,50};
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),pos);
	printf("+: 커서 시작위치(%d, %d)",pos.X,pos.Y);
	getch();
	pos.X=10;
	pos.Y=30;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),pos);
	printf("+: 커서 시작위치(%d, %d)",pos.X,pos.Y);
	getch();
	pos.X=20;
	pos.Y=40;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),pos);
	printf("+: 커서 시작위치(%d, %d)",pos.X,pos.Y);
	getch();
	return 0;
}
