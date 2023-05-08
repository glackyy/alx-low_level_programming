#include "main.h"
char *create_buf(char *file);
void close_f(int filed);
/**
 * create_buf - Entry Function
 * @file: Pointer
 * Return: buf
 */
char *create_buf(char *file)
{
char *buf;
buf = malloc(sizeof(char) * 1024);
if (buf == NULL)
{
	dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file);
	exit(99);
}
return (buf);
}
/**
 * close_f - Entry Function
 * @filed: int
 */
void close_f(int filed)
{
int closed;
closed = close(filed);
if (closed == -1)
{
	dprintf(STDERR_FILENO, "Error: Can't close filed %d\n", filed);
	exit(100);
}
}
/**
 * main - Entry Point
 * @argc: int
 * @argv: char
 * Return: 0
 */
int main(int argc, char *argv[])
{
int file_from, file_to, NbRead, NbWritten;
char *buf;
if (argc != 3)
{
	dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
	exit(97);
}
buf = create_buf(argv[2]);
file_from = open(argv[1], O_RDONLY);
NbRead = read(file_from, buf, 1024);
file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
do {
if (file_from == -1 || NbRead == -1)
{
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
free(buf);
exit(98);
}
NbWritten = write(file_to, buf, NbRead);
if (file_to == -1 || NbWritten == -1)
{
dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
free(buf);
exit(99);
}
NbRead = read(file_from, buf, 1024);
file_to = open(argv[2], O_WRONLY | O_APPEND);
} while (NbRead > 0);
free(buf);
close_f(file_from);
close_f(file_to);
return (0);
}
