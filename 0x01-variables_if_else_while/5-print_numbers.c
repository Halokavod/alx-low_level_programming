#include<stdio.h>
/**
 * main - Entry point
 * Description: prints all single digit numbers of base 10 starting from 0
 *
 * Return: 0 (Success)
 **/

int main(void)
{
	int x;

	for (x = 0; x <= 9; x++)
	{
		putchar(x);
	}
	putchar('\n');
	return (0);
}

