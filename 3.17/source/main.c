#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a;
	float b;
	float c;
	float d;
	float e;
	float f;
	printf("Enter account number(-1 to end):");
	scanf_s("%d", &a);
	while (a != -1)
	{
		printf("Enter begining balance:");
		scanf_s("%f", &b);
		printf("Enter total charges:");
		scanf_s("%f", &c);
		printf("Enter total credits:");
		scanf_s("%f", &d);
		printf("Enter credit limit:");
		scanf_s("%f", &e);
		f = b + c - d;
		if (f>e)
		{
			printf("Account:       %d\n", a);
			printf("Credit limit:  %.2f\n", e);
			printf("Balance:       %.2f\n", b);
			printf("Credit Limit Exceeded.\n");
		}
		printf("Enter account number(-1 to end):");
		scanf_s("%d", &a);
	}






	system("pause");
	return 0;
}