#include<stdio.h>
struct coach
{
	int coach;
};
struct ticket
{
	char mail[50];
	int num[10];
	int date;
	char from[25];
	char to[25];
	int age;
	char sex;
	int ad[20];
	char id[50];
	int res;
};

void booking();
int main()
{
	printf("             Welcome To Indian Railways E-Ticket Reservation Portal");
	printf("\n\nNo Special classes are available due to Pandemic...\n");
	printf("\n* Press 1 for Ordinary class reservation\n* Press 2 for exit");
	printf("\n");
	struct coach t;
	scanf("%d",&t.coach);
	if(t.coach==2)
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
		scanf("%d",&v.num[i]);
	}
	printf("Logged in");
	printf("\nEnter the date of reservation");
	scanf("%d",&v.date);
	printf("\nEnter your journey destination");
	printf("\nFrom : ");
	scanf("%s",v.from);
	printf("\nTo : ");
	scanf("%s",v.to);
	printf("\nYour e-Ticket reservation generation starts in few seconds.....");
	printf("\n Enter your age : ");
	scanf("%d",&v.age);
	printf("Sex : ");
	scanf("%s",v.sex);
	printf("Enter your Aadhar Number : ");
		for(i=0;i<13;i++)
	{
		scanf("%d",&v.ad[i]);
	}
	printf("Enter the name of Id proof that you have while Travelling : ");
	scanf("%s",v.id);
	printf("\nPress 1 for single reservation.Press 2 for mutiple reservation");
	scanf("%d",&v.res);
	if(v.res==1)
	{
		printf("Welcome to Payment Poratl");
		int pay;
		printf("Enter the fair for single reservation of rs 500");
		printf("\nEnter the amount : ");
		scanf("%d",&pay);  
	}
}
return 0;
}

