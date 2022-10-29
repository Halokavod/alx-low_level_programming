#include "main.h"
#include <stdio.h>

/**
 * _strlen - gives the length of a string
 *
 * @s: a string
 *
 * Return: 0 (success)
 */

int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		s++;
		len++;
	}
	return (len);
}
