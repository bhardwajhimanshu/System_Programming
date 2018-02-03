#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>

	int main()
{
	pid_t ret;
	int count=0;
	printf("%d , %s:Begin\n",getpid(),__func__);
	sleep(1);
	ret=fork();
	ret =fork();
	//ret =fork();
	//ret =fork();
	ret =fork();
	printf("%d:pid , %s:Begin  %d:cid, %d:ppid\n",getpid(),__func__,ret,getppid());
	//printf("%d , %s:End\n",getpid(),__func__);

}
