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
	wfd=open("myfifo",O_RDONLY);
	rfd=open("myfifo",O_WRONLY);
	char buff[100];
//	char buff1[100];
	printf("\t Reader \n");
	while(1)
	{
		printf("[User 2] Waiting for reply:");
		read(wfd,buff,sizeof(buff));
		printf("[USER 1] %s",buff);
		printf("[User 2] Waiting for typing:");
		fgets(buff,sizeof(buff),stdin);
		write(rfd,buff,sizeof(buff));
	//	close(wfd);
	}

}
