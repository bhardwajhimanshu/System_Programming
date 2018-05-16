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
	char *buff1,*buff2;
	shmid=shmget((key_t)222,1024,0666|IPC_CREAT);
	shmid1=shmget((key_t)111,1024,0666|IPC_CREAT);
	buff1= (char*)shmat(shmid,buff,0);
	buff2= (char*)shmat(shmid1,buff,0);
	while(1)
	{
	printf("[User1]:");
	fgets(buff1,sizeof(buff1),stdin);
	printf("%s",buff1);
//	strcpy(buff,buff1);
	}



}
