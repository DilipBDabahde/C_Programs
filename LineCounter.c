/*
program to  display total lines count
*/
#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>

int main(int argc, char *argv[])
{

	FILE *fptr = NULL;
	int lCount = 0;
	char ch;
	
	fptr = fopen(argv[1], "r");	
	
	if(fptr == NULL)
	{
		printf("Error to opem file\n");
		return -1;
	}
	
	while((ch = fgetc(fptr)) != EOF)
	{
		if(ch == '\n')
		{
			lCount++;
		}
	}
	
	
	printf("Total lines are: %d\n",lCount);
	
	fclose(fptr); //free pointer hold adddress
	return 0;
}
