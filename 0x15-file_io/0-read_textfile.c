#include "main.h"

/**
 *read_textfile - reads a text file and prints it
 *to the POSIX standard output
 *
 *@filename: Pointer to file to be checked
 *@letters: the number of letters it should read and print
 *
 *Return: the actual number of letters it could read and print
 *0 if the file can not be opened or read
 *also 0 if filename is NULL
 *and 0 if write fails or does not write the expected amount of bytes
 */
ssize_t read_textfile(const char *filename, size_t letters)

{
	int fd = open(filename, O_RDONLY);
	char *buffer = malloc(sizeof(char) * letters);
	ssize_t read_bytes = read(fd, buffer, letters);
	ssize_t written_bytes = write(STDOUT_FILENO,
			buffer, read_bytes);


	if (!filename)
		return (0);


	if (fd == -1)
		return (0);


	if (!buffer)
	{
		close(fd);
		return (0);
	}

	if (read_bytes == -1)
	{
		free(buffer);
		close(fd);
		return (0);
	}

	if (written_bytes == -1
	|| written_bytes != read_bytes)
	{
		free(buffer);
		close(fd);
		return (0);
	}


	free(buffer);
	close(fd);


	return (written_bytes);

}
