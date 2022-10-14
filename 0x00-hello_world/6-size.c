#include<stdio.h>
/**
 * main - Entry point
 * Return: 0 (Success)
 **/
int main(void)
{
	printf("size of a char:%b byte(s)\n", sizeof(char));
	printf("size of an int:%b byte(s)\n", sizeof(int));
	printf("size of a long int:%b byte(s)\n", sizeof(long int));
	printf("size of a long long int:%b byte(s)\n", sizeof(long long int));
	printf("size of a float:%b byte(s)\n", sizeof(float));
	return (0);
}

