#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char lowerCase, e, q;

	e = 'e';
	q = 'q';

	for (lowerCase = 'a'; lowerCase <= 'z'; lowerCase++)
	{
		if (lowerCase != e && lowerCase != q)
			putchar(lowerCase);
	}
	putchar('\n');

	return (0);
}
