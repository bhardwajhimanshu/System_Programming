#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>


int main()
{
	printf("%s:Begin:file %d:pid\n",__FILE__,getpid());
	execl("./hii","hii.c","Himanshu","Nitish","Shivam",NULL);
	printf("%s:ENd:file %d:pid\n",__FILE__,getpid());
}
