#include<stdio.h>
#include<stdlib.h>
int main()
{
	int side0, side1, side2;
	for ( side0 = 1; side0 <=500; side0++)
	{
		for ( side1 = 1; side1 <=500; side1++)
		{
			for ( side2 = 1; side2 <= 500; side2++)
			{
				if (side0*side0==side1*side1+side2*side2)
				{
					printf("%d   %d  %d\n",side0,side1,side2);
				}
			}
		}
		
	}





















	
	system("pause");
}