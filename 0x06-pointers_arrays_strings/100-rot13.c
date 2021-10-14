#include "main.h"

/**
 * *rot13 - code a string with code rot13
 *
 * @str: string
 * Return: String coded
 */

char *rot13(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			if (str[i] >= 'n')
			{
				str[i] = str[i] - 13;
			}
			else
			{
				str[i] = str[i] + 13;
			}
		}
		else if (str[i] >= 'A' && str[i] <= 'Z')
		{
			if (str[i] >= 'N')
			{
				str[i] = str[i] - 13;
			}
			else
			{
				str[i] = str[i] + 13;
			}

		}
		i++;
	}
	return (str);
}
