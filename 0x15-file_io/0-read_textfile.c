#include "main.h"

/**
 * read_textfile - read a size and print to std output
 * @filename: file to read from
 * @letters: size to read
 *
 * Return:size read
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int rFile;
	ssize_t nRead, nPrint;
	char *buffer;

	if (filename == NULL)
		return (0);

	rFile = open(filename, O_RDONLY);
	if (rFile == -1)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);

	nRead = read(rFile, buffer, letters);
	if (nRead == -1)
	{
		free(buffer);
		close(rFile);
		return (0);
	}
	nPrint = write(STDOUT_FILENO, buffer, nRead);
	if (nPrint == -1)
	{
		free(buffer);
		close(rFile);
		return (0);
	}
	close(rFile);
	return (nRead);
}
