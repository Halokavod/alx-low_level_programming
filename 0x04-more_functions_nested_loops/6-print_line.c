#include "main.h"
/**
 * print_line - Write a function that draws a straight line in the terminal.
 *  @n: Integer amount of 
 */
void print_line(int n)
{
	char d;

	for (d = 0; d < n; d++)
		_putchar('_');
	_putchar('\n');
}
