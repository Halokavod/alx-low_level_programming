#include "main.h"

/**
 *  _puts - print a string followed by a new line
 *
 *  @str: an inputted string
 *
 *  Return: nothing
 */

void _puts(char *str)
{
	int i = 0;

	while (*(str + 1) != '\0')
	{
		_putchar(str[i]);
		str++;
	}
	_putchar('\n');
}
