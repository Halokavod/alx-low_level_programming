#include<stdio.h>
/**
 * main - Entry point
 * Return: 0 (Success)
 **/
int main(void)
{
	printf("size of char is=%b byte\n", sizeof(char));
	printf("size of int is=%b byte\n", sizeof(int));
	printf("size of long int is=%b byte\n", sizeof(long int));
	printf("size of long long int is =%b\n", sizeof(long long int));
	printf("size of float is =%b\n", sizeof(float));
	return (0);
}

