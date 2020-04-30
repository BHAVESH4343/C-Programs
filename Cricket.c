#include<stdio.h>
#include<dos.h>
#include<windows.h>
#include<conio.h>
#include<time.h>
#include<string.h>
#include"declaration.h"
#include"welcome.h"
#include"menu.h"
#include"newscoresheet"
int main()
{
	int a , key;
	char b;
	file *fnew;
	char lastinput;
	while(TRUE)
	{
		welcome();
		system("cls");
	}
		menu();
		ch=getch();
	char ch;
	switch(ch)
	{
		case '1':
			fileopen(ch);
		case '2':
			fileopen(ch);
			getch();
		case '3':
			fileopen(ch);
			system("cls");
			exit(0);
	}
	return 0;
}
