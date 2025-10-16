#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/wait.h>

int picoshell(char **cmds[])
{
    int i = 0;
    int prev_fd = -1;
    int fds[2];

    while (cmds[i])
    {
        if (cmds[i + 1])
        {
            if (pipe(fds) == -1)
                return (1);
        }
        if (fork() == 0)
        {
            if (prev_fd != -1)
            {
                dup2(prev_fd, 0);
                close(prev_fd);
                close(fds[1]);
                close(fds[0]);
            }
            if (cmds[i + 1])
            {
                dup2(fds[1], 1);
                close(fds[1]);
                close(fds[0]);
            }
            execvp(cmds[i][0], cmds[i]);
            exit(1);
        }
        if (prev_fd != -1)
            close(prev_fd);
        prev_fd = fds[0];
        if (cmds[i + 1])
            close(fds[1]);
        i++;
    }
    while (wait(NULL) != -1);
    return (0);
}

int main()
{

    char *cmd1[] = {"ls","-la",NULL};
    char *cmd2[] = {"wc","-l",NULL};
    char **cmds[] = {cmd1, cmd2, NULL};
    picoshell(cmds);
    return (0);
}