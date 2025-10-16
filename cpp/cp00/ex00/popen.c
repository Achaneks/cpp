#include <unistd.h>
#include <stdlib.h>
#include <error.h>
#include <stdio.h>






int ft_popen(char *file, char *argv[], char type)
{
	if(!file  || !argv || (type != 'w' && type != 'r'))
		return -1;

	int fd[2];

	pipe(fd);
	if(fork() == 0)
	{
		if(type == 'r')
		{
			dup2(fd[1],1);
			close(fd[0]);
			close(fd[1]);
			execvp(file, argv);
		}
		if(type == 'w')
		{
			dup2(fd[0],0);
			close(fd[1]);
			close(fd[0]);
			execvp(file, argv);
		}
		exit(-1);
	}
	if(type == 'r')
	{
		close(fd[1]);
		return(fd[0]);
	}
	else
	{
		close(fd[0]);
		return(fd[1]);
	}
	return(-1);
}

// int main()
// {
//     char *args[] = {"ls", "-l", NULL};
//     int fd = ft_popen("ls", args, 'r');


//     char buffer[1024];
//     ssize_t bytes;
//     while ((bytes = read(fd, buffer, sizeof(buffer) - 1)) > 0)
//     {
//         buffer[bytes] = '\0';
//         printf("%s", buffer);
//     }
//     close(fd);
//     return 0;
// }

#include <string.h>

int main()
{
    char *args[] = {"cat", NULL};
    int fd = ft_popen("cat", args, 'w');


    char *msg = "Hello from parent process!\n";
    write(fd, msg, strlen(msg));
    close(fd);
    return 0;
}