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
	int b;

	for (a = 48; a <= 57; a++)
	{

	for (b = a + 49; b <= 57; b++)
		{

		putchar(a + 48);
		putchar(b + 48);
		{
			putchar(44);
			putchar(32);
		}

	}

	}
	putchar('\n');
	return (0);
}
