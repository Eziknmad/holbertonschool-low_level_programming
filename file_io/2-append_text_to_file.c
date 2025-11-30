#include "main.h"
#include <fcntl.h>
#include <unistd.h>

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: name of the file
 * @text_content: NULL-terminated string to append
 *
 * Return: 1 on success, -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t wcount, len = 0;

	if (filename == NULL)
		return (-1);

	/* Open file ONLY if it exists, do not create it */
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);

	/* If no text to write, but file exists → success */
	if (text_content == NULL)
	{
		close(fd);
		return (1);
	}

	while (text_content[len])
		len++;

	wcount = write(fd, text_content, len);
	if (wcount == -1 || wcount != len)
	{
		close(fd);
		return (-1);
	}

	close(fd);
	return (1);
}
