/*
write a program to sort array using shell-sort algorithm
*/


#include<stdio.h>

void displayArray(int*, int);
void shellSort(int*, int);


int main()
{
	int arr[] = {47, 54, 6, 25, 88, 66, 3};
	int size = sizeof(arr)/sizeof(arr[0]);
	
	printf("Before shell-sort : ");
	displayArray(arr, size);
	
	shellSort(arr, size);
	
	printf("After shell-sort: ");
	displayArray(arr, size);

	return 0;
}



//display array elements
void displayArray(int brr[], int size)
{
	for(int i = 0; i < size; i++)
	{
		printf("%d ",brr[i]);
	}
	printf("\n");
}


//shell algorithm implementation
void shellSort(int arr[], int size)
{
	int i = 0, j = 0, ival = 0, imid = 0;		//required variabls
	
	for(imid = size/2; imid > 0; imid = imid/2)  // loop 1
	{
		for(i = imid; i < size; i++) 		// loop 2
		{
			ival = arr[i];
			
			for(j = i; j >= imid && arr[j-imid] > ival; j = j - imid)   // loop 3
			{
				arr[j] = arr[j-imid];
			}//loop 1 end			
			
			arr[j] = ival;
		}//loop 2 end
	}//loop 1 end
} //function end
