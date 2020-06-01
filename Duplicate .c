#include<stdio.h>
#include<string.h>
void duplicate(char a[],char b[],int n);
int main()
{
	int i;
	char a[]="FOOTBALL";
	int n;
	n=strlen(a);
	char b[n];
	n--;
	for(i=0;i<n;i++)
	{
	    b[i]=a[i];
	}
	duplicate(a,b,n);
	return 0;
}
void duplicate(char a[],char b[],int n)
{
	int i,c;
	for(i=0;i<n;i++)
	{
	  c=0;
	   for(int j=0;j<n;j++)
	   {
	   	if(a[i]==b[j]) 
	   	{
	   		c++;
		}
	   }
	    if(c>1)
	   {
	   	printf("Duplicate Element is ' %c ' appeared %d times\n",a[i],c);
	   }
	  
	}
	}
