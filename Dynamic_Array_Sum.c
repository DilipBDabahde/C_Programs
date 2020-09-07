//accept array size from user and allocate memory for that size dynamicall after allocation of memeory initialize it 
//and make addition of all element and display that addtion into main without return

#include<stdio.h>
#include<stdlib.h>


void Addition(int arr[], int size, int *res)
{
	
	if(arr == NULL || size <= 0)
	{
		return;
	}
	
	for(int i = 0 ; i< size; i++)
	{
		*res += arr[i];
	}
}

int main()
{
	int size = 0;
	int *ptr = NULL;
	int iResult = 0;
	
	
	printf("Enter size: ");	
	scanf("%d",&size);
	
	ptr = (int*)malloc(sizeof(int)*size);
	
	if(ptr == NULL)
	{
		printf("There is not space\n");
		return -1;
	}
	
	printf("Enter element for array: \n");
	for(int i = 0 ; i < size; i++)
	{
		printf("Enter element: ");
		scanf("%d",&ptr[i]);
	}
	
	Addition(ptr, size, &iResult); 
	
	printf("Addition of all Element is: %d\n",iResult);
	
	free(ptr);
	
	return 0;
}
