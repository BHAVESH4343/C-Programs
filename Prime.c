#include<stdio.h>
int prime(int);
int n;
int main()
{
  int x,result;
  scanf("%d",&x);
  n=x/2;
  result=prime(x);
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
    else if(x%n==0)
    {
      return 0;
    }
    else{
      n=n-1;
      prime(x);
    }
  }
