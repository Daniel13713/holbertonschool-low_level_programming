#include "main.h"

/**
 * _strlen_recursion - calculate the length of a string
 *
 * @s: string
 * Return: Length of the string s
 */

int _strlen_recursion(char *s)
{
	int i = 0;

	if (*s)
	{
		i++;
		return (i + _strlen_recursion(s + 1));
	}
	return (i);
}
/**
 * save - function that compare the string and its reverse
 *
 * @s: string
 * @n: lenght of s
 * Return: 1 if s is palindrome, 0 is not
 */
int save(char *s, int n)
{
	if (*s == s[n - 1] && n > 1)
	{
		return (save(s + 1, n - 2));
	}
	else if (n <= 1)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	return (1);
}

/**
 * is_palindrome - determinate if a string is a palindrome
 *
 * @s: String
 * Return: Nothing
 */

int is_palindrome(char *s)
{
	int n;

	if (*s == '\0')
	{
		return (1);
	}
	n = _strlen_recursion(s);
	return (save(s, n));
}

