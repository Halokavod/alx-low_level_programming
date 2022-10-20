#include"main.h"
/**
 * main - Alphabets
 * Description: prints the alphabet.
 *
 * Return: 0 (Success)
 **/


void print_alphabet(void);
{
	int y;

	for (y = 'a'; y <= 'z'; y++)
	{
		_putchar(y);
	}
	_putchar('\n');
	return (0);
}
