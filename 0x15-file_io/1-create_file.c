#include "main.h"
/**
 * create_file - Entry function
 * @filename: Pointer
 * @text_content: Pointer
 * Return: (1) SUCCESS  or (-1) FAIL
 */
int create_file(const char *filename, char *text_content)
{
ssize_t NbWritten;
int fileDesc;
if (filename == NULL)
	return (-1);
fileDesc = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
if (fileDesc == -1)
	return (-1);
if (text_content != NULL)
{
NbWritten = write(fileDesc, text_content, strlen(text_content));
if (NbWritten == -1)
{
	close(fileDesc);
	return (-1);
}
}
close(fileDesc);
return (1);
}
