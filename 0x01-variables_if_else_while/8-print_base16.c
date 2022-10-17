#include<stdio.h>
/**
 * main - Entry point
 * Description: prints all the numbers of base 16 in lowercase
 *
 * Return: 0 (Success)
 **/

int main(void)
{
	int f;

	for (f = '0'; f <= '15'; f++)
	{
		putchar(f);
	}
	putchar('\n');
	return (0);
}
