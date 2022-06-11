#include<stdio.h>
int main()
{
	int a=0,b=1,c=1,n,i=0;
	printf("\n Enter no.:");
	scanf("%d",&n);
	do
	{
	printf("\n %d",c);
	c=a+b;
	a=b;
	b=c;
	i++;
	}while(i<=n);
	
}