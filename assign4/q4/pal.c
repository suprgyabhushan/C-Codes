#include<stdio.h>
#include<string.h>
int isPalindrome(char *str,int size)
{
	
	if(str[0] == str[size - 1])
	{
		isPalindrome(str+1, size-1);
	}
	else	
	{
		return 0;
	}
	return 1;
}

int main()
{
char *str1;

scanf("%s",str1);

	if((isPalindrome(str1,strlen(str1))==1))
	{
		printf("yes\n");
	}
	else
	{
		printf("no\n");
	}
return 0;	
}
