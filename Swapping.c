#include<stdio.h>
int main()
{
	int a,b;
	scanf("%d\t%d",&a,&b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("Swapping of a and b is %d and %d",a,b);
	return 0;
}
