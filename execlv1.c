#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>


int main()
{
	 char *a[]={"rahul","HImanshu","Shivam","Nitish",NULL};
	printf("%s:Begin:file %d:pid\n",__FILE__,getpid());
	execv("./hii",a);
	printf("%s:ENd:file %d:pid\n",__FILE__,getpid());
}
