#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
#include<sys/shm.h>
#include<string.h>

int main()
{
	void *buff = (void*)0;
	int shmid,shmid1;
	char *buff1;
	char *buff2;
	shmid=shmget((key_t)222,1024,0666|IPC_CREAT);
	shmid1=shmget((key_t)111,1024,0666|IPC_CREAT);
	buff1= (char*) shmat(shmid,(void*)0,0);
	buff2= (char*) shmat(shmid1,(void*)0,0);
	while(1)
	{
	//strcpy(buff1,buff);
	printf("%s",buff1);
	printf("[User2]:");
	fgets(buff2,sizeof(buff2),stdin);
	}



}
