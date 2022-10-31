#include "main.h"

/**
 * _strlen - ...
 * @s: ...
 * Return: ...
 */
unsigned int _strlen(char *s)
{
	int count = 0;

	while (*s)
	{
		count++;
		s++;
	}
	return (count);
}

/**
 * append_text_to_file - Appends text at end of file
 * @filename: Name of file
 * @text_content: Content to append
 * Return: 1 on success, -1 on fail
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd < 0)
		return (-1);

	if (text_content)
	{
		if (write(fd, text_content, _strlen(text_content)) == -1)
		{
			return (-1);
		}
	}
	close(fd);

	return (1);
}
