#include<stdio.h>
#include<stdlib.h>

int main()
{
	char c[2] = "*";
	int i, j, k;
	for ( i = 1; i < 6; i++)
	{
		for ( j = 0; j < 6-i; j++)
		{
			printf(" ");
		}
		for ( k = 0; k < 2*i-1; k++)
		{
			printf("%s",c);
		}
		printf("\n");
	}
	for ( i = 0; i < 4; i++)
	{
		for ( j = 0; j <i+2 ; j++)
		{
			printf(" ");
		}
		for ( k = 8; k > 2*i+1; k--)
		{
			printf("%s", c);
		}
		printf("\n");
		
	}
















	system("pause");

}
	




