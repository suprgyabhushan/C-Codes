#include<stdio.h>
int main()
{
#define BUF_SIZE 400
 
char buffer[BUF_SIZE + 1], *pnt;
FILE *fh = fopen("snarew.rra", "r");
int line;
 

for (line = 1;line<6;line++) {
    if (!fgets(buffer, BUF_SIZE, fh)) /* reads one line at a time */
        break;
    
    *pnt = '\0';
    /* do stuff */
    }
fclose(fh);
return 0;
}