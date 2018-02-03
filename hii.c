#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>


int main(int argc, char *argv[])
{
	printf("%s:Begin:file %d:pid\n",__FILE__,getpid());	
	printf("%s:File :Hello how are you \n",__FILE__);
	printf("%s:argv[0]\n", argv[0]);
	printf("%s:argv[1]\n", argv[1]);
	printf("%s:argv[2]\n", argv[2]);
//	printf("%s:argv[3]\n", argv[3]);
//	printf("%s:argv[4]\n", argv[4]);
	printf("%s:ENd:file %d:pid\n",__FILE__,getpid());
}
