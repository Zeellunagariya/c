#include<stdio.h>
int main()
{
	int k,sp=10,j,i=1;
	
	do
	{
	k=1;
	do
	{
		printf(" ");
		k++;
	}while(k<=sp);
	
	j=1;
	do
	{
		printf(" *");
		j++;
			
	}while(j<=i);	
		printf("\n");
		i++;
		sp--;
	}while(i<=5);
}