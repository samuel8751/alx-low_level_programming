#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <elf.h>
#include <fcntl.h>
#include <sys/types.h>

#define BUF_SIZE 64

void display_elf_info(Elf64_Ehdr *header) {
    printf("ELF Header:\n");
    printf("Magic:   %02x %02x %02x %02x %02x %02x %02x %02x %02x %02x %02x %02x %02x %02x %02x %02x\n",
           header->e_ident[0], header->e_ident[1], header->e_ident[2], header->e_ident[3],
           header->e_ident[4], header->e_ident[5], header->e_ident[6], header->e_ident[7],
           header->e_ident[8], header->e_ident[9], header->e_ident[10], header->e_ident[11],
           header->e_ident[12], header->e_ident[13], header->e_ident[14], header->e_ident[15]);
    printf("Class:                             ");
    switch (header->e_ident[EI_CLASS]) {
        case ELFCLASS32:
            printf("ELF32\n");
            break;
        case ELFCLASS64:
            printf("ELF64\n");
            break;
        default:
            printf("<unknown: %02x>\n", header->e_ident[EI_CLASS]);
    }
    printf("Data:                              %s\n",
           header->e_ident[EI_DATA] == ELFDATA2LSB ? "2's complement, little endian" : "<unknown>");
    printf("Version:                           %d (current)\n", header->e_ident[EI_VERSION]);
    printf("OS/ABI:                            %s\n",
           header->e_ident[EI_OSABI] == ELFOSABI_SYSV ? "UNIX - System V" : "<unknown>");
    printf("ABI Version:                       %d\n", header->e_ident[EI_ABIVERSION]);
    printf("Type:                              ");
    switch (header->e_type) {
        case ET_NONE:
            printf("NONE (Unknown)\n");
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
            printf("<unknown: %d>\n", header->e_type);
    }
    printf("Entry point address:               0x%lx\n", header->e_entry);
}

int main(int argc, char **argv) {
    if (argc != 2) {
        dprintf(STDERR_FILENO, "Usage: %s elf_filename\n", argv[0]);
        return (98);
    }

    int fd = open(argv[1], O_RDONLY);
    if (fd == -1) {
        dprintf(STDERR_FILENO, "Error: Can't open file %s\n", argv[1]);
        return (98);
    }

    Elf64_Ehdr header;
    ssize_t read_size = read(fd, &header, sizeof(header));
    if (read_size == -1 || read_size != sizeof(header)) {
        dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
        close(fd);
        return (98);
    }

    if (header.e_ident[EI_MAG0] != ELFMAG0 || header.e_ident[EI_MAG1] != ELFMAG1 ||
        header.e_ident[EI_MAG2] != ELFMAG2 || header.e_ident[EI_MAG3] != ELFMAG3) {
        dprintf(STDERR_FILENO, "Error: Not an ELF file\n");
        close(fd);
        return (98);
    }

    display_elf_info(&header);
    close(fd);
    return (0);
}

