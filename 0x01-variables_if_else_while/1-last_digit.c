#include<stdlib.h>
#include<time.h>
#include<stdio.h>

/**
 * main - Entry point
 * Description: This program will assign a random number.
 *
 * Return: 0 (Success)
 **/
int main(void)
{
	int n;
	int ldgit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	ldgit = n % 10;
	if (ldgit > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, ldgit);
	}
	else if (ldgit == 0)
	{
		printf("Last digit %d is %d and is 0\n", n, ldgit);
	}
	else
	{
		printf("Last digit of %d is %d is less than 6 and not 0\n", n, ldgit);
	}
	return (0);
}
