#include<stdio.h>
#include<stdlib.h>
int main()
{	
	int a;
	int b;
	printf("�п�J��:");
	scanf_s("%d",&a);
	printf("�п�J�e:");
	scanf_s("%d",&b);
	char sign = '+';
	char sign2 = ' ';
	int i, j;
	for ( i = 0; i < a; i++)
	{
		for ( j = 0; j < b; j++)
		{
			if ((i==0) || (i==a-1) || (j==0) || (j==b-1))
			{
				printf("%c",sign);
			}
			else
			{
				printf("%c",sign2);
			}
		}
		printf("\n");
	}










	system("pause");

}