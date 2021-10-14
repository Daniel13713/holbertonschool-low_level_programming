#include "main.h"

/**
 * *cap_string - capitaliza all term of an string
 *
 * @str: string
 * Return: String capitalized
 */

char *cap_string(char *str)
{
	int i, j;
	int array[13] = {10, 32, 9, 44, 59, 46, 63,
		33, 34, 40, 41, 123, 125};
	i = 0;
	while (str[i] != '\0')
	{
		for (j = 0; j < 13; j++)
		{
			if (str[i] == array[j])
			{
				if (str[i + 1] >= 'a' && str[i + 1] <= 'z')
				{
					str[i + 1] = str[i + 1] - 32;
				}
			}
		}
		i++;
	}
	return (str);
}
