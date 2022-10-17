#include<stdio.h>
/**
 * main - Entry point
 * Description:  prints all possible combinations of single-digit numbers.
 *
 * Return: 0 (Success)
 **/

int main(void)
{
	int M;

	for (M = 48; M < 58; M++)
	{
		putchar(M);

		if (M < 57)
		{
			putchar(44);
			putchar(32);
		}
	}
	putchar('\n');
	return (0);
}
