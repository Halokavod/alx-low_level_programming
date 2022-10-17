#include<stdio.h>
/**
 * main - Entry point
 * Description: prints all possible different combinations of two digits.
 *
 * Return: 0 (Success)
 **/

int main(void)
{
	int a;

	for (a = 4849; a < 494848; a++)
	{
		putchar(a);
		if (a < 5748)
		{
			putchar(44);
			putchar(32);
		}
	}
	putchar('\n');
	return (0);
}
