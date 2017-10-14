#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i;
	int j;
	int k;
	char c[2] = "*";
	printf("(A)\n");
	for ( i = 0; i < 10; i++)
	{
		for ( j = 0; j <i+1 ; j++)
		{
			printf("%s",c);
		}
		printf("\n");
	}
	printf("(B)\n");
	for ( i =0; i < 10; i++)
	{
		for ( j =0; j <10-i; j++)
		{
			printf("%s", c);
		}
		printf("\n");
	}
	printf("(C)\n");
	for ( i = 0; i <10; i++)
	{
		for (k = 0; k<i; k++)
		{
			printf(" ");
		}
		for ( j = 0; j <10-i; j++)
		{
			printf("%s", c);
		}
		printf("\n");
	}
	printf("(D)\n");
	for (i = 0; i < 10; i++)
	{
		for (k = 1; k<10-i ; k++)
		{
			printf(" ");
		}
		for (j = 0; j <i + 1; j++)
		{
			printf("%s", c);
		}
		printf("\n");
	}
















	system("pause");

}