#include "main.h"
/**
 * append_text_to_file - function that appends text at the end of file
 * @filename: the filename
 * @text_content: pointer of the text content
 * Return: 1 on success and -1 on failure, if filename is NULL return -1,
 * if text_content is NULL, return 1 if the file exists
 * and -1 if the file does not exist
**/
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	unsigned int length;
	ssize_t bytes_written;

	if (filename == NULL)
		return (-1);

	if (text_content == NULL)
		return (1);

	fd = open(filename, O_WRONLY | O_APPEND);

	if (fd == -1)
		return (-1);

	length = strlen(text_content);

	bytes_written = write(fd, text_content, length);

	if (bytes_written == -1)
		return (-1);

	close(fd);
	return (1);
}
