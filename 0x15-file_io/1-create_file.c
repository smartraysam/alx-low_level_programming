#include "main.h"

/**
 * _strlen - get  length of string
 * @str: string
 * Return: length of string
 */

int _strlen(char *str)
{
	int len;

	for (len = 0; str[len] != '\0'; len++)
		;
	return (len);
}

/**
 * create_file - create file with rw permissions and write into it exclusively
 * @filename: name of file
 * @text_content: content to write into file
 *
 * Return: 1, -1 if error
 */

int create_file(const char *filename, char *text_content)
{
	int rFile;
	int nWrite;

	if (!filename)
		return (-1);

	rFile = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (rFile == -1)
		return (-1);

	if (!text_content)
	{
		close(rFile);
		return (1);
	}
	nWrite = write(rFile, text_content, _strlen(text_content));
	if (nWrite == -1 || nWrite != _strlen(text_content))
	{
		close(rFile);
		return (-1);
	}
	close(rFile);
	return (1);
}
