#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(int argc, char * argv[])
{
	FILE *in;
	char fileText[100];
	char text[100]="sentence1: <s> DIAL ONE </s>\n";
	in = fopen(argv[1], "r");
	fgets(fileText,100,in);
	
	if(strcmp(text,fileText)==0)
	{
	printf("y\n");
	}	
	puts(fileText);
	fclose(in);
}
