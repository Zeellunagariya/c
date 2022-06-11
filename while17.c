#include <stdio.h>
int main()
{
	int k, sp = 10, j, i = 1;

	do
	{
		k = 1;
		do
		{
			printf(" ");
			k++;
		} while (k <= sp);

		k = 1;
		do
		{
			printf(" *");
			k++;
		} while (k <= i);

		printf("\n");
		i++;
		sp--;
	} while (i <= 5);
	i = 1;
	do
	{
		k = 11;
		do
		{
			printf(" ");
			k--;
		} while (k >= sp);

		k = 4;
		do
		{
			printf(" *");
			k--;
		} while (k >= i);

		printf("\n");
		i++;
		sp--;
	} while (i <= 4);
}