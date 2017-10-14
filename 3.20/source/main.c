#include<stdlib.h>
#include<stdio.h>
int main()
{
	int a;
	float b;
	float c;
	printf("Enter # of hours worked(-1 to end):");
	scanf_s("%d", &a);
	while (a != -1)
	{
		printf("Enter hourly rate of the worker ($00.00) :");
		scanf_s("%f", &b);
		if (a>40)
		{
			c = 400 + (a-40)*1.5*b;
			printf("Salary is $%.2f\n", c);
		}
		else
		{
			c = a*b;
			printf("Salary is $%.2f\n", c);
		}
		printf("Enter # of hours worked(-1 to end):");
		scanf_s("%d", &a);


	}













	system("pause");
	return 0;
}