#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include "main.h"

int create_file(const char *filename, char *text_content)
{
int fd;
ssize_t len = 0;
if (filename == NULL)
return (-1);

if (text_content != NULL)
{
while (text_content[len])
len++;
}

fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, S_IRUSR | S_IWUSR);
if (fd == -1)
return (-1);

if (text_content != NULL)
{
if (write(fd, text_content, len) != len)
{
close(fd);
return (-1);
}
}

close(fd);
return (1);
}
