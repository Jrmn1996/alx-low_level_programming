#include "main.h"
/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: name of file
 * @letters: number of bytes to read
 * Return: actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t byt;
	char buf[READ_BUF_SIZE * 8];

	if (!filename || !letters)
	{
		return (0);
	}
	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		return (0);
	}
	byt = read(fd, &buf[0], letters);
	byt = write(STDOUT_FILENO, &buf[0], byt);
	close(fd);
	return (byt);
}
