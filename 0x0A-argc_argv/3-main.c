#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>

/**
* main - Tests the 3-mul program with various arguments
*
* Return: 0 on success
*/
int main(void)
{
char *args1[] = {"./mul", "2", "3", NULL};
char *args2[] = {"./mul", "2", "-3", NULL};
char *args3[] = {"./mul", "2", "0", NULL};
char *args4[] = {"./mul", "245", "3245342", NULL};
char *args5[] = {"./mul", NULL};
extern char **environ;
printf("Test 1: ./mul 2 3\nExpected output: 6\n");
if (fork() == 0)
{
execve("./mul", args1, environ);
}
wait(NULL);
printf("\nTest 2: ./mul 2 -3\nExpected output: -6\n");
if (fork() == 0)
{
execve("./mul", args2, environ);
}
wait(NULL);
printf("\nTest 3: ./mul 2 0\nExpected output: 0\n");
if (fork() == 0)
{
execve("./mul", args3, environ);
}
wait(NULL);
printf("\nTest 4: ./mul 245 3245342\nExpected output: 795108790\n");
if (fork() == 0)
{
execve("./mul", args4, environ);
}
wait(NULL);
printf("\nTest 5: ./mul\nExpected output: Error\n");
if (fork() == 0)
{
execve("./mul", args5, environ);
}
wait(NULL);
return (0);
}
