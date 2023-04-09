#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output.
 * @filename: file that reads and write
 * * @letters: number of letters to read and write.
* Return: letters printed
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	ssize_t fd;
	ssize_t x;
	ssize_t y;

	fd = open(filename, O_WRONLY);
	if (fd == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	y = read(fd, buf, letters);
	x = write(STDOUT_FILENO, buf, y);
	free(buf);
	close(fd);
	return (x);
}
