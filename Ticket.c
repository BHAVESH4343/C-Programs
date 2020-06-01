#include<stdio.h>
struct ticket
{
	char mail[50];
	char num[10];
	char from[25];
	char to[25];
	int age;
	char id[50];
	char drive[50];
	char swim[50];
	int res,dy,mnth,yr;
	char name[50];
	char sex[1];
}v;
int main()
{
	printf("             Welcome To Boat E-Ticket Reservation Portal");
	printf("\n\nNo Goods carrier available due to Pandemic...\n");
	printf("\n* Press 1 for Ordinary reservation\n* Press 2 for exit");
	printf("\n");
	int t;
	scanf("%d",&t);
	if(t==2)
	{
		printf("\nThank you for your response.Availability of Goods carrier will be Intimated to your registered mail and mobile number.");
	}
else
	{
	struct ticket v;
	printf("\n\n\nEnter your e-mail ID to login : ");
	scanf("%s",v.mail);
	printf("\nEnter your mobile number : ");
	scanf("%s",v.num);
	printf("Logged in");
	printf("\nEnter the date of reservation in dd.mm.yyyy format:");
	scanf("%d.%d.%d",&v.dy,&v.mnth,&v.yr);
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
	printf("\nSelf boating or Driver included.Just enter self or driver\n");
	scanf("%s",v.drive);
	printf("\nDo yo swim or not ? enter swim or no :-  ");
	scanf("%s",v.swim);
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
		printf("\n\n\n\t****************  E - Ticket Generated  ****************");
		printf("\n\n\t\t\t %s Boating Reservation\n\n\t\tName :- %s\t\t Date :- %d.%d.%d\n\n\t\tTravel From :- %s to %s\n\n\t\tPassenger :- %d\t\tAge:-%d\n\n\t\tAmount Paid :- %d\n\n\t\t\t*****Happy Journey*****",v.drive,v.name,v.dy,v.mnth,v.yr,v.from,v.to,v.res,v.age,pay);
	}
}
return 0;
}
