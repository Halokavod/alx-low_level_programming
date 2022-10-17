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
	char exclude;

	for (lowercase = 'a'; lowercase <= 'z'; lowercase++)

	for (exclude = 'q'; lowercase = 'e'; lowercase--)
	{
		putchar(lowercase);
	}
	putchar('\n');
	return (0);
}
