#include<stdlib.h>
#include<time.h>
#include<stdio.h>

/**
 * main - Entry point
 * Description: Print positive and neegative numbers
 *
 * Return: 0 (success)
 **/

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - Rand_Max / 2;
	printf("%d \n", n);
	if (n > 0)
	{
		printf("The number is positive \n");
	}
	else if (n < 0)
	{
		printf("The number is negative \n");
	}
	else if (n == 0)
	{
		printf("The number is zero \n");
	}
	return (0);
}