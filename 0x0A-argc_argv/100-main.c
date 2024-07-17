#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>

/**
* main - Tests the 100-change program with various arguments
*
* Return: 0 on success
*/
int main(void)
{
char *args1[] = {"./change", "10", NULL};
char *args2[] = {"./change", "100", NULL};
char *args3[] = {"./change", "101", NULL};
char *args4[] = {"./change", "13", NULL};
char *args5[] = {"./change", NULL};
extern char **environ;
printf("Test 1: ./change 10\nExpected output: 1\n");
if (fork() == 0)
{
execve("./change", args1, environ);
}
wait(NULL);
printf("\nTest 2: ./change 100\nExpected output: 4\n");
if (fork() == 0)
{
execve("./change", args2, environ);
}
wait(NULL);
printf("\nTest 3: ./change 101\nExpected output: 5\n");
if (fork() == 0)
{
execve("./change", args3, environ);
}
wait(NULL);
printf("\nTest 4: ./change 13\nExpected output: 3\n");
if (fork() == 0)
{
execve("./change", args4, environ);
}
wait(NULL);
printf("\nTest 5: ./change\nExpected output: Error\n");
if (fork() == 0)
{
execve("./change", args5, environ);
}
wait(NULL);
return (0);
}
