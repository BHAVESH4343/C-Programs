#include<stdio.h>
int prime(int);
int n;
int main()
{
  int x,result,i;
  scanf("%d",&x);
  i=x/2;
  result=prime(n);
  if(result==1)
  {
    printf("It is a prime");
  }
  else
  {
    printf("It is not a prime");
  }
}
  int prime(int x)
  {
    if(n==1)
    {
      return 1;
    }
    else if(x%n==1)
    {
      return 0;
    }
    else{
      n=n-1;
      prime(x);
    }
  }
