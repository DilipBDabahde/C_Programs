/*diff between return and exit

	in main function we call first fun meethod which execute properly after that control goees to main
	later we call to gun method and it execute properly and terminate the program



*/
#include<stdio.h>
#include<stdlib.h>


void fun()
{
	int i = 0;
	for(i = 1; i < 6; i++)
	{
		printf("%d ",i);
	}
	
	if(i == 6)
	{
		return;			//<<<<<<<<<<<< return
	}
}

void gun()
{
	int i = 0;
	for(i = 1; i < 6; i++)
	{
		printf("%d ",i);
	}
	
	if(i == 6)
	{
		exit(0);	//<<<<<<<<<<< exit it will terminate process and do not go back to main method
	}
}

int main()
{
	printf("Before fun\n");
	fun();
	printf("\nafter fun\n");
	
	printf("Before gun\n");
	gun();
	printf("after gun\n"); // this line will not be displayed bcs control goes out from gun when exit fun gets call
	
	
	return 0;

}
