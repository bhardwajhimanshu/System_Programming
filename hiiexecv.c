#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>


int main(int argc, char *argv[])
{
	printf("%s:Begin:file %d:pid\n",__FILE__,getpid());	
	printf("%s:File :Hello how are you \n",__FILE__);
	printf("%s:ENd:file %d:pid\n",__FILE__,getpid());
}
