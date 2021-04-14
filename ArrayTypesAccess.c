
#include<stdio.h>

int main()
{

	int arr[] = {12, 43, 90, 43, 121};
	
	int iHold = 0;
	
	//way 1
	iHold = arr[2];  //assing index wise value
	printf("value is: %d\n",iHold);
	iHold = 0;
	
	//way 2
	iHold = *(arr+2);  //100 + 2 * datatype size  || 100+(2*4) which is 108 address
	printf("value is: %d\n",iHold);
	iHold = 0;
	
	
	//way 3
	iHold = *(2+arr);  //2*datatype size + base address total is 108 assgin value of 108 address
	printf("value is: %d\n",iHold);
	iHold = 0;
		
	
	//way 4
	iHold = 2[arr];  //comand to assign 2 index value to iHold
	printf("value is: %d\n",iHold);
	iHold = 0;
	
	
	
	return 0;


}
