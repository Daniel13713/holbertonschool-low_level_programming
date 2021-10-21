#include <stdio.h>


char save(char *s)
{
	char *p;

	p = s;
	if (*s)
	{
		return (save(s));
	}
	return (*p);
}

/**
 * _print_rev_recursion - print the revers of a string
 *
 * @s: String
 * Return: Nothing
 */

char *_print_rev_recursion(char *s)
{
	if (*s > '\0')
	{
		return(_print_rev_recursion(s + 1));

	}
	if (*s == '\0')
	{
		return (s);
	}
	return (s);
}

int main(void)
{
	char *a;
	a = _print_rev_recursion("\nColton Walker");
	printf("%s", a);
	return (0);
}
