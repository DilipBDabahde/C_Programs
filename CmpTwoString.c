#include<stdio.h>

typedef int BOOL;
#define TRUE 1
#define FALSE 0

BOOL strcmpx(const char *str1, const char *str2)
{
	if(str1 == NULL || str2 == NULL)
	{
		return FALSE;
	}
	
	while(*str1 != '\0' && *str2 != '\0')
	{
		if(*str1 != *str2)
		{
			if(*str1 >='A' && *str1<='Z')
			{
				if(*str1 !=(*str2-32))
				{
					break;
				}
			}
			else if(*str1 >='a' && *str1 <='z')
			{
				if(*str1 != (*str2 + 32))
				{
					break;
				}
			}
			else
			{
				break;
			}			
		}
		
		str1++;
		str2++;
	}
	
	if(*str1 == '\0' && *str2 == '\0')
	{
		return TRUE;
	}
	else
	{
		return FALSE;
	}
}

int main()
{
	char arr1[22] = "AbcD";
	char arr2[22] = "ABCD";
	
	BOOL res = strcmpx(arr1, arr2);
	
	if(res == TRUE)
	{
		printf("Both are same\n");
	}
	else
	{
		printf("Both are not same\n");
	}

 return 0;
}
