#include<stdio.h>
int main(int argc,char *argv[])
    {
char ch;

    FILE *read;
    
    read=fopen(argv[1],"r");
     while((ch = fgetc(read))!=EOF)
{
printf("%c", ch);

}
    fclose(read);
    return 0;
    }

