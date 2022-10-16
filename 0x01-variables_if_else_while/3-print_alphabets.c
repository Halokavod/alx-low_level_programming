#include<stdio.h>
/**
 * main - Entry point
 * Description: Print lowercase/uppercase letters.
 *
 * Return: 0 (Success)
 **/

int main(void)
{
	char uppercase;
	char lowercase;

	for (uppercase = 'A'; uppercase <= 'Z'; uppercase++)
	{
		putchar(uppercase);
	}

	for (lowercase = 'a'; lowercase <= 'z'; lowercase++)
	{
		putchar(lowercase);
	}
	putchar('\n');
	return (0);
}
