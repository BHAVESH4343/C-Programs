#include<stdio.h>
int sum(int n);
int main()
{
	int x,r;
	scanf("%d",&x);
	r=sum(x);
	printf("%d",r);
//	return 0;
}
int sum(int x)
{
	if(x!=0)
	{
		return (x%10+sum(x/10));
	}
	
	else
	{
		return 0;
	
}
}
