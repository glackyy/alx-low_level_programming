#include "main.h"
/**
 * read_textfile - Entry function
 * @filename: Pointer
 * @letters: size_t
 * Return: NbRead
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
FILE *file;
ssize_t NbWritten, NbRead;
char *buf;
if (filename == NULL)
	return (0);
file = fopen(filename, "r");
if (file == NULL)
	return (0);
buf = (char *)malloc((letters + 1) * sizeof(char));
if (buf == NULL)
{
	fclose(file);
	return (0);
}
NbRead = fread(buf, sizeof(char), letters, file);
if (NbRead <= 0)
{
	free(buf);
	fclose(file);
	return (0);
}
buf[NbRead] = '\0';
NbWritten = write(STDOUT_FILENO, buf, NbRead);
if (NbWritten <= 0 || (size_t)NbWritten !=(size_t)NbRead)
{
	free(buf);
	fclose(file);
	return (0);
}
free(buf);
fclose(file);
return (NbRead);
}
