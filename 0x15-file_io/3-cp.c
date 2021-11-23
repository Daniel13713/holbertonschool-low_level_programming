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
 * copy_textfile - function that copy a text file in another texFile
 *
 * @filename_one: textFile1
 * @filename_two: TextFile2
 *
 * Return: number of bits that writed, exit 98, 99, or 100 if fail
 */

void copy_textfile(const char *filename_one, const char *filename_two)
{
	int fd = 0, fd_2, len_write = 0, n_mode = 0;
	ssize_t fd_read = 0, fd_write = 0, fd_close = 0, fd_close_2;
	char buff[1024];

	fd = open(filename_one, O_RDONLY, 0777);
	if (fd == -1)
		goto error98;
	n_mode = (S_IRUSR | S_IWUSR) |  (S_IRGRP | S_IWGRP) | S_IROTH;
	n_mode = 0664;
	fd_2 = open(filename_two, O_WRONLY | O_CREAT | O_TRUNC, n_mode);
	if (fd_2 == -1)
		goto error99;
	fd_read = read(fd, buff, 1024);
	while (fd_read)
	{
		buff[fd_read] = '\0';
		len_write = _strlen_recursion(buff);
		fd_write = write(fd_2, buff, len_write);
		if (fd_write == -1)
			goto error99;
		fd_read = read(fd, buff, 1024);
	}
	if (fd_read == -1)
		goto error98;
	fd_close = close(fd);
	if (fd_close == -1)
		goto error100;
	fd_close_2 = close(fd_2);
	if (fd_close_2 == -1)
		goto error100;
	return;
error98:
	dprintf(2, "Error: Can't read from file %s\n", filename_one);
	exit(98);
error99:
	dprintf(2, "Error: Can't write to %s\n", filename_two);
	exit(99);
error100:
	dprintf(2, "Error: Can't close fd %d\n", fd_2);
	exit(100);
}


/**
 * main - check the code
 *
 * @ac: number of arguments
 * @av: arguments
 * Return: Always 0.
 */
int main(int ac, char **av)
{
	if (ac != 3)
	{
		dprintf(2, "Usage: cp file_from file_to\n");
		exit(97);
	}
	copy_textfile(av[1], av[2]);
	return (0);
}
