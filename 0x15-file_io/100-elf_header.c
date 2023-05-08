#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <elf.h>
#include <errno.h>
#include <string.h>

/**
* elf_header - displays the information contained in the ELF header
* print_error - prints error
* print_magic - prints magic
* print_class - prints class
* print_data - prints the data
* print_version - prints the version
* print_osabi - prints osabi
* print_type - prints the type
* Return: 0
*/

void print_error(const char *msg)
{
	int i;

	dprintf(STDERR_FILENO, "Error: %s\n", msg);
	exit(98);
}

void print_magic(unsigned char *magic)
{
	printf("  Magic:   ");
	for (i = 0; i < EI_NIDENT; i++)
	{
		printf("%02x ", magic[i]);
	}
	printf("\n");
}

void print_class(unsigned char elf_class)
{
	printf("  Class:                             ");
	switch (elf_class)
	{
		case ELFCLASSNONE:
			printf("None\n");
			break;
		case ELFCLASS32:
			printf("ELF32\n");
			break;
		case ELFCLASS64:
			printf("ELF64\n");
			break;
		default:
			printf("<unknown: %d>\n", elf_class);
	}
}

void print_data(unsigned char elf_data)
{
	printf("  Data:                              ");
	switch (elf_data)
	{
		case ELFDATANONE:
			printf("None\n");
			break;
		case ELFDATA2LSB:
			printf("2's complement, little endian\n");
			break;
		case ELFDATA2MSB:
			printf("2's complement, big endian\n");
			break;
		default:
			printf("<unknown: %d>\n", elf_data);
	}
}

void print_version(unsigned char version)
{
	printf("  Version:                           ");
	switch (version)
	{
		case EV_NONE:
			printf("None\n");
			break;
		case EV_CURRENT:
			printf("Current\n");
			break;
		default:
			printf("<unknown: %d>\n", version);
	}
}

void print_osabi(unsigned char osabi)
{
	printf("  OS/ABI:                            ");
	switch (osabi)
	{
		case ELFOSABI_SYSV:
			printf("UNIX - System V\n");
			break;
		case ELFOSABI_HPUX:
			printf("HP-UX\n");
			break;
		case ELFOSABI_NETBSD:
			printf("NetBSD\n");
			break;
		case ELFOSABI_LINUX:
			printf("Linux\n");
			break;
		case ELFOSABI_SOLARIS:
			printf("Solaris\n");
			break;
		case ELFOSABI_IRIX:
			printf("IRIX\n");
			break;
		case ELFOSABI_FREEBSD:
			printf("FreeBSD\n");
			break;
		case ELFOSABI_TRU64:
			printf("Compaq TRU64 UNIX\n");
			break;
		case ELFOSABI_ARM:
			printf("ARM\n");
			break;
		case ELFOSABI_STANDALONE:
			printf("Standalone App\n");
			break;
		default:
			printf("<unknown: %d>\n", osabi);
	}
}

void print_type(unsigned short type)
{
	printf("  Type:                              ");
	switch (type)
	{
		case ET_NONE:
			printf("None\n");
			break;
		case ET_REL:
			printf("REL (Relocatable file)\n");
			break;
		case ET_EXEC:
			printf("EXEC (Executable file)\n");
			break;
		case ET_DYN:
			printf("DYN (Shared object file)\n");
			break;
		case ET_CORE:
			printf("CORE (Core file)\n");
			break;
		default:
			printf("<unknown: %d>\
	}
}
