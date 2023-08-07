#include "main.h"
/**
 * _sterlen - determines the length of a string
 * @s: the string
 * Return: length of string
 */
int _sterlen(char *s)
{
	int i = 0;

	if (!s)
	{
		return (0);
	}
	while (*s++)
	{
		i++;
	}
	return (i);
}
/**
 * create_file - creates a file
 * @filename: name of file to create
 * @text_content: text to write
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t byt = 0;
	ssize_t len = _sterlen(text_content);

	if (!filename)
	{
		return (-1);
	}
	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (fd == -1)
	{
		return (-1);
	}
	if (len)
	{
		byt = write(fd, text_content, len);
	}
	close(fd);
	return (byt == len ? 1 : -1);
}
