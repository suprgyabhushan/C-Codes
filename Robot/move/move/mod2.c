#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <sys/stat.h>
#include <sys/types.h>

char* getFileCreationTime(char *path) {
    struct stat attr;
    stat(path, &attr);
    return ctime(&attr.st_mtime);
}
int main()
{
	char* time;
	time = getFileCreationTime(".out");
	printf("%s\n", time);
	return 0;
}

