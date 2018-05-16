#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
#include<sys/msg.h>


typedef struct buf
{
	long int type;
	char data[100];
}buf;
int main()
{
	buf b;
	int msgid,msgid1;
		
	msgid=msgget((key_t)222,0666|IPC_CREAT);
	msgid1=msgget((key_t)111,0666|IPC_CREAT);
	while(1)
	{
		b.type=getpid();
		printf("[User1]:");
		fgets(b.data,sizeof(buf),stdin);
		msgsnd(msgid,&b,sizeof(b),0);
		msgrcv(msgid1,&b,sizeof(b),b.type,0);
		printf("[User1] : %s",b.data);
	}

}
