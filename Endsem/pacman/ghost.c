#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
int Row(char *file)
	{
	FILE *data=fopen(file,"r");
	int value;	
	int x=getc(data),row=0;
    	while(x!=EOF)
	    	{
        	x=getc(data);
		if(x==10)
        	    	{
			row=row+1;
			}
    		}
	return row;
	fclose(data);
	}
int Col(char *file)
	{
	FILE *data=fopen(file,"r");
        int x=getc(data),col=0;
	while(x!='\n')
	    	{
        	x=getc(data);		
		col=col+1;	
            	}
	return col;
	fclose(data);
	}

void Down(char *file1,char **array,int newr,int newc,int newx,int newy,int m,int rows,int columns)
	{
	int i,j,k,l,p;	
	char a;
	printf("%d %d \n",newr,newc);
	printf("%d %d \n",newx,newy);
	for(i=0;i<rows;i++)
		{
		for(j=0;j<columns;j++)
			{			
			if(((i==newr)&&(j==newc))&&((newr==newx)&&(newc==newy)))
				{
				array[i][j]='G';
				}
			else if((i==newr)&&(j==newc))
				{
				array[i][j]='-';
				}
			else if(((i==newx)&&(j==newy))&&((newr==newx-1)&&(newc==newy)))			
					{
					array[i][j]='G';
					}
			else if((i==newx)&&(j==newy)) 
					{
					array[i][j]='G';
					}
				
					
			printf("%c",array[i][j]);
			printf("%s"," ");
			}
		printf("\n");
		}
	
	//printf("%d\n",k);
	//printf("%d\n",l);
	}
void Up(char *file1,char **array,int newr,int newc,int newx,int newy,int m,int rows,int columns)
	{
	int i,j,k,l,p;
	for(i=0;i<rows;i++)
		{
		for(j=0;j<columns;j++)
			{			
			if(((i==newr)&&(j==newc))&&((newr==newx)&&(newc==newy)))
				{
				array[i][j]='G';
				}
			else if((i==newr)&&(j==newc))
				{
				array[i][j]='-';
				}
			else if(((i==newx)&&(j==newy))&&((newr==newx+1)&&(newc==newy)))
				{
				array[i][j]='G';				
				}
			else if((i==newx)&&(j==newy))
				{
				array[i][j]='G';
				}					
			printf("%c",array[i][j]);
			printf("%s"," ");
			}
		printf("\n");
		}	
	
	}
void Left(char *file1,char **array,int newr,int newc,int newx,int newy,int m,int rows,int columns)
	{
	int i,j,k,l;	
	
	for(i=0;i<rows;i++)
		{
		for(j=0;j<columns;j++)
			{		
			if(((i==newr)&&(j==newc))&&((newr==newx)&&(newc==newy)))
				{
				array[i][j]='G';
				}
			else if((i==newr)&&(j==newc))
				{
				array[i][j]='-';
				}
			else if(((i==newx)&&(j==newy))&&((newr==newx)&&(newc==newy+2+m)))
				{
				array[i][j]='G';				
				}
			else if((i==newx)&&(j==newy))
				{
				array[i][j]='G';
				}			
			printf("%c",array[i][j]);
			printf("%s"," ");
			}
		printf("\n");
		}	
	//printf("%d\n",k);
	//printf("%d\n",l);
	}	
void Right(char *file1,char **array,int newr,int newc,int newx,int newy,int m,int rows,int columns)
	{
	int i,j,k,l,p;
	printf("%d %d\n",newr,newc);
	printf("%d %d\n",newx,newy);
	for(i=0;i<rows;i++)
		{
		for(j=0;j<columns;j++)
			{			
			if((i==newr)&&(j==newc))
				{
				array[i][j]='-';
				}
			
			else if((i==newx)&&(j==newy+2+m))
				{
				
					array[i][j]='G';
					
				}
			printf("%c",array[i][j]);
			printf("%s"," ");
			}
		printf("\n");
		}
		
	//printf("%d\n",newx);
	//printf("%d\n",newc);
	}

void scanVal(char *fileName,char **mat,int row,int col)
{
    FILE * input=fopen(fileName,"r");
    char c;
    int i,j;
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
            mat[i][j]=fgetc(input);    
        c=fgetc(input);
    }
    fclose(input);
}

