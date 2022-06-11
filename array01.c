#include<stdio.h>

int main()
{
	int a[5],b[5],i,c,d;	
	for(i=0;i<5;i++)
	{
	printf(" \nEnter a[%d] :",i);
	scanf("%d",&a[i]);
	}
	for(i=0;i<5;i++)
	{
	printf("\n Enter b[%d] :",i);
	scanf("%d",&b[i]);
	}
	for(i=0;i<5;i++)
	{
	printf("\n a[%d] : %d",i,a[i]);
	printf("\t\t b[%d] : %d",i,b[i]);
	c=a[i]+b[i];
	printf("\t\t TOTAL :%d",c);
	}
}