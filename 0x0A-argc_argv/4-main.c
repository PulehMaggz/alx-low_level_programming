#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>

/**
* main - Tests the 4-add program with various arguments
*
* Return: 0 on success
*/
int main(void)
{
char *args1[] = {"./add", "1", "1", NULL};
char *args2[] = {"./add", "1", "10", "100", "1000", NULL};
char *args3[] = {"./add", "1", "2", "3", "e", "4", "5", NULL};
char *args4[] = {"./add", NULL};
extern char **environ;
printf("Test 1: ./add 1 1\nExpected output: 2\n");
if (fork() == 0)
{
execve("./add", args1, environ);
}
wait(NULL);
printf("\nTest 2: ./add 1 10 100 1000\nExpected output: 1111\n");
if (fork() == 0)
{
execve("./add", args2, environ);
}
wait(NULL);
printf("\nTest 3: ./add 1 2 3 e 4 5\nExpected output: Error\n");
if (fork() == 0)
{
execve("./add", args3, environ);
}
wait(NULL);
printf("\nTest 4: ./add\nExpected output: 0\n");
if (fork() == 0)
{
execve("./add", args4, environ);
}
wait(NULL);
return (0);
}
