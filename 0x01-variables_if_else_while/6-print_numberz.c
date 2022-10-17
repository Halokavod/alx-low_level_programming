#include<stdio.h>
/**
 * main - Entry point
 * Description: single digit numbers of base 10 starting from 0
 *
 * Return: 0 (Success)
 **/

int main(void)
{
	int B;

	for (B = '0'; B <= '9'; B++)
	{
		putchar(B);
	}
	putchar('\n');
	return (0);
}
