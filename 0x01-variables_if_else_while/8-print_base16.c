#include<stdio.h>
/**
 * main - Entry point
 * Description: prints all the numbers of base 16 in lowercase
 *
 * Return: 0 (Success)
 **/

int main(void)
{
	int g;

	for (g = '0'; g <= '9'; g++)
	{
		putchar(g);
	}

	for (g = 'a'; g <= 'f'; g++)
	{
		putchar(g);
	}
	putchar('\n');
	return (0);
}
