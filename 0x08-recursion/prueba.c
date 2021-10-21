#include <stdio.h>

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

int save(char *s, int n)
{
	/*printf ("s[0] = %c\n", s[0]);
	printf ("s[n - 1] = %c\n", s[n - 1]);
	printf("n = %d\n", n);*/
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
 * _print_rev_recursion - print the revers of a string
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
	return(save(s,n));
}

int main(void)
{
	int r;

	r = is_palindrome("level");
	printf("%d\n", r);
	r = is_palindrome("redder");
	printf("%d\n", r);
	r = is_palindrome("test");
	printf("%d\n", r);
    	r = is_palindrome("step on no pets");
    	printf("%d\n", r);
	r = is_palindrome("");
    	printf("%d\n", r);

    	return (0);
}
