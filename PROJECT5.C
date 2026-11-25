/*
	Name:Nikhil Shee
	Doc:27 Sep 2026
	Obj:MenuDriven Program using User Defined Functions(Project5)
*/


#include<stdio.h>
#include<conio.h>
#define PI 3.14

//finding Even_odd
void even_odd()
{

	int n;
	printf("\nEnter a number:");
	scanf("%d",&n);

	if(n%2==0)
	   printf("\n %d is even!!",n);
	else
	   printf("\n %d is odd!!",n);


}

//finding Square of a number
int square(int n)
{
	int sqr;
	sqr=n*n;

	return sqr;





}

//finding cube of a number
int cube()
{
	int n;
	int cube;
	printf("\nEnter the value of n:");
	scanf("%d",&n);
	cube=n*n*n;

	return cube;




}

//converting Celsius to Fehrenheit
void ctof(float c)
{
       float f;
       f=(c*1.8)+32;
       printf("\nThe temperature in Fehrenheit is %.2f.",f);





}

//finding max between two numbers
void max()
{
	int a;
	int b;
	printf("\nEnter number 1:");
	scanf("%d",&a);
	printf("\nEnter number 2:");
	scanf("%d",&b);
	if(a>b)
	{
		printf("\n %d is greatern than %d.",a,b);
	}
	else if(b>a)
	{
		printf("\n %d is greater than %d.",b,a);

	}
	else
	{
		printf("\n Both are Equal!!");
	}



}

//finding area of circle
float area_circle(float r)
{
	float area;
	area=PI*r*r;
	return area;


}

//finding area of rectangle
void area_rectangle()
{
	float l,b;
	float area;

	printf("\n Enter the length:");
	scanf("%f",&l);

	printf("\n Enter the width:");
	scanf("%f",&b);

	area=l*b;

	printf("\n The area of rectangle=%.2f.",area);


}

//finding area of Triangle
void area_triangle(float base,float height)
{
	float area;
	area=(base*height)/2;
	printf("\n The area of Triangle=%.2f.",area);




}

//finding simple interest
void simple_interest()
{
	float p,r,t;
	float SI;

	printf("\nEnter the principle amount:");
	scanf("%f",&p);

	printf("\nEnter the rate of interest:");
	scanf("%f",&r);

	printf("\nEnter the time period:");
	scanf("%f",&t);

	SI=(p*r*t)/100;

	printf("\nThe Simple Interest=%.2f.",SI);





}

void main()
{
	int choice,res,n;
	float c,r,res1,l,w;
	clrscr();

	do
	{
	printf("\n==========Operations using User-defined Functions===========");
	printf("\n1---Check Even or Odd");
	printf("\n2---Find square of a number");
	printf("\n3---Find Cube of a number");
	printf("\n4---Convert Celsius to Fahrenheit");
	printf("\n5---Find Maximum of two numbers");
	printf("\n6---Find area of Circle");
	printf("\n7---Find area of Rectangle");
	printf("\n8---Find area of Triangle");
	printf("\n9---Find Simple interest");
	printf("\n10--Exit");

	printf("\nEnter your choice::");
	scanf("%d",&choice);

	switch(choice)
	{
		case 1:printf("\nChecking Odd or Even");
		       even_odd();
		       break;

		case 2:printf("\nFinding the Square of a number");
		       printf("\nEnter the value of n:");
		       scanf("%d",&n);
		       res= square(n);
		       printf("\nThe square of %d is %d.",n,res);
		       break;

		case 3:printf("\nFinding the Cube of a number");
		       res=cube();
		       printf("\nThe cube of number is %d.",res);
		       break;

		case 4:printf("\nConversion of celsius to Fahrenheit");
		       printf("\nEnter the value of temperature(in C):");
		       scanf("%f",&c);
		       ctof(c);
		       break;

		case 5:printf("\nFinding Maximum of two numbers");
		       max();
		       break;

		case 6:printf("\nFinding area of Circle");
		       printf("\nEnter the radius of Circle: ");
		       scanf("%f",&r);
		       res1=area_circle(r);
		       printf("\nThe area of Circle is %.2f.",res1);
		       break;

		case 7:printf("\nFinding Area of Rectangle");
		       area_rectangle();
		       break;

		case 8:printf("\nFinding area of Triangle");
		       printf("\nEnter length of triangle:");
		       scanf("%f",&l);
		       printf("\nEnter width of Triangle:");
		       scanf("%f",&w);
		       area_triangle(l,w);
		       break;

		case 9:printf("\nFinding Simple Interest");
		       simple_interest();
		       break;

		case 10:printf("Thanks for using !!!");
			exit(0);
			break;

		default:printf("\nInvalid Choice!!");

	}

     }while(choice!=10);

  getch();
}