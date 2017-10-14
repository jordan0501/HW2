#include<stdio.h>
#include<stdlib.h>
int main()
{
	float a;
	float b;

	printf("Enter sales in dollars(-1 to end):");
	scanf_s("%f", &a);
	while (a != -1)
	{
		b = 200 + a*0.09;
		printf("Salary is:$%.2f\n", b);
		printf("Enter sales in dollars(-1 to end):");
		scanf_s("%f", &a);


	}


	system("pause");
	return 0;
}