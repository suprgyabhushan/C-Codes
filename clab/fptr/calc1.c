#include<stdio.h>
#include<stdlib.h>
#include "util.h"
int process(int,char,int);
int main(int argc,char *argv[])
{
	int a,b;
	a=atoi(argv[1]);
	b=atoi(argv[3]);
	process(a,argv[2][0],b);
	return 0;
}
