#include<stdio.h>
int main()
{
	FILE *fp,*gp;
	int i,j,p=0,u;
	char ch,h[50];
	fp=fopen("abc.txt","w");
	fprintf(fp,"%s","Hello World");
	j=ftell(fp);
	printf("Length of the string = %d\n",j);
	fclose(fp);
	fp=fopen("abc.txt","r");
    while((ch=fgetc(fp))!=EOF)
	{
		h[p]=ch;
		p++;
	} 
	for(i=j;i>=0;i--)
	{
		printf("%c",h[i]);
	}
	fclose(fp);
	gp=fopen(h,"w+");
	fputs(h,fp);
	fclose(gp);
	return 0;
}
