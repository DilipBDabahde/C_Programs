
/*
mergeSort
*/


//header file inclusion
#include<stdio.h>


//function prototype
void mergeArr(int*, int*, int, int, int);
void mergeSort(int*, int*, int, int);
void displayArr(int*,int);

//entry point function
int main()
{
	int arr[] = { 12, 11, 13, 5, 6, 7 };
	int i = 0,  size = sizeof(arr)/sizeof(arr[0]);
	int temp[size];
			
	printf("before merge sort : ");
	displayArr(arr, size);
	
	mergeSort(arr, temp, 0, size);
	
	printf("\nafter merge sort  : ");
	displayArr(arr, size);
	
	return 0;
}

//sort array or divide array						
void mergeSort(int arr[], int temp[], int left, int right)
{
	int mid  = 0;
	
	if(right > left)
	{
		//getting mid value for array element seperation
		mid = (left + right) / 2;


		mergeSort(arr, temp, left, mid);  //part1 left to mid sort
		

		mergeSort(arr, temp, mid + 1, right); //part2 mid to right sort
		

		mergeArr(arr, temp, left, mid+1, right);		///call to merge above done operation
	}
}

//merging array after sorting 
void mergeArr(int iarr[], int itemp[], int ileft, int imid, int iright)
{
	int i = 0;
	int iend = imid - 1;
	int ipos = ileft;
	int inum = iright - ileft + 1;

	while((ileft <= iend) && (imid <= iright))
	{
		if(iarr[ileft] <= iarr[imid]) //to sort array in descending order use {'>='} sign 
		{
			itemp[ipos] = iarr[ileft];
			ipos++; 
			ileft++; 	

		}
		else
		{
			itemp[ipos] = iarr[imid];
			ipos++;
			imid++;
		}
	} //end loop

	//left to mid shifting 
	while(ileft <= iend)
	{
		itemp[ipos++] = iarr[ileft++];
	}

	//mid to right shifting
	while(imid <= iright)
	{
		itemp[ipos++] = iarr[imid++];
	}
	
	//actual sort
	for(i = 0; i <= inum; i++)
	{
		iarr[iright--] = itemp[iright];
	}	
}


//display elements of array
void displayArr(int arr[], int size)
{
	for(int i = 0; i < size; i++)
	{
		printf("%d ",arr[i]);
	}
	printf("\n");
}
