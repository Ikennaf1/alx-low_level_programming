#include "main.h"

/**
 * read_textfile - Reads a text file and prints it to standard output
 * @filename: Name of file
 * @letters: Number of letters to read
 * Return: Number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, chars_read;
	char *buf = malloc(sizeof(char) * letters);

	if (buf == NULL)
		return (0);

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY, 0600);
	if (fd < 0)
		return (0);

	chars_read = read(fd, buf, letters);

	write(STDOUT_FILENO, buf, chars_read);

	free(buf);
	close(fd);

	return (chars_read);
}
