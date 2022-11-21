nclude <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <string.h>

int main()
{
        char buf[256];
        charargv[50];
        int narg;
        pid_t pid;
        while (1) {
                printf("Project Shell >> ");
                gets(buf);



                int compares = strcmp("exit", buf);

                int comparels = strcmp("ls", buf);

                if (compares == 0)
                        break;
                else if (comparels == 0)
                        break;
                else
                        printf("Not fount command");

                pid = fork();
                if (pid == 0)
                        execvp(argv[0], argv);
                else if (pid > 0)
                        wait((int *) 0);

                else
                        perror("fork failed");
        }
}
