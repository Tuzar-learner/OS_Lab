#include<stdio.h>
#include<sys/types.h>
#include<sys/wait.h>
#include<unistd.h>
#include<stdlib.h>
int main() {
	int pid;
	printf("getpid()\nThe process id of currentprocess: %d\n",getpid());
	printf("fork() creates child process\n");
	if(fork()!=0) {
		printf("Parent process starts and wait() executes\n");
		wait(NULL);
		printf("Waiting and executes another function");
		char *args[]={"ls",NULL};
		execvp(args[0],args);
		exit(0);
		printf("Executes not ends and parent ends");
		}
	else
		printf("Child process starts and ends\n");
	printf("exit function\n");
	exit(0);
	printf("Exit not executing");
	return 0;
}
