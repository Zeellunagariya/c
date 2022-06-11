#include<stdio.h>
int main()
{
	int a[10],i,c=0;	
	for(i=0;i<10;i++)
	{
		printf(" Enter a[%d] :",i);
		scanf("%d",&a[i]);
	}
	
	for(i=0;i<10;i++)
	{
	if(a[i]%2!=0)
	{
	
		printf("\n ODD POSITION:%d",a[i]);
		c+=a[i];
	}
}
		printf("\n TOTAL:%d",c);
}