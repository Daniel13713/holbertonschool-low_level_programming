#include "main.h"

/**
 * read_textfile - Write a function that reads a text file
 * and prints it to the POSIX standard output.
 *
 * @filename: textFile
 * @letters: number of bits
 *
 * Return: number of bits that can read, (0) if fail
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int n = 0, i = 0;
	ssize_t n_read = 0;
	char *buff = NULL;

	buff = malloc(letters * sizeof(char));
	if (!buff)
	{
		free(buff);
		goto error;
	}
	if (filename == NULL)
	{
		free(buff);
		goto error;
	}
	n = open(filename, O_RDONLY);
	if (n == -1)
	{
		goto error;
	}
	n_read = read(n, buff, letters);
	if (n_read == -1)
	{
		free(buff);
		goto error;
	}
	buff[n_read] = '\0';
	while (buff[i])
	{
		putchar(buff[i]);
		i++;
	}
	close(n);
	free(buff);
	return (n_read);
error:
	return (0);
}
