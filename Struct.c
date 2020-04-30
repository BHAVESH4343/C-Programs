#include<stdio.h>
struct employee
{
	char EmpName[50];
  char DeptName[50];
  int EmpNo,Salary;
};
  int main()
{
int i,p=1;
struct employee e;
for(i=0;i<=20;i++)
{
	printf("Enter the data for Employee - %d\n",p);
	p++;
	scanf("%d\n",&e.EmpNo);
	scanf("%s\n",e.EmpName);
	scanf("%s\n",e.DeptName);
	scanf("%d",&e.Salary);
	printf("EmpNo=%d\n",e.EmpNo);
	printf("EmpName=%s\n",e.EmpName);
	printf("DeptName=%s\n",e.DeptName);
	printf("Salary=%d\n\n",e.Salary);
	fflush(stdin);
}

return 0;
}
