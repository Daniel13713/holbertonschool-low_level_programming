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
 * create_file - function that create a new file
 *
 * @filename: textFile
 * @text_content: text to add a text
 *
 * Return: (1) for succes, (-1) if fail
 */

int create_file(const char *filename, char *text_content)
{
	int n = 0, size = 0;
	ssize_t n_write = 0;

	if (!filename)
	{
		goto error;
	}
	n = open(filename,  O_WRONLY | O_CREAT, S_IRUSR | S_IWUSR);
	if (n == -1)
	{
		goto error;
	}
	size = _strlen_recursion(text_content);
	n_write = write(n, text_content, size);
	if (n_write == -1)
	{
		goto error;
	}
	close(n);
	return (1);
error:
	return (-1);
}