int main(int argc,char *argv[])
	{
	int rows,columns;
	rows=Row(argv[1]);
	columns=Col(argv[1]);
	//printf("%d\n",rows);
	//printf("%d\n",columns);
	
		
	int i,j,k,l,x,y;
	int m=0;	
	char a;
	
	
	char **array=(char **)malloc(rows*sizeof(char*));
	for(i=0;i<rows;i++)
		{
		array[i]=(char*)malloc(columns*sizeof(char));
		}

	scanVal(argv[1],array,rows,columns);
	for(i=0;i<rows;i++)
    		{
        	for(j=0;j<columns;j++)
			{
            		printf("%c",array[i][j]);
			if(array[i][j]=='G')
				{
				k=i;
				l=j;
				}
			}

        	printf("\n");
    		}
			
	//printf("%d\n",k);
	//printf("%d\n",l);
	int mov=0;
	char b[500];
	FILE *file2=fopen(argv[2],"r");
	while(!feof(file2))
		{
		fscanf(file2,"%s\n",b);
		printf("%s\n",b);
		
		if(mov==1)
			{
			Down(argv[1],array,k,l,x,y,m,rows,columns);
			}
		else if(mov==2)
			{
			Up(argv[1],array,k,l,x,y,m,rows,columns);
			}
		else if(mov==3)
			{
			Left(argv[1],array,k,l,x,y,m,rows,columns);
			}
		else if(mov==4)
			{
			Right(argv[1],array,k,l,x,y,m,rows,columns);
			}

			




		if(strcmp(b,"right")==0)
			{
			x=k;
			y=l+2+m;
			}
		else if(strcmp(b,"left")==0)
			{
			x=k;
			y=l-2-m;
			}
		else if(strcmp(b,"up")==0)
			{
			x=k-1-m;
			y=l;
			}
		else if(strcmp(b,"down")==0)
			{
			x=k+1+m;
			y=l;
			}
		printf("%d\n",x);
		printf("%d\n",y);
		//printf("%d\n",m);
		if(((x<0)&&(y>0))||((x<0)&&(y<columns)))
			{
			x=x+1;
			y=y;
			}
		else if(((x>0)&&(y<0))||((x<rows)&&(y<0)))
			{
			x=x;
			y=y+2;
			}
		else if(((x>rows-1)&&(y>0))||((x>rows-1)&&(y>0)))
			{
			x=x-1;
			y=y;
			}	
		else if(((x>0)&&(y>columns-1))||((x>0)&&(y>columns-1)))
			{
			x=x;
			y=y-2;
			}
		//printf("%d\n",x);
		//printf("%d\n",y);	
		
		for(i=0;i<rows;i++)
			{
			for(j=0;j<columns;j++)
				{
				if(array[x][y]=='A')
					{
					mov=1;					
					
									
					}
				else if(array[x][y]=='O')
					{
					mov=2;
					
					//Up(argv[1],array,k,l,x,y,m,rows,columns);				
					}
				else if(array[x][y]=='B')
					{
					mov=3;
					
					//Left(argv[1],array,k,l,x,y,m,rows,columns);
									
					}
				else if(array[x][y]=='M')
					{
					mov=4;
					
					//Right(argv[1],array,k,l,x,y,m,rows,columns);				
					}
				/*else if(array[x][y]=='-')
					{
					m=m;				
					}*/
				}
			}
		printf("%d\n",mov);
	
		if(strcmp(b,"right")==0)
			{
			Right(argv[1],array,k,l,x,y,m,rows,columns);
			}
		else if(strcmp(b,"down")==0)
			{
			Down(argv[1],array,k,l,x,y,m,rows,columns);
			}
		else if(strcmp(b,"up")==0)
			{
			Up(argv[1],array,k,l,x,y,m,rows,columns);
			}	
		else if(strcmp(b,"left")==0)
			{
			Left(argv[1],array,k,l,x,y,m,rows,columns);
			}
	
		for(i=0;i<rows;i++)
		{
		for(j=0;j<columns;j++)
			{
			if(array[i][j]=='G')
				{
				k=i;
				l=j;				
				}
			}
		}

		printf("%d\n",k);
		printf("%d\n",l);
		
	
		}
	fscanf(file2,"%s\n",b);
	return 0;
	}
