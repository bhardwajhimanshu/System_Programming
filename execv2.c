#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>


int main()
{
	printf("%s:Begin:file %d:pid\n",__FILE__,getpid());
	execv("./hiiexecv",NULL);
	printf("%s:ENd:file %d:pid\n",__FILE__,getpid());
}
