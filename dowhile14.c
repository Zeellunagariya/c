#include<stdio.h>
int main()
{
	int j,i=1,n=1;
	do
	{
	j=1;	
	do
	{
		printf("\t %d",n);
		j++;
	}while(j<=5);
		n+=2;
		i++;	
		printf("\n");
	}while(i<=5);
}