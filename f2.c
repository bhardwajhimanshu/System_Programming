#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<sys/wait.h>

	int main()
{
	pid_t ret,cpid;
	int num,rcode;
	printf("%d , %s:Begin\n",getpid(),__func__);
 	ret =fork();
	{
		switch(ret)
		{
		case -1:
			{
				perror("fork");
				exit(EXIT_FAILURE);
			}
		case 0:
			printf("%d, %d , %s %d\n",getpid(),getppid(),__func__,ret);
			num =25;
			break;
			
		default:
			printf("%d, %d , %s %d\n",getpid(),getppid(),__func__,ret);
			num = 10;
		}
	}
	for(int i=1;i<=num;i++)
	{
	sleep(1);
			printf("%d %d %s %d\n",getpid(),getppid(),__func__,ret);
	}
	if(ret>0)
	{
			cpid=wait(&rcode);
			if(WIFEXITED(rcode))
			{
				printf("Child terminated Normally\n");
				printf("%d:Child %d:returncode\n",getpid(),WEXITSTATUS(rcode));
			}
	}
	printf("%d , %s:End, %d\n",getpid(),__func__,ret);
	return num;

}
