#include "main.h"

/**
 * read_texfile - reads a text file and prints it to STD_OUT
 * @filename: file to read
 * @letters: number of letters to read
 * Return: return NULL or 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t rcount, wcount;
	char *buf;

	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDWR);

	if (fd == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	if (buf == NULL)
	{
		free(buf);
		return (0);
	}

	rcount = read(fd, buf, letters);
	if (rcount == -1)
		return (0);

	wcount = write(STDOUT_FILENO, buf, rcount);
	if (wcount == -1 || rcount != wcount)
		return (0);
	free(buf);


	close(fd);
	return (rcount);
}

