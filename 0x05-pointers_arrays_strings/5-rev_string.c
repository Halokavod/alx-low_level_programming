#include "main.h"
#include <stdio.h>

/**
 * rev_string -  reverses a string
 * @s: value to be reversed
 *
 * Return: 0 (success)
 */

void rev_string(char *s)
{
	int x, len, temp;
	len = strlen(str1);

	for (x = 0; x < len/2; x++)
	{
	 temp = str1[x];
	  str1[x] = str1[len - x - 1];
	  str1[len - i - 1] = temp;    
	}	
}
