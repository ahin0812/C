#include<stdio.h>
#include<conio.h>
#include<windows.h>
int main()
{
	int x,y;
	COORD pos={1,0};
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),pos);
	printf("+: Ŀ�� ������ġ(%d, %d)",pos.X,pos.Y);
	getch();
	return 0;
}
