#include "main.h"

void chelf(unsigned char *idn);
void pr_mag(unsigned char *idn);
void _class(unsigned char *idn);
void dat(unsigned char *idn);
void _version(unsigned char *idn);
void type(unsigned int i, unsigned char *j);
void cl_elf(int c_elf);
void ent(unsigned long int i, unsigned char *j);
void pr_abi(unsigned char *idn);
void _osabi(unsigned char *idn);

/**
 * pr_mag - prints the ELF magic nums
 * @idn : A pointer
 */

void pr_mag(unsigned char *idn)
{
	int id;

	printf("Magic:			");
	id = 0;
	while (id < EI_NIDENT)
	{
		printf("%02x", idn[id]);
		if (id == EI_NIDENT - 1)
		{
			printf("\n");
		}
		else
		{
			printf(" ");
		}
		id++;
	}
}

/**
 * chelf - checks for an ELF file
 * @idn: Pointer
 */

void chelf(unsigned char *idn)
{
	int idx;

	idx = 0;
	while (idx < 4)
	{
		if (idn[idx] != 127 && idn[idx] != 'E' && idn[idx] != 'L' && idn[idx] != 'F')
		{
			dprintf(STDERR_FILENO, "Error: Code : NOT an ELF file\n");
			exit(98);
		}
		idx++;
	}
}

/**
 * dat - Prints ELF data
 * @idn: Pointer
 */

void dat(unsigned char *idn)
{
	printf("Data:			");
	if (idn[EI_DATA] == ELFDATANONE)
	{
		printf("none\n");
	}
	else if (idn[EI_DATA] == ELFDATA2LSB)
	{
		printf("2's complement, little endian\n");
	}
	else if (idn[EI_DATA] == ELFDATA2MSB)
	{
		printf("2's complement, big Endian\n");
	}
	else
	{
		printf("<unknown: %x\n>", idn[EI_CLASS]);
	}
}

/**
 * pr_abi - PrintdELF ABI header version
 * @idn: Pointer
 */

void pr_abi(unsigned char *idn)
{
	printf("ABI Version:	%d\n", idn[EI_ABIVERSION]);
}

/**
 * _osabi - Print OS-ABI header of ELF
 * @idn: Pointer
 */

void _osabi(unsigned char *idn)
{
	printf("OSABI:	");
	if (idn[EI_OSABI] == ELFOSABI_NONE)
		printf("UNIX - System V\n");
	else if (idn[EI_OSABI] == ELFOSABI_HPUX)
		printf("UNIX - HP-UX\n");
	else if (idn[EI_OSABI] == ELFOSABI_NETBSD)
		printf("UNIX - NetBSD\n");
	else if (idn[EI_OSABI] == ELFOSABI_LINUX)
	{
		printf("UNIX - Linux\n");
	}
	else if (idn[EI_OSABI] == ELFOSABI_SOLARIS)
	{
		printf("UNIX - Solaris\n");
	}
	else if (idn[EI_OSABI] == ELFOSABI_IRIX)
	{
		printf("UNIX - Irix\n");
	}
	else if (idn[EI_OSABI] == ELFOSABI_FREEBSD)
	{
		printf("UNIX - Free BSD\n");
	}
	else if (idn[EI_OSABI] == ELFOSABI_ARM)
	{
		printf("Arm\n");
	}
	else if (idn[EI_OSABI] == ELFOSABI_TRU64)
	{
		printf("UNIX - TRU64\n");
	}
	else if (idn[EI_OSABI] == ELFOSABI_STANDALONE)
	{
		printf("Standalone\n");
	}
	else
	{
		printf("<unknown: %x\n>", idn[EI_OSABI]);
	}
}

/**
 * _class - Prints the ELF class header
 * @idn: A pointer
 */

void _class(unsigned char *idn)
{
	printf("Class:			");
	switch (idn[EI_CLASS])
	{
		case ELFCLASSNONE:
			printf("none\n");
			break;
		case ELFCLASS32:
			printf("ELF32\n");
			break;
		case ELFCLASS64:
			printf("ELF64\n");
			break;
		default:
			printf("<unknown: %x\n>", idn[EI_CLASS]);
	}
}

/**
 *_version - prints ELF header version
 *@idn: Pointer
 */

void _version(unsigned char *idn)
{
	printf("Version:		%d\n", idn[EI_VERSION]);
	if (idn[EI_VERSION] == EV_CURRENT)
	{
		printf("1 (current)\n");
	}
	else
	{
		printf("\n");
	}
}


/**
 *cl_elf - Closes ELF file
 *@idn: File descriptor
 */

void cl_elf(int c_elf)
{
	if (close(c_elf) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", c_elf);
		exit(98);
	}
}

/**
 *type - Prints the ELF header type
 *@i: first param, elf type
 *@j: second param, pointer
 */


void type(unsigned int i, unsigned char *j)
{
	if (j[EI_DATA] == ELFDATA2MSB)
	{
		i >>= 8;
	}
	printf("Type:			");
	if (i == ET_NONE)
	{
		printf("NONE (none)\n");
	}
	else if (i == ET_REL)
	{
		printf("REL (Relocatable file)\n");
	}
	else if (i == ET_EXEC)
	{
		printf("EXEC (Executable file)\n");
	}
	else if (i == ET_CORE)
	{
		printf("CORE (Core file)\n");
	}
	else if (i == ET_DYN)
	{
		printf("DYN (Shared Object File)\n");
	}
	else
	{
		printf("<unknown: %x\n>", i);
	}
}

/**
 *ent - Prints the Entry of ELF header
 *@i: ELF Address
 *@j: Pointer
 */

void ent(unsigned long int i, unsigned char *j)
{
	printf("Entry point Address:		");
	if (j[EI_DATA] == ELFDATA2MSB)
	{
		i = ((i << 8) & 0xFF00FF00) | ((i >> 8) & 0xFF00FF);
		i = (i << 16) | (i >> 16);
	}
	if (j[EI_CLASS] == ELFCLASS32)
	{
		printf("%#x\n", (unsigned int)i);
	}
	else
	{
		printf("%#lx\n", i);
	}
}

/**
 * main - main function
 * @argc: argument count
 * @argv: argument verctor
 * Return: Success
 */

int main(int __attribute__((__unused__)) argc, char *argv[])
{
	Elf64_Ehdr *head;
	int i, j;

	i = open(argv[1], O_RDONLY);
	if (i == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	head = malloc(sizeof(Elf64_Ehdr));
	if (!head)
	{
		cl_elf(i);
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	j = read(i, head, sizeof(Elf64_Ehdr));
	if (j == -1)
	{
		free(head);
		cl_elf(i);
		dprintf(STDERR_FILENO, "Error: '%s' : No file\n", argv[1]);
		exit(98);
	}
	chelf(head->e_ident);
	printf("ELF Header:\n");
	pr_mag(head->e_ident);
	_class(head->e_ident);
	dat(head->e_ident);
	_version(head->e_ident);
	_osabi(head->e_ident);
	pr_abi(head->e_ident);
	type(head->e_type, head->e_ident);
	ent(head->e_type, head->e_ident);
	free(head);
	cl_elf(i);
	return (0);
}
