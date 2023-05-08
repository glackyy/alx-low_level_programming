#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <elf.h>
void print_error(const char *message);
void print_elf_header(const Elf64_Ehdr *elf_header);
int open_elf_file(const char *filename);
void read_elf_header(int filed, Elf64_Ehdr *elf_header);
/**
 * print_error - Enter function
 * @message: const char
 */
void print_error(const char *message)
{
	fprintf(stderr, "%s\n", message);
}
/**
 * print_elf_header - Entry function
 * @elf_header: Pointer
 */
void print_elf_header(const Elf64_Ehdr *elf_header)
{
int i;
printf("  Magic:   ");
for (i = 0; i < EI_NIDENT; i++)
	printf("%02x ", elf_header->e_ident[i]);
printf("\n");
printf("  Class:                             %s\n",
		(elf_header->e_ident[EI_CLASS]
		 == ELFCLASS64) ? "ELF64" : "ELF32");
printf("  Data:                              %s\n",
		(elf_header->e_ident[EI_DATA]
		 == ELFDATA2MSB) ? "big endian" : "little endian");
printf("  Version:                           %d\n",
		elf_header->e_ident[EI_VERSION]);
printf("  OS/ABI:                            %s\n",
		(elf_header->e_ident[EI_OSABI]
		 == ELFOSABI_SYSV) ? "UNIX - System V" : "Others");
printf("  ABI Version:                       %d\n",
		elf_header->e_ident[EI_ABIVERSION]);
printf("  Type:                              0x%04x\n",
		elf_header->e_type);
printf("  Entry point address:               0x%lx\n",
		elf_header->e_entry);
printf("  Format:                            ELF%d\n",
		(elf_header->e_ident[EI_CLASS] == ELFCLASS64) ? 64 : 32);
}
/**
 * open_elf_file - Entry function
 * @filename: const char
 * Return: filed
 */
int open_elf_file(const char *filename)
{
int filed;
filed = open(filename, O_RDONLY);
if (filed == -1)
{
	print_error("Error: Cannot open the file");
	exit(98);
}
return (filed);
}
/**
 * read_elf_header - Entry function
 * @filed: int
 * @elf_header: Pointer
 */
void read_elf_header(int filed, Elf64_Ehdr *elf_header)
{
if (read(filed, elf_header, sizeof(*elf_header)) != sizeof(*elf_header))
{
	print_error("Error: Cannot read the ELF header");
	exit(98);
}

if (elf_header->e_ident[EI_MAG0] != ELFMAG0 ||
		elf_header->e_ident[EI_MAG1] != ELFMAG1 ||
		elf_header->e_ident[EI_MAG2] != ELFMAG2 ||
		elf_header->e_ident[EI_MAG3] != ELFMAG3)
{
print_error("Error: Not an ELF file");
exit(98);
}
}
/**
 * main - Entry function
 * @argc: int
 * @argv: char
 * Return: 0
 */
int main(int argc, char *argv[])
{
Elf64_Ehdr elf_header;
int filed;
if (argc != 2)
{
	print_error("Usage: elf_header elf_filename");
	exit(98);
}
filed = open_elf_file(argv[1]);
read_elf_header(filed, &elf_header);
print_elf_header(&elf_header);
close(filed);
return (0);
}
