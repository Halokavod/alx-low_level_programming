#include<stdio.h>
/**
 * main - Entry point
 * Description: Print all the letters except q and e.
 *
 * Return: 0 (Success)
 **/

int main(void)
{
	char lowercase;

	for (lowercase = 'a'; lowercase <= 'z'; lowercase++)
	{
		if (lowercase == 'e' || 'q')
		continue;
		putchar(lowercase);
	}
	putchar('\n');
	return (0);
}
