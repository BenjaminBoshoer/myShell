#include <stdio.h>
#include "LineParser.h"
#include <unistd.h>
#include <linux/limits.h>
#include <string.h>



void execute(cmdLine *pCmdLine);


int main()
{
    char buffer[PATH_MAX + 1];
    char *cwd = getcwd(buffer, PATH_MAX + 1);
    char currCommand[100];
    struct cmdLine com;



    while(strcmp(currCommand, "exit()") != 0)
    {
        printf("%s>>", buffer);
        gets(currCommand);
        execute(parseCmdLines(currCommand));
    }        

}

void execute(cmdLine *pCmdLine)
{
   execvp(*pCmdLine->arguments, pCmdLine->arguments);    
}
