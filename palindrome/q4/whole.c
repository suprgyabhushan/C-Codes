#include<stdio.h>
#include<stdlib.h>
int main()
{
char *a;
a=(char*)malloc(5*sizeof(char));
a[0]='a';
a[1]='b';
a[2]='c';
a[3]='d';
a[4]='e';
a[5]='f';
int i;
for(i=0;i<5;i++)
{
printf("%c \n",a[i]);
}
return 0;
}
