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
	char Alphabeth[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char ROT13[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	i = 0;
	j = 0;
	while (str[i] != '\0')
	{
		for (j = 0; j < 52; j++)
		{
			if (str[i] == Alphabeth[j])
			{
				str[i] = ROT13[j];
				break;
			}
		}
		i++;
	}
	return (str);
}
