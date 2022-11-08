#include "main.h"

/**
 * create_file - cretae a file with real/write access for user
 * @filename: name of the file
 * @text_content: Text to write into the file
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd, wstatus, i;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, S_IRUSR | S_IWUSR);
	if (fd == -1)
		return (-1);

	if (text_content)
	{
		for (i = 0; text_content[i] != '\0'; i++)
			;
		wstatus = write(fd, text_content, i);
		if (wstatus == -1)
			return (-1);
	}

	close(fd);
	return (1);
}
