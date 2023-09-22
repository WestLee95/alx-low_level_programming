#include "main.h"

/**
 *main - Entry point of the program
 *@argc: Argument count
 *@argv: Argument vector
 *
 *Return: 0 if successful, 98 if unsuccessful
 */


int main(int argc, char **argv)
{
	int fd;
	ssize_t bytes_read;
	Elf64_Ehdr header;

	if (argc != 2)
	{
		fprintf(stderr, "Usage: elf_header elf_filename\n");
		exit(98);
	}

	fd = open(argv[1], O_RDONLY);
	if (fd < 0)
	{
		perror("Error opening file");
		exit(98);
	}

	bytes_read = read(fd, &header, sizeof(header));
	if (bytes_read != sizeof(header))
	{
		perror("Error reading ELF header");
		close(fd);
		exit(98);
	}

	if (header.e_ident[EI_MAG0] != ELFMAG0 ||
			header.e_ident[EI_MAG1] != ELFMAG1 ||
		header.e_ident[EI_MAG2] != ELFMAG2 ||
		header.e_ident[EI_MAG3] != ELFMAG3)
	{
		fprintf(stderr, "Not an ELF file\n");
		close(fd);
		exit(98);
	}

	printf("Magic:   %.2x %.2x %.2x %.2x\n", header.e_ident[EI_MAG0],
			header.e_ident[EI_MAG1],
		header.e_ident[EI_MAG2], header.e_ident[EI_MAG3]);
	printf("Class:   %s\n", header.e_ident[EI_CLASS] ==
			ELFCLASS32 ? "ELF32" : "ELF64");
	printf("Data:    %s\n", header.e_ident[EI_DATA] ==
			ELFDATA2LSB ? "2's complement, little endian" :
			"2's complement, big endian");
	printf("Version: %d %s\n", header.e_ident[EI_VERSION], "(current)");
	printf("OS/ABI:  UNIX - System V\n");
	printf("ABI Version: %d\n", header.e_ident[EI_OSABI]);
	printf("Type:    %s\n", header.e_type == ET_EXEC ?
			"EXEC (Executable file)" : "Unknown");
	printf("Entry point address:               0x%lx\n", header.e_entry);

	close(fd);

	return (0);
}
