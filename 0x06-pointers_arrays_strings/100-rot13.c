#include "main.h"

/**
 * *rot13 - code a string with code rot13
 *
 * @str: string
 * Return: String coded
 */

char *rot13(char *str)
{
	int i, j;

	i = 0;
	j = 0;
	while (str[j] != '\0')
	{
		while ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z'))
		{
			if ((str[i] >= 'n' && str[i] <= 'z') || (str[i] >= 'N' && str[i] <= 'Z'))
			{
				str[i] = str[i] - 13;
			}
			else
			{
				str[i] = str[i] + 13;
			}
			i++;
		}
		i++;
		j++;
	}
	return (str);
}
