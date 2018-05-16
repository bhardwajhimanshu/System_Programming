#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
#include<sys/ipc.h>
#include<sys/types.h>
#include<sys/stat.h>


int main()
{
	int wfd,rfd;
	mkfifo("myfifo",0666|IPC_CREAT);
//	mkfifo("myfifo1",0666|IPC_CREAT);
	wfd=open("myfifo",O_WRONLY);
	rfd=open("myfifo",O_RDONLY);
	char buff[100];
//	char buff1[100];
	printf("\t Chat Application \n");
	printf("\t Writer\n");
	while(1)
	{
		printf("[USER 1] Waiting for typing:");
		fgets(buff,sizeof(buff),stdin);
		write(wfd,buff,sizeof(buff));
		printf("[USER 1] Waiting for reply:\n");
		read(rfd,buff,sizeof(buff));
		printf("[USER 2] %s",buff);
	//	close(wfd);
	}

}
