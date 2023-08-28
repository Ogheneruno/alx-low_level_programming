/**
 * _strlen -  a function that returns the length of a string.
 * @s: An input string
 * Return: Nothing
 */
int _strlen(char *s)
{
	int stringLength = 0;

	while (s[stringLength] != '\0')
		stringLength++;
	return (stringLength);
}
