#include "main.h"

/**
 * _strlen - counts a string
 * @s: The string
 * Return: Number of chars
 */
unsigned int _strlen(char *s)
{
	unsigned int count = 0;

	while (*s)
	{
		count++;
		s++;
	}
	return (count);
}

/**
 * create_file - Creates a file
 * @filename: Name of file
 * @text_content: Fill the file with this content
 * Return: 1 on success, -1 on fail
 */
int create_file(const char *filename, char *text_content)
{
	int fd;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);

	if (fd < 0)
		return (-1);

	if (text_content)
		write(fd, text_content, _strlen(text_content));

	close(fd);

	return (1);
}
