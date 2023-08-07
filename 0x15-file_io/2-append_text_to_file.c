#include "main.h"
/**
 * _sterlen - gets the length of a string
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
 * append_text_to_file - appends text at the end of a file
 * @filename: name of file to create
 * @text_content: text to write
 * Return: 1 on success and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t byte = 0;
	ssize_t len = _sterlen(text_content);

	if (!filename)
	{
		return (-1);
	}
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
	{
		return (-1);
	}
	if (len)
	{
		byte = write(fd, text_content, len);
	}
	close(fd);
	return (byte == len ? 1 : -1);
}
