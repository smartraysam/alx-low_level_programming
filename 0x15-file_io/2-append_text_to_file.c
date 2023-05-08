#include "main.h"

/**
 * _strlen - find the length ofa string
 * @str: string
 * Return: string length 
 */

int _strlen(char *str)
{
	int len;

	for (len = 0; str[len] != '\0'; len++)
		;

	return (len);
}

/**
 * append_text_to_file - append text exclusively
 * @filename: name of the file
 * @text_content: text to append
 * Return: 1, -1 if error
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int rFile;
	int nAppend;

	if (!filename)
		return (-1);

	rFile = open(filename, O_WRONLY | O_APPEND);
	if (rFile == -1)
		return (-1);

	if (!text_content)
	{
		close(rFile);
		return (1);
	}

	nAppend = write(rFile, text_content, _strlen(text_content));
	if (nAppend == -1 || nAppend != _strlen(text_content))
	{
		close(rFile);
		return (-1);
	}
	close(rFile);
	return (1);
}
