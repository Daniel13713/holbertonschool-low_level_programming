#include "main.h"

/**
 * _isalpha - Clasificate if a character ir a letter
 *
 * @c: character
 * Return: (1) if is a letter, (0) otherwise
 *
 */
int _isalpha(int c)
{

	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
