#include<stdio.h>
#include<stdlib.h>
int i,j;
int main_exit;
int main()
{
	char accesscode[10],passcode[10]="mycap";
	int i=0;
	printf("\n\n\t Enter the accesscode to login");
	scanf("%s",accesscode);
	if(accesscode[i]!=13&&accesscode[i]!=8)
	{
		printf("");
		accesscode[i]=getch();
		i++;
	}
	while(accesscode[i]!=13);
	accesscode[10]="\0";
	if(strcmp(accesscode,passcode)==0)
	{
		printf("\n\n accessed");
		for(i=0;i<=6;i++)
		{
			foredelay(1000);
			printf(".");
		}
		system("cls");
		menu();
	}
	else
	{
		printf("\n\n Wrong password");
		printf("enter 1 to retry & 0 to exit");
		scanf("%d",&main_exit);
		if(main_exit==1)
		{
			system("cls");
			main();
		}
		else if(main_exit==0)
		{
			system("cls");
			close();
		}
		else
		{
			printf("\nInvalid");
			foredelay(1000);
			system("cls");
			goto login_try;
		}
		}
		return 0;
		}
