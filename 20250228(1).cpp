#include<stdio.h>
#include<conio.h>
#include<windows.h>
#define X_END 79
#define Y_END 24
void gotoxy(int x,int y);
void move_leftright_key(char chr,int *x,int *y);

int main()
{
	char key;
	int x=0,y=0;
	do
	{
		gotoxy(x,y);
		printf("@");
		key=getch();
		key=getch();
		move_leftright_key(key,&x,&y);
		system("cls");
	}while(key!=27);
	return 0;
}
void gotoxy(int x,int y)
{
	COORD pos={x,y};
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),pos);
}
void move_leftright_key(char key,int *x1,int *y1)
{
	switch(key)
	{
		case 75:
			*x1=*x1-1;
			if(*x1<1)*x1=X_END;
			break;
		case 77:
			*x1=*x1+1;
			if(*x1>X_END)*x1=1;
			break;
			
	}
}
