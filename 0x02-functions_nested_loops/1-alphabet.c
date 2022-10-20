#include"main.h"
/**
 * main - lowercase alphabets
 * Description: prints the alphabet, in lowercase.
 *
 * Return: 0 (Success)
 **/

/*function prototype*/
void print_alphabet(void);

int main(void)
{
	char lowercase;

	for (lowercase = 'a'; lowercase <= 'z'; lowercase++)
	{
		_putchar(lowercase);
	}
	_putchar('\n');
	return (0);
}
