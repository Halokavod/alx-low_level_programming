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
	n = rand() - RAND_MAX / 2;
	printf("%d \n", n);
	if (n > 0)
	{
		printf("%d \n");
	}
	else if (n < 0)
	{
		printf("%d \n");
	}
	else if (n == 0)
	{
		printf("%d \n");
	}
	return (0);
}
