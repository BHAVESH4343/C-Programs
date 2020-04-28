#include<stdio.h>
int main()
{
	int a[3][3],i,j,sum=0;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
		scanf("%d\t",&*(*(a+i)+j));
	    }
	}
		for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
		  printf("%d ",*(*(a+i)+j));
		}
		printf("\n");
	}
		for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
		 if(i==j)
		 {
		 	sum=sum+*(*(a+i)+j);
		 }
		 else
		 {
		 	continue;
		 }
		}
		printf("\n");
	}
	printf("sum of diagnol = %d",sum);
	return 0;
}
