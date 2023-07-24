#include "main.h"

/**
 * _isalpha - tests whether a character is from the English alphabet.
 * @c: character to be checked.
 * Return: 1 if the character is an English character.
 * 0 if the character is not an English character.
 */
int _isalpha(int c)
{
	char lowerCase, upperCase;
	int isletter = 0;

	for (lowerCase = 'a'; lowerCase <= 'z'; lowerCase++)
	{
		for (upperCase = 'A'; upperCase <= 'Z'; upperCase++)
		{
			if (c == lowerCase || c == upperCase)
				isletter = 1;
		}
	}
	return (isletter);
}
