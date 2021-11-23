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
 * @filename: textFile
 * @letters: number of bits
 *
 * Return: number of bits that can read, (0) if fail 
 */

ssize_t copy_textfile(const char *filename_one, const char *filename_two)
{
	int fd = 0, fd_2, len_write = 0, n_mode = 0;
	ssize_t fd_read = 0, fd_write = 0;
	char buff[1024];
	
	if (filename_one == NULL)
	{
		dprintf(2, "Error: Can't read from file %s\n", filename_one);
		exit(98);
	}
	fd = open(filename_one, O_RDONLY);
	if (fd == -1)
	{
		dprintf(2, "Error: Can't read from file %s\n", filename_one);
		exit(98);
	}
	fd_read = read(fd, buff, 1024);
	if (fd_read == -1)
	{
		dprintf(2, "Error: Can't read from file %s\n", filename_one);
		exit(98);
	}
	buff[fd_read] = '\0';
	close(fd);
	if (fd == -1)
	{
		dprintf(2, "Error: Can't close fd %d\n", fd);
		exit(100);
	}

	n_mode = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;
	fd_2 = open(filename_two, O_WRONLY | O_CREAT | O_TRUNC, n_mode);
	if (fd_2 == -1)
	{
		dprintf(2, "Error: Can't write to %s\n", filename_two);
		exit(99);
	}
	len_write = _strlen_recursion(buff);
	fd_write = write(fd_2, buff, len_write);
	if (fd_write == -1)
	{
		dprintf(2, "Error: Can't write to %s\n", filename_two);
		exit(99);
	}
	close(fd_2);
	if (fd_2 == -1)
	{
		dprintf(2, "Error: Can't close fd %d\n", fd_2);
		exit(100);
	}

	return (fd_write);
}


/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(int ac, char **av)
{
    int res;

    if (ac != 3)
    {
        dprintf(2, "Usage: cp file_from file_to\n");
        exit(97);
    }
    res = copy_textfile(av[1], av[2]);
    printf("-> %i)\n", res);
    return (0);
}
