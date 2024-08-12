#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include "main.h"

ssize_t read_textfile(const char *filename, size_t letters)
{
int fd;
ssize_t bytes_read, bytes_written;
char *buffer;

if (filename == NULL)
return (0);

buffer = (char *)malloc(letters);
if (buffer == NULL)
return (0);

fd = open(filename, O_RDONLY);
if (fd == -1)
{
free(buffer);
return (0);
}

bytes_read = read(fd, buffer, letters);
if (bytes_read == -1)
{
close(fd);
free(buffer);
return (0);
}

bytes_written = write(STDOUT_FILENO, buffer, bytes_read);
if (bytes_written != bytes_read)
{
close(fd);
free(buffer);
return (0);
}

close(fd);
free(buffer);
return (bytes_read);
}
