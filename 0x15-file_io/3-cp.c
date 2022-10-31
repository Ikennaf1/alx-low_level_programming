#include "main.h"

/**
 * _copy_file - Copies file contents to another
 * @src: Source file
 * @dest: Destination file
 * Return: Nothing
 */
void _copy_file(char *src, char *dest)
{
	int fd1, fd2, chars_read;
	char *buf = malloc(1024);

	if (buf == NULL)
		exit(97);

	fd1 = open(src, O_RDONLY);
	if (src == NULL || fd1 == -1)
	{
		dprintf(STDERR_FILENO, "Error, Can't read from file %s\n", src);
		exit(98);
	}

	fd2 = open(dest, O_CREAT | O_WRONLY | O_TRUNC, 0664);
	while ((chars_read = read(fd1, buf, 1024)) > 0)
	{
		if (write(fd2, buf, chars_read) != chars_read || fd2 == -1)
		{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", dest);
			exit(99);
		}
	}
	free(buf);
	if (chars_read == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", src);
		exit(98);
	}

	if (close(fd1) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd1);
		exit(100);
	}
	if (close(fd2) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd2);
		exit(100);
	}
}

/**
 * main - Main entry point
 * @argc: Argument count
 * @argv: Arguments
 * Return: 1 on success
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	_copy_file(argv[1], argv[2]);

	exit(0);
}
