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
 * append_text_to_file - Writfunction that creates a file
 *
 * @filename: new textFile
 * @text_content: text to add the end og textFile
 *
 * Return: (1) for succes, (-1) if fail
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int n = 0, size = 0, n_permission = 0, n_flags = 0;
	ssize_t n_write = 0;

	if (!filename)
	{
		goto error;
	}
	n_flags = O_WRONLY | O_APPEND;
	n_permission = S_IRUSR | S_IWUSR;
	if (text_content == NULL)
	{
		n_flags = O_WRONLY;
		n = open(filename, n_flags, n_permission);
		if (n == -1)
		{
			goto error;
		}
		close(n);
		return (1);
	}
	n = open(filename, n_flags, n_permission);
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
