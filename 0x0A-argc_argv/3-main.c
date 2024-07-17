#include <stdio.h>
#include <stdlib.h>

int main(void)
{
char *args[] = {"./mul", "2", "3", NULL};
extern char **environ;
printf("Test 1: ./mul 2 3\nExpected output: 6\n");
if (fork() == 0)
{
execve("./mul", args, environ);
}
wait(NULL);
args[1] = "2";
args[2] = "-3";
printf("\nTest 2: ./mul 2 -3\nExpected output: -6\n");
if (fork() == 0)
{
execve("./mul", args, environ);
}
wait(NULL);
args[1] = "2";
args[2] = "0";
printf("\nTest 3: ./mul 2 0\nExpected output: 0\n");
if (fork() == 0)
{
execve("./mul", args, environ);
}
wait(NULL);
args[1] = "245";
args[2] = "3245342";
printf("\nTest 4: ./mul 245 3245342\nExpected output: 795108790\n");
if (fork() == 0)
{
execve("./mul", args, environ);
}
wait(NULL);
args[1] = NULL;
args[2] = NULL;
printf("\nTest 5: ./mul\nExpected output: Error\n");
if (fork() == 0)
{
execve("./mul", args, environ);
}
wait(NULL);
return 0;
}
