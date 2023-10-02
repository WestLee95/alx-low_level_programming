#include "main.h"

/**
 *create_file - creates a file.
 *
 *@filename: pointer to the name of the file to create
 *@text_content: pointer to a NULL terminated string to write to the file
 *
 *Return:1 on success, -1 on failure (file can not be created,
 *file can not be written, write “fails”
 *if filename is NULL return -1
 *if text_content is NULL create an empty file
 *
 */
int create_file(const char *filename, char *text_content)

{

	int fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, S_IRUSR | S_IWUSR);
	ssize_t len = 0;
	ssize_t written = write(fd, text_content, len);


	if (!filename)
		return (-1);

	if (fd == -1)
		return (-1);

	if (!text_content)
		return (close(fd) == -1 ? -1 : 1);

	while (text_content[len])
		len++;

	if (written == -1 || written != len)
	{
		close(fd);
		return (-1);
	}

	return (close(fd) == -1 ? -1 : 1);
}
