
#include<stdio.h>
int main()
{
	int a[10],i,c=0;	
	for(i=0;i<10;i++)
	{
		printf(" Enter a[%d] :",i);
		scanf("%d",&a[i]);
	}
	
	for(i=1;i<10;i+=2)
	{
	c=a[i]+c;
		printf("\n ODD POSITION:%d",a[i]);
	}
		printf("\n TOTAL:%d",c);
}