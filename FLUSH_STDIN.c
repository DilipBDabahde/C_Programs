#include<stdio.h>
#include<stdio_ext.h>

int main()
{

	char fullname[30];
	int RollNum;
	
	printf("Enter First name: ");
	scanf("%[^ '\n']s",fullname);

	fpurge(stdin);
	
	printf("Enter rollno: ");
	scanf("%d",&RollNum);

	
	printf("My Fullname is: %s\nAnd RollNum is %d\n",fullname,RollNum);
	
	return 0;
}
