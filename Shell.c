#include <stdio.h>
#include <unistd.h>
#include <linux/limits.h>
#include <string.h>

int main()
{
    char buffer[PATH_MAX + 1];
    char *cwd = getcwd(buffer, PATH_MAX + 1);
    char currCommand[100];
    while(strcmp(currCommand, "exit()") != 0)
    {
        printf("%s>>", buffer);
        gets(currCommand);




    }        






}
