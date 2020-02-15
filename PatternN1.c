
#include<stdio.h>
/*
1578

8
8 7 
8 7 5
8 7 5 1

*/
void patternR2(int iNo) 
{
	if(iNo == 0)	
		return;
	int icnt = 0, icnt2= 0, itemp2 = 0,itemp = iNo;
	
	while(iNo != 0)
	{
		icnt++;
		
		icnt2 = icnt;
		itemp2 = itemp;
		while(icnt2 != 0)
		{
			printf("%d ",itemp2%10);
			itemp2 /= 10;
			icnt2--;
		}
		icnt2 = 0;
		printf("\n");
		iNo = iNo/10;
	}	
}



int main()
{
	int irow = 0;
	printf("Enter a num: ");
	scanf("%d",&irow);
	patternR2(irow);

	return 0;
}
