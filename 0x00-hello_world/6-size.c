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
	long longIntT;
	long long int longLongIntT;
	char charT;

	printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(charT));
	printf("Size of an int: %lu byte(s)\n", (unsigned long)sizeof(intT));
	printf("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(longIntT));
	printf("Size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(longLongIntT));
	printf("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(floatT));

	return (0);

}
