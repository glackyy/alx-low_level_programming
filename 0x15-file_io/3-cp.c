#include "main.h"
#define BUF_SIZE 1024
void print_error(const char *err_message, const char *filename, int excode);
/**
 * print_error - Entry Function
 * @err_message: Pointer
 * @filename: Pointer
 * @excode: int
 */
void print_error(const char *err_message, const char *filename, int excode)
{
fprintf(stderr, "Error: %s %s\n", err_message, filename);
exit(excode);
}
/**
 * main - Entry Point
 * @argc: int
 * @argv: char
 * Return: 0
 */
int main(int argc, char *argv[])
{
int filed_from, filed_to;
ssize_t NbRead, NbWritten;
char buf[BUF_SIZE];
const char *file_from, *file_to;
if (argc != 3)
{
	print_error("Usage: cp file_from file_to", "", 97);
}
file_from = argv[1];
file_to = argv[2];
filed_from = open(file_from, O_RDONLY);
if (filed_from == -1)
{
print_error("Error: Can't read from file %s\n", file_from, 98);
}
filed_to = open(file_to, O_WRONLY | O_CREAT | O_TRUNC,
			S_IRUSR | S_IWUSR | S_IRGRP | S_IROTH);
if (filed_to == -1)
{
print_error( "Error: Can't write to %s\n", file_to, 99);
}
while ((NbRead = read(filed_from, buf, BUF_SIZE)) > 0)
{
	NbWritten = write(filed_to, buf, NbRead);
	if (NbWritten == -1 || NbWritten != NbRead)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
		exit(99);
	}
}
if (NbRead == -1)
{
print_error("Error: Can't read from file %s\n", file_from, 98);
}
if (close(filed_from) == -1)
print_error("Error: Can't close filed %d\n", "", 100);
if (close(filed_to) == -1)
print_error("Error: Can't close filed %d\n", "", 100);
return (0);
}
