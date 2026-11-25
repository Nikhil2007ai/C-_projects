/*
	Developed by:Nikhil Shee
	Doc:13 Aug 2026
	Obj:Menudriven program of operation of single and multi dimension array
*/
#include<stdio.h>
#include<conio.h>
#define SIZE 3
void main()
{  //start of main
    int choice,choice1,choice2;
    int i,j;
    int x[SIZE],y[SIZE],z[SIZE]; //for single dimension
    int a[SIZE][SIZE],b[SIZE][SIZE],c[SIZE][SIZE]; //for multi dimension
    do
    {
    clrscr();
    printf("**********Project 2*************\n");

    printf("\n1----Single Dimensional array");
    printf("\n2----Multi Dimensional array");
    printf("\n3----Exit");
    printf("\n Enter your choice::");
    scanf("%d",&choice);

    switch(choice)
    {   //start of outer switch case
	case 1:printf("\n-----Single Dimension Array------");
	       for(i=0;i<3;i++)
	       {
	       printf("\nEnter Element for index x[%d]=",i);
	       scanf("%d",&x[i]);
	       }
	       for(i=0;i<3;i++)
	       {
	       printf("\nEnter Element for index y[%d]=",i);
	       scanf("%d",&y[i]);
	       }
	       do
	       {
	       printf("\n1---Addition");
	       printf("\n2---Subtraction");
	       printf("\n3---Multiplication");
	       printf("\n4---Division");
	       printf("\n5---Exit");
	       printf("\n Enter your choice::");
	       scanf("%d",&choice1);
	       switch(choice1)
	       {  //start of inner switch case
			case 1:printf("\n------Addition------\n");
				for(i=0;i<SIZE;i++)
				{
				z[i]=x[i]+y[i];

				}
				for(i=0;i<SIZE;i++)
				{
				printf("%d+%d=%d\t\t",x[i],y[i],z[i]);

				}
				break;
			case 2:printf("\n------Subtraction------\n");
				for(i=0;i<SIZE;i++)
				{
					z[i]=x[i]-y[i];

				}
				for(i=0;i<SIZE;i++)
				{
					printf("%d-%d=%d\t\t",x[i],y[i],z[i]);

				}
				break;
			case 3:printf("\n------Multiplication------\n");
				for(i=0;i<SIZE;i++)
				{
					z[i]=x[i]*y[i];

				}
				for(i=0;i<SIZE;i++)
				{
					printf("%d*%d=%d\t\t",x[i],y[i],z[i]);

				}
				break;
			case 4: printf("\n------Division------\n");
				for(i=0;i<SIZE;i++)
				{
					z[i]=x[i]/y[i];

				}
				for(i=0;i<SIZE;i++)
				{
					printf("%d/%d\t\t",x[i],y[i],z[i]);

				}
				break;
			case 5:printf("\n Returning to outer loop>>");
				break;

	       }  // end of inner switch case
	       }while(choice1!=5);
	       break;
	case 2:printf("\n-----Multi Dimension Array-------");
	       for(i=0;i<3;i++)
	       {
			for(j=0;j<3;j++)
			{
				printf("\n Enter Element for index a[%d][%d]=",i,j);
				scanf("%d",&a[i][j]);
			}
	       }
	       for(i=0;i<3;i++)
	       {
			for(j=0;j<3;j++)
			{
				printf("\n Enter Element for index b[%d][%d]=",i,j);
				scanf("%d",&b[i][j]);
			}
	       }
	       do
	       {
	       printf("\n1------Addition");
	       printf("\n2------Subtraction");
	       printf("\n3------Multiplication");
	       printf("\n4------Division");
	       printf("\n5------Exit");
	       printf("\n Enter your Choice:");
	       scanf("%d",&choice2);
	       switch(choice2)
	       {  //start of inner switch case
		case 1:printf("-----For Addition-----\n");
		       for(i=0;i<SIZE;i++)
		       {
				for(j=0;j<SIZE;j++)
				{
					c[i][j]=a[i][j]+b[i][j];

				}

		       }
		       for(i=0;i<SIZE;i++)
		       {
				for(j=0;j<SIZE;j++)
				{
					printf("%d+%d=%d\t\t",a[i][j],b[i][j],c[i][j]);
				}
				printf("\n");

		       }
		       break;
		case 2:printf("-----For Subtraction-----\n");
		       for(i=0;i<SIZE;i++)
		       {
				for(j=0;j<SIZE;j++)
				{
					c[i][j]=a[i][j]-b[i][j];

				}

		       }
		       for(i=0;i<SIZE;i++)
		       {
				for(j=0;j<SIZE;j++)
				{
					printf("%d-%d=%d\t\t",a[i][j],b[i][j],c[i][j]);
				}
				printf("\n");

		       }
		       break;
		case 3:printf("-----For Multiplication-----\n");
		       for(i=0;i<SIZE;i++)
		       {
				for(j=0;j<SIZE;j++)
				{
					c[i][j]=a[i][j]*b[i][j];

				}

		       }
		       for(i=0;i<SIZE;i++)
		       {
				for(j=0;j<SIZE;j++)
				{
					printf("%d*%d=%d\t\t",a[i][j],b[i][j],c[i][j]);
				}
				printf("\n");

		       }
		       break;
		case 4:printf("-----For Division-----\n");
		       for(i=0;i<SIZE;i++)
		       {
				for(j=0;j<SIZE;j++)
				{
					c[i][j]=a[i][j]/b[i][j];

				}

		       }
		       for(i=0;i<SIZE;i++)
		       {
				for(j=0;j<SIZE;j++)
				{
					printf("%d/%d=%d\t\t",a[i][j],b[i][j],c[i][j]);
				}
				printf("\n");

		       }
		       break;
		case 5:printf("\n Returning to outer loop>>");
		       break;
	       }//end of inner switch case
	       }while(choice2!=5);
	       break;
	case 3:exit(0);
	       break;
	default:printf("\n Invalid Choice");
	 }//end of outer switch case

	}while(choice!=3);
	getch();
} //end of main