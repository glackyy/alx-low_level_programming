#include "main.h"
/**
 * append_text_to_file - Entry function
 * @filename: Pointer
 * @text_content: Pointer
 * Return: (1) SUCCESS or (-1) FAIL
 */
int append_text_to_file(const char *filename, char *text_content)
{
int fileDesc, NbWritten, len;
len = 0;
if (filename == NULL)
	return (-1);
if (text_content != NULL)
{
	while (text_content[len])
		len++;
}
fileDesc = open(filename, O_WRONLY | O_APPEND);
if (fileDesc == -1)
	return (-1);
if (text_content != NULL)
{
	NbWritten = write(fileDesc, text_content, len);
	if (NbWritten == -1 || NbWritten != len)
	{
		close(fileDesc);
		return (-1);
	}
}
close(fileDesc);
return (1);
}
