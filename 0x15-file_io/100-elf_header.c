#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <elf.h>
#include <errno.h>

#define BUFFER_SIZE 64

void print_elf_header(const Elf64_Ehdr *header);

/**
 * main - displays the information contained in
 *			the ELF header at the start of an ELF file.
 *
 * @argc: number of arguments passed
 * @argv: array of pointers to the arguments
 *
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	int fd;
	Elf64_Ehdr header;
	ssize_t bytes_read;

	if (argc != 2)
	{
		dprintf(STDERR_FILENO, "Usage: %s elf_filename\n", argv[0]);
		exit(98);
	}

	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't open file %s\n", argv[1]);
		exit(98);
	}

	bytes_read = read(fd, &header, sizeof(header));
	if (bytes_read != sizeof(header))
	{
		dprintf(STDERR_FILENO,
			"Error: Can't read ELF header from file %s\n", argv[1]);
		close(fd);
		exit(98);
	}

	if (header.e_ident[EI_MAG0] != ELFMAG0 ||
		header.e_ident[EI_MAG1] != ELFMAG1 ||
		header.e_ident[EI_MAG2] != ELFMAG2 ||
		header.e_ident[EI_MAG3] != ELFMAG3)
	{
		dprintf(STDERR_FILENO,
			"Error: File %s is not an ELF file\n", argv[1]);
		close(fd);
		exit(98);
	}

	print_elf_header(&header);

	close(fd);
	return (0);
}

/**
 * print_elf_header - displays the information contained in
 *					the ELF header at the start of an ELF file.
 *
 * @header: header of a ELF file
 *
 * Return: 0 on success
 */
void print_elf_header(const Elf64_Ehdr *header)
{
	int i;

	printf("ELF Header:\n");
	printf("  Magic:   ");
	for (i = 0; i < EI_NIDENT; i++)
		printf("%02x ", header->e_ident[i]);
	printf("\n");
	printf("  Class:                             %s\n",
		   header->e_ident[EI_CLASS] == ELFCLASS64 ? "ELF64" : "ELF32");
	printf("  Data:                              %s\n",
		   header->e_ident[EI_DATA] == ELFDATA2LSB ?
		   "2's complement, little endian" : "2's complement, big endian");
	printf("  Version:                           %d%s\n",
		   header->e_ident[EI_VERSION],
		   header->e_ident[EI_VERSION] == EV_CURRENT ? " (current)" : "");
	printf("  OS/ABI:                            %s\n",
		   header->e_ident[EI_OSABI] == ELFOSABI_SYSV ? "UNIX - System V" : "Other");
	printf("  ABI Version:                       %d\n",
		   header->e_ident[EI_ABIVERSION]);
	printf("  Type:                              %s\n",
		   header->e_type == ET_NONE ? "NONE (None)" :
		   header->e_type == ET_REL ? "REL (Relocatable file)" :
		   header->e_type == ET_EXEC ? "EXEC (Executable file)" :
		   header->e_type == ET_DYN ? "DYN (Shared object file)" :
		   header->e_type == ET_CORE ? "CORE (Core file)" : "Unknown");
	printf("  Entry point address:               0x%lx\n", header->e_entry);
	printf("  Start of program headers:          %lu (bytes into file)\n",
		   header->e_phoff);
	printf("  Start of section headers:          %lu (bytes into file)\n",
		   header->e_shoff);
	printf("  Flags:                             0x%x\n", header->e_flags);
	printf("  Size of this header:               %d (bytes)\n", header->e_ehsize);
	printf("  Size of program headers:           %d (bytes)\n",
			header->e_phentsize);
	printf("  Number of program headers:         %d\n",
			header->e_phnum);
	printf("  Size of section headers:           %d (bytes)\n",
			header->e_shentsize);
	printf("  Number of section headers:         %d\n", header->e_shnum);
	printf("  Section header string table index: %d\n", header->e_shstrndx);
}
