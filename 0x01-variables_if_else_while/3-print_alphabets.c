#include<stdio.h>
/**
 * main - Entry point
 * Description: Print lowercase/uppercase letters.
 *
 * Return: 0 (Success)
 **/

int main(void)
{
	char alphabet;

	for (alphabet = 'A', 'a'; alphabet <= 'Z', 'z'; alphabet++)
	{
		putchar(alphabet);
	}

	putchar('\n');
	return (0);
}
