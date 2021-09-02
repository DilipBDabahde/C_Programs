

#include<stdio.h>


void print_array(int arr[], int n) 
{  
	  for (int i = 0; i < n; i++)
	  {
	    printf("%d ", arr[i]);
	  }
	  printf("\n");
}

void swap(int *a, int *b) 
{
 	 int t = *a;
	  *a = *b;
  	*b = t;
}

// This function has a complexity of O(logn).
void max_heapify(int arr[], int n, int i) 
{

	int ilarge = i;
	int ileft  = 2*i + 1;
	int iright = 2*i + 2;


	if (ileft < n && arr[ilarge] < arr[ileft])
	{ 
    		ilarge = ileft;
	}  
	
	if(iright < n && arr[ilarge] < arr[iright])
    	{
    		ilarge = iright;
    	}

  	if(ilarge != i)
  	{
		swap(&arr[i], &arr[ilarge]);
		max_heapify(arr, n, ilarge);
	}
}

int main() 
{
	  int i = 0;
	  int n = 0;
	  int a[] = {5, 99, 25, 3, 46, 10};
	  n = sizeof(a)/sizeof(a[0]);
	  
	  print_array(a, n);
	 
	  //make heap
	  for (i = n/2; i >= 0; i--) 
	  {
	    max_heapify(a, n, i);
	  }
	 

	  //heap sort 
	  for (i = n - 1; i >= 0; i--) 
	  {
	    swap(&a[0], &a[i]);
	    max_heapify(a, i, 0);
	  }
	  
	  print_array(a, n);
	  
	  return 0;
}
