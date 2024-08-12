#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>
#define ELF_MAGIC 0x7f454c46
#define BUF_SIZE 64
void print_error(const char *message, int code) {
dprintf(STDERR_FILENO, "%s\n", message);
exit(code);
}
void print_elf_header(unsigned char *e_ident) {
printf("ELF Header:\n");
printf("  Magic:   %02x %02x %02x %02x %02x %02x %02x %02x %02x %02x %02x %02x %02x %02x %02x %02x\n",
e_ident[0], e_ident[1], e_ident[2], e_ident[3], e_ident[4], e_ident[5],
e_ident[6], e_ident[7], e_ident[8], e_ident[9], e_ident[10], e_ident[11],
e_ident[12], e_ident[13], e_ident[14], e_ident[15]);
printf("  Class:                             ");
if (e_ident[4] == 1)
printf("ELF32\n");
else if (e_ident[4] == 2)
printf("ELF64\n");
else
printf("<unknown: %x>\n", e_ident[4]);
printf("  Data:                              ");
if (e_ident[5] == 1)
printf("2's complement, little endian\n");
else if (e_ident[5] == 2)
printf("2's complement, big endian\n");
else
printf("<unknown: %x>\n", e_ident[5]);
printf("  Version:                           %d (current)\n", e_ident[6]);
printf("  OS/ABI:                            ");
switch (e_ident[7]) {
case 0: printf("System V\n"); break;
case 1: printf("HP-UX\n"); break;
case 2: printf("NetBSD\n"); break;
case 3: printf("Linux\n"); break;
case 6: printf("Solaris\n"); break;
case 7: printf("AIX\n"); break;
case 8: printf("IRIX\n"); break;
case 9: printf("FreeBSD\n"); break;
case 10: printf("Tru64\n"); break;
case 11: printf("Novell Modesto\n"); break;
case 12: printf("OpenBSD\n"); break;
case 13: printf("OpenVMS\n"); break;
case 14: printf("NonStop Kernel\n"); break;
case 15: printf("AROS\n"); break;
case 16: printf("Fenix OS\n"); break;
case 17: printf("CloudABI\n"); break;
default: printf("<unknown: %x>\n", e_ident[7]); break;
}
printf("  ABI Version:                       %d\n", e_ident[8]);
printf("  Type:                              ");
switch (*(unsigned short*)(e_ident + 16)) {
case 0: printf("NONE (Unknown type)\n"); break;
case 1: printf("REL (Relocatable file)\n"); break;
case 2: printf("EXEC (Executable file)\n"); break;
case 3: printf("DYN (Shared object file)\n"); break;
case 4: printf("CORE (Core file)\n"); break;
default: printf("<unknown: %x>\n", *(unsigned short*)(e_ident + 16)); break;
}
printf("  Entry point address:               ");
if (e_ident[4] == 1)
printf("0x%04x\n", *(unsigned short*)(e_ident + 24));
else if (e_ident[4] == 2)
printf("0x%08x\n", *(unsigned int*)(e_ident + 24));
}
int main(int argc, char *argv[]) {
int fd;
unsigned char buf[BUF_SIZE];
ssize_t bytes_read;
if (argc != 2)
print_error("Usage: elf_header elf_filename", 97);
fd = open(argv[1], O_RDONLY);
if (fd == -1)
print_error("Error: Can't read from file", 98);
bytes_read = read(fd, buf, BUF_SIZE);
if (bytes_read < 0)
print_error("Error: Can't read from file", 98);
if (bytes_read < 16 || *(unsigned int*)buf != ELF_MAGIC)
print_error("Error: Not an ELF file", 98);
print_elf_header(buf);
if (close(fd) == -1)
print_error("Error: Can't close fd", 100);
return 0;
}
