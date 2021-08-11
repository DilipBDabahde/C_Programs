/*
Write C program to find out 
area of circle, 
perimeter of circle, 
area of rectangle,
area of triangle, 
perimeter of triangle.
*/

#include<stdio.h>


//global vars defined
char line[] = "---------------------------------------------\n";
float radius = 0.f, area = 0.f, perimeter = 0.f, side1 = 0.f, side2 = 0.f;
float pi = 3.14, width = 0.f, height = 0.f, base = 0.f;



//to calculate area of circle we have to multiply pi value with radius^2
//Formula A=πr2=π·52≈78.53982
void areaOfCircle()
{
	printf("Enter the radius of Circle :");
	scanf("%f",&radius);
	area = pi * radius * radius;
	printf("Area of circle is : %f\n",area);
	
	area = radius = 0;
}




//to calculate perimeter of circle we have to multiply 2*pi*radius
//formula : C=2πr=2·π·5≈31.41593
void perimeterOfCircle()
{
	printf("Enter the radium of Circle :");
	scanf("%f",&radius);
	perimeter = 2 * pi * radius;		//2 value for : (length + width)
	printf("Perimeter of circle is: %f\n", perimeter);
	
	perimeter = radius = 0;
}




//accept Height and width from user and multyply them as result of rectangle area
//formula : A=w.l
void areaOfRectangle()
{
	printf("Enter Heaight of Rectange :");
	scanf("%f",&height);
	
	printf("Enter Width of Rectangle: ");
	scanf("%f",&width);
	area = height * width;
	printf("Area of reactable is : %f\n",area);
	
	area = width = height = 0;
}




//accept base value and height perform 2*h*b
//formula : A=hbb
void areaOfTriangle()
{
	printf("Enter Base Value :");
	scanf("%f",&height);
	
	printf("Enter Height : ");
	scanf("%f",&width);
	
	area = (height * width) / 2;    // 2 is count of height and width
	printf("area of triangle si : %f\n",area);
	
	area = width = height = 0;
}




//acceept 3 values from triangle from user and use formula : P = a+b+c   ---------> 	7+5+9=21
void perimeterOfTriangle()
{
	Ltoll:
	printf("Enter triangle base value: ");
	scanf("%f",&base);
	
	printf("Enter triangle left-size value: ");
	scanf("%f",&side1);
	
	printf("Enter triabgle right-side value: ");
	scanf("%f",&side2);
	
	if( (side1+side2)> base &&  (side1 + base) > side2 && (side2+base) > side1)
	{
		perimeter = base + side1 + side2;
		printf("Perimeter of triangle is : %f\n",perimeter);
	}
	else
	{
		printf("invaid input:try again with diff values\n");	
		goto Ltoll;
	}
	
	perimeter = base = side1 = side2 = 0;
}


//entry point function 
int main()
{
	int iSet = 0;
	printf("\n||~~Enter choice for following operation ~~||\n");
	printf("\tEnter [1] for area of circle\n");
	printf("\tEnter [2] for perimeter of circle\n");
	printf("\tEnter [3] for area of rectangle\n");
	printf("\tEnter [4] for area of triangle\n");
	printf("\tEnter [5] for perimeter of triangle\n");
	printf("%s\n",line);
	printf("\t");
	
	Toll:				//label created for goto jumb
	scanf("%d",&iSet);
	
	if(iSet < 1 || iSet > 5)
	{
		printf("\tinvalid input\n");
		printf("\tEnter again : ");
		goto Toll;	
	}
		
	
	//function calls
	switch(iSet)
	{
		case 1:
		areaOfCircle();
		break;
		
		case 2:
		perimeterOfCircle();
		break;
		
		case 3:
		areaOfRectangle();
		break;
		
		case 4:
		areaOfTriangle();
		break;
		
		case 5:
		perimeterOfTriangle();
		break;		
	}

	return 0;
}

