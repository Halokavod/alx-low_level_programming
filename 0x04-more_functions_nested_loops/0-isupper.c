#include "main.h"
#include <stdio.h>

/**
 * _isupper - check for uppercase letter
 *
 * description: aplhabet
 *  @c: an input alphabet
 *
 * Return: 1 oe 0
 */

int _isupper(int c)
{
	if ((c >= 'A') && (c <= 'Z'))
	{
		return (1);

	}
	else
	{
		return (0);

}
