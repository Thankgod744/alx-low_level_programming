#include "main.h"
/**
 * _isalpha - show 1 if the input is 0
 * letter Another case, shows 0
 *
 * @c: The character in ASCII code
 *
 * Return: 1 for letter. 0 for the rest
 */
int _putchar(char c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
	 return (0);
}
