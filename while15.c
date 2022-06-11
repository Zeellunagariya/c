#include<stdio.h>
int main()
{
	int j,i=1,n=1;
	while(i<=5)
	{
	j=1;	
	while(j<=5)
	{
		printf("\t %d",n++);
		j++;
	}
		printf("\n");
		i++;	
	}
}