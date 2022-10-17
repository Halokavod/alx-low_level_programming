#include<stdio.h>
/**
 * main - Entry point
 * Decription: prints the lowercase alphabet in reverse.
 *
 * Return: 0 (Success)
 **/

int main(void)
{
	char reverse;

	for (reverse = 'z'; reverse >= 'a'; reverse--)
	{
		putchar(reverse);
	}
	putchar('\n');
	return (0);
}
