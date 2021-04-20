/*
program to  display total lines count
*/
#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>

int main(int argc, char *argv[])
{

	int icnt = 0, fd = 0, no = 0;
	
	if(argc != 2)
	{
		printf("invalid arguments\n");
		return -1;
	}
	
	
	fd = open(argv[1], O_RDONLY);
	if(fd == -1)
	{
		printf("Error to open file : %s\n", argv[1]);
		return -1;
	}
	
	printf("%s file opened\n",argv[1]);
	
	char ch;
	
	while(read(fd,&ch, 1) > 0)
	{
		if(ch == '\n')
		{
			icnt++;
		}
				
	}
	
	printf("Total lines are  : %d\n",icnt);
	
	close(fd);
	return 0;
}
