#include<stdio.h>
#include<math.h>
int main()
{
	int i;
	double p = 5000.0;
	double r = .1;
	double a;
	unsigned int y;
	printf("%4s%21s\n", "Year", "Amount on deposit");
	for (i = 1; i <= 5; i++)
	{
		printf("%.3f\n",r);
		for ( y = 1; y<=15; y++)
		{
			a = p*pow(1+ r, y);
			printf("%4u%21.2f\n", y, a);
			
		}

		
		r = r + 0.005;
		printf("\n");
	}















	system("pause");


}