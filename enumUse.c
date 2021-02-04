#include<stdio.h>

enum days
{
	Sunday,
	Monday,
	TuesDay,
	WednsDay,
	Thursday,
	Friday,
	Saturday
}; //end of enumeration

/* 
enum days  : is data type as like
struct node

now create variable/object of this data type
to access members 
*/





int main()
{
	
	enum days obj1;
	
	printf("size of obj1 is: %ld\n",sizeof(obj1));
	
	for(int i = Friday;  i <= Saturday; i++)
	{
		printf("%d ",i);
	}


	return 0;
}
