#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int intT;
	float floatT;
	double doubleT;
	char charT;

	printf("Size of int: %zu bytes\n", sizeof(intT));
	printf("Size of float: %zu bytes\n", sizeof(floatT));
	printf("Size of double: %zu bytes\n", sizeof(doubleT));
	printf("Size of char: %zu byte\n", sizeof(charT));

	return 0;

}
