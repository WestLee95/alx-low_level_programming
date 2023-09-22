#include "main.h"


/**
 *append_text_to_file - appends text at the end of a file
 *@filename: pointer to the name of the file
 *@text_content: pointer to NULL terminated string to add at the end of the
 *file
 *Return: 1 on success and -1 on failure
 *If filename is NULL return -1
 *If text_content is NULL return -1
 *
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t write_count;
	size_t length = 0;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[length])
			length++;

		write_count = write(fd, text_content, length);
		if (write_count == -1 || write_count != (ssize_t)length)
		{
			close(fd);
			return (-1);
		}
	}

	close(fd);

	return (1);
}