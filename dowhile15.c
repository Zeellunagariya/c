#include<stdio.h>
int main()
{
	int j,i=1;
	char ch=65;
	do
	{
	j=1;	
	do
	{
		printf("\t %c",ch++);
		j++;
	}while(j<=5);
		
		i++;	
		printf("\n");
	}while(i<=5);
}