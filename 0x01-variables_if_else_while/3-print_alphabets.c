#include<stdio.h>
/**
 * main - Entry point
 * Description: Print lowercase/uppercase letters.
 *
 * Return: 0 (Success)
 **/

int main(void)
{
	char lowercase;
	char uppercase;

	for (lowercase = 'a'; lowercase <= 'z'; lowercase++)
	{
		putchar(lowercase);
	}

	for (uppercase = 'A'; lowercase <= 'Z'; lowercase++)
	{
		putchar(uppercase);
	}
	putchar('\n');
	return (0);
}
