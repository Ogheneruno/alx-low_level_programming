#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n;
	char lowerCase;

	for (n = '0'; n <= '9'; n++)
		putchar(n);
	for (lowerCase = 'a'; lowerCase <= 'f'; lowerCase++)
		putchar(lowerCase);
	putchar('\n');

	return (0);
}
