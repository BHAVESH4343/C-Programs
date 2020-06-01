#include<stdio.h>
struct ticket
{
	char mail[50];
	char num[10];
	char date[50];
	char from[25];
	char to[25];
	int age;
	char id[50];
	int res;
	char name[50];
	char sex;
}v;
int main()
{
	printf("             Welcome To Indian Railways E-Ticket Reservation Portal");
	printf("\n\nNo Special classes are available due to Pandemic...\n");
	printf("\n* Press 1 for Ordinary class reservation\n* Press 2 for exit");
	printf("\n");
	int t;
	scanf("%d",&t);
	if(t==2)
	{
		printf("\nThank you for your response.Availability of special class will be Intimated to your registered mail and mobile number.");	
	}
else
	{
	struct ticket v;
	int i;
	printf("\n\n\nEnter your e-mail ID to login : ");
	scanf("%s",v.mail);
	printf("\nEnter your mobile number : ");
	for(i=0;i<11;i++)
	{
		scanf("%c",&v.num[i]);
	}
	printf("Logged in");
	printf("\nEnter the date of reservation without space");
		for(i=0;i<11;i++)
	{
		scanf("%c",&v.date[i]);
	}
	printf("\nEnter your journey destination");
	printf("\nFrom : ");
	scanf("%s",v.from);
	printf("\nTo : ");
	scanf("%s",v.to);
	printf("\nYour e-Ticket reservation generation starts in few seconds.....");
	printf("\n Enter your age : ");
	scanf("%d",&v.age);
	printf("Enter the name of Id proof that you have while Travelling : ");
	scanf("%s",v.id);
	printf("\nPress 1 for single reservation.Press 2 for mutiple reservation");
	scanf("%d",&v.res);
	if(v.res==1)
	{
		printf("Welcome to Payment Poratl");
		printf("Enter the fair for single reservation of rs 500");
		int pay;
		printf("\nEnter the amount : ");
		scanf("%d",&pay); 
		printf("Enter your name : ");
		scanf("%s",v.name);
		printf("Enter your sex : ");
		scanf("%s",v.sex);
		printf("\n\n\n****************E - Ticket Generated****************");
		printf("\nName :-%s\t\t Date :-%n\nTravel From :- %s to %s\nPassenger :- %d\t\tAge:-\nAmount Paid :- %d\n\n\t\t\t*****Happy Journey*****",v.name,v.date,v.from,v.to,v.res,pay);
	}
}
return 0;
}
