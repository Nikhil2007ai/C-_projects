/*

	Name:Nikhil Shee
	Doc:19 Sep 2026
	Obj:Menu driven program on array(project-3)
*/
#include<stdio.h>
#include<conio.h>

void main()
{
	int choice,choice1,choice2,choice3;
	int s1[100],s2[100],s3[100],m1[100][100],m2[100][100],m3[100][100],m4[100][100]={0};
	int i,j,k,n,r1,r2,c1,c2,temp,search,low,high,mid,found=0,found1=0;
	float m6[100][100],s4[100];

	clrscr();

	do
	{
	 printf("\n1-----Single Dimensional Array-----");
	 printf("\n2-----Multi Dimensional Array------");
	 printf("\n3--------------Exit----------------");
	 printf("\nEnter your Choice(1-3):");
	 scanf("%d",&choice);

	 switch(choice)
	 {
		case 1:printf("\n=========Single Dimensional Array========");
		       printf("\nSelect 1 option from given options!!");
		       printf("\n1.Addition of two array");
		       printf("\n2.Subtraction of two array");
		       printf("\n3.Multiplication of two array");
		       printf("\n4.Division of two array");
		       printf("\n5.Sorting of array using Bubble Sort");
		       printf("\n6.Searching of element in array using---> ");
		       printf("\nEnter your choice(1-6):");
		       scanf("%d",&choice1);

		       if(choice1>=1&&choice1<=4)
		       {
		       printf("\n Enter the size of array:");
		       scanf("%d",&n);
		       for(i=0;i<n;i++)
		       {
				printf("\nEnter value of s1[%d]=",i);
				scanf("%d",&s1[i]);
		       }
		       for(i=0;i<n;i++)
		       {
				printf("\nEnter value of s2[%d]=",i);
				scanf("%d",&s2[i]);
		       }
		       }
		       switch(choice1)
		       {
				case 1:printf("\n========Addition==========");

				       for(i=0;i<n;i++)
				       {

						s3[i]=s1[i]+s2[i];
				       }
				       printf("\nArray after Addition----->\n");
				       for(i=0;i<n;i++)
				       {
						printf("%d\t",s3[i]);
				       }
				       break;
				case 2:printf("\n========Subtraction==========");

				       for(i=0;i<n;i++)
				       {

						s3[i]=s1[i]-s2[i];
				       }
				       printf("\nArray after Subtraction----->\n");
				       for(i=0;i<n;i++)
				       {
						printf("%d\t",s3[i]);
				       }
				       break;
				case 3:printf("\n========Multiplication==========");

				       for(i=0;i<n;i++)
				       {

						s3[i]=s1[i]*s2[i];
				       }
				       printf("\nArray after Multiplication----->\n");
				       for(i=0;i<n;i++)
				       {
						printf("%d\t",s3[i]);
				       }
				       break;
				case 4:printf("\n========Division==========");

				       for(i=0;i<n;i++)
				       {
						if(s2[i]!=0)
						{
							s4[i]=(float)s1[i]/s2[i];
						}
						else
							printf("\nDenominator can not be zero!!!");

				       }
				       printf("\nArray after Division----->\n");
				       for(i=0;i<n;i++)
				       {
						printf("%.2f\t",s4[i]);
				       }
				       break;
				 case 5:printf("\n========Bubble Sorting==========");
				       printf("\n Enter the size of array:");
				       scanf("%d",&n);
				       for(i=0;i<n;i++)
				       {
					    printf("\nEnter the value of s1[%d]=",i);
					    scanf("%d",&s1[i]);

				       }

				       for(i=0;i<n;i++)
				       {
						for(j=0;j<n-1;j++)
						{
							if(s1[j]>s1[j+1])
							{
								temp=s1[j];
								s1[j]=s1[j+1];
								s1[j+1]=temp;
							}
						}
				       }
				       printf("\nArray after Sorting----->\n");
				       for(i=0;i<n;i++)
				       {

					    printf("%d\t",s1[i]);

				       }
				       break;

				 case 6:printf("\n=========Searching of an Element========");
					printf("\nEnter any choice:");
					printf("\n1---Linear Search");
					printf("\n2---Binary Search");
					printf("\nEnter your choice(1-2):");
					scanf("%d",&choice3);

					switch(choice3)
					{
						case 1:printf("\n????Linear search????");
						       printf("\nEnter the value of n=");
						       scanf("%d",&n);

						       for(i=0;i<n;i++)
						       {
							   printf("Enter the value of s2[%d]= ",i);
							   scanf("%d",&s2[i]);
						       }

						       printf("\nEnter the Element to Search=");
						       scanf("%d",&search);

						       for(i=0;i<n;i++)
						       {
								if(s2[i]==search)
								{
									found=1;
									printf("\n Element %d found at %d.",search,i);
									break;
								}

						       }
						       if(found==0)
							  printf("\nElement not found!!!");




					break;

					case 2:printf("\n???????Binary Search??????\n");
					printf("\nEnter the value of n=");
					scanf("%d",&n);

						       for(i=0;i<n;i++)
						       {
							   printf("Enter the value of s2[%d]= ",i);
							   scanf("%d",&s2[i]);
						       }

						       printf("\nEnter the Element to Search=");
						       scanf("%d",&search);

						       low=0;
						       high=n-1;

						       while(low<=high)
						       {
							mid=(high+low)/2;
							      if(s2[mid]==search)
							      {
									printf("\nElement %d found at index %d.",search,mid);
									found=1;
									break;
								}
								else if(s2[mid]<search)
								{
									low=mid+1;
								}
								else
								{
									high=mid-1;
								}




							}


							if(found==0)
							   printf("\nElement not Found!!!");
		       break;
		       }
		       break;
		   }
		   break;
		case 2:printf("\n=========Multi Dimensional Array=========\n");
		       printf("\nSelect 1 option from given options!!");
		       printf("\n1.Addition of two array");
		       printf("\n2.Subtraction of two array");
		       printf("\n3.Multiplication of two array");
		       printf("\n4.Division of two array");
		       printf("\n5.Sorting of array using Bubble Sort");
		       printf("\n6.Searching of element in array using---> ");
		       printf("\nEnter your choice(1-6):");
		       scanf("%d",&choice2);

		       if(choice2>=1&&choice2<=4)
		       {
		       printf("\nEnter the size of row 1:");
		       scanf("%d",&r1);
		       printf("\nEnter the size of column 1:");
		       scanf("%d",&c1);
		       printf("\nEnter the size of row 2:");
		       scanf("%d",&r2);
		       printf("\nEnter the size of column 2:");
		       scanf("%d",&c2);

		       for(i=0;i<r1;i++)
		       {
				for(j=0;j<c1;j++)
				{
					printf("\n Enter the value of m1[%d][%d]=",i,j);
					scanf("%d",&m1[i][j]);

				}

		       }

		       for(i=0;i<r1;i++)
		       {
				for(j=0;j<c1;j++)
				{
					printf("\n Enter the value of m2[%d][%d]=",i,j);
					scanf("%d",&m2[i][j]);

				}

		       }
		       }
		       switch(choice2)
		       {
				case 1:printf("\n=========Addition=========\n");
				       if(r1!=r2||c1!=c2)
				       {
						printf("\nAddition not possible\n");
				       }
				       else
				       {
				       for(i=0;i<r1;i++)
				       {
						for(j=0;j<c1;j++)
						{
							m3[i][j]=m1[i][j]+m2[i][j];

						}



				       }

				       for(i=0;i<r1;i++)
				       {
						for(j=0;j<c1;j++)
						{
						       printf("%d\t",m3[i][j]);

						}


					     printf("\n");
				       }
				      }
				      break;
				case 2:printf("\n=========Subtraction=========\n");
				       if(r1!=r2||c1!=c2)
				       {
						printf("\n Subtraction not possible\n");
				       }
				       else
				       {
				       for(i=0;i<r1;i++)
				       {
						for(j=0;j<c1;j++)
						{
							m3[i][j]=m1[i][j]-m2[i][j];

						}



				       }

				       for(i=0;i<r1;i++)
				       {
						for(j=0;j<c1;j++)
						{
						       printf("%d\t",m3[i][j]);

						}


					     printf("\n");
				       }
				      }
				      break;
				case 3:printf("\n=========Multiplication=========\n");
				       if(r2!=c1)
				       {
						printf("\nMultiplication not possible\n");
				       }
				       else
				       {
				       for(i=0;i<r1;i++)
				       {
						for(j=0;j<c2;j++)
						{
							for(k=0;k<r2;k++)
							{
								m4[i][j]+=m1[i][k]*m2[k][j];
							}
						}



				       }

				       for(i=0;i<r1;i++)
				       {
						for(j=0;j<c2;j++)
						{
						       printf("%d\t",m4[i][j]);

						}


					     printf("\n");
				       }
				      }
				      break;
				case 4:printf("\n=========Division=========\n");
				       if(r1!=r2||c1!=c2)
				       {
						printf("\n Division not possible\n");
				       }
				       else
				       {
				       for(i=0;i<r1;i++)
				       {
						for(j=0;j<c1;j++)
						{
							m6[i][j]=(float)m1[i][j]/m2[i][j];

						}



				       }

				       for(i=0;i<r1;i++)
				       {
						for(j=0;j<c1;j++)
						{
						       printf("%.2f\t",m6[i][j]);

						}


					     printf("\n");
				       }
				      }
				      break;
				case 5:printf("\n========Bubble Sorting==========");
				       printf("\n Enter the size of r1:");
				       scanf("%d",&r1);
				       printf("\n Enter the size of c1:");
				       scanf("%d",&c1);
				       for(i=0;i<r1;i++)
				       {
						for(j=0;j<c1;j++)
						{
						     printf("\nEnter the value of m1[%d][%d]=",i,j);
						     scanf("%d",&m1[i][j]);
						 }

				       }

				       for(i=0;i<r1*c1-1;i++)
				       {
						for(j=0;j<r1*c1-1-i;j++)
						{
							if(m1[j/c1][j%c1]>m1[(j+1)/c1][(j+1)%c1])
							{
								temp=m1[j/c1][j%c1];
								m1[j/c1][j%c1]=m1[(j+1)/c1][(j+1)%c1];
								m1[(j+1)/c1][(j+1)%c1]=temp;
							}
						}
				       }
				       printf("\nArray after Sorting----->\n");
				       for(i=0;i<r1;i++)
				       {    for(j=0;j<c1;j++)
					    {
					     printf("%d\t",m1[i][j]);
					    }
					    printf("\n");
				       }
				       break;
				 case 6:printf("\n=========Searching of an Element========");
					printf("\nEnter the number of rows=");
					scanf("%d",&r1);
					printf("\nEnter the number of columns=");
					scanf("%d",&c1);
					for(i=0;i<r1;i++)
					{
						for(j=0;j<c1;j++)
						{

							printf("Enter the value of m2[%d][%d]=",i,j);
							scanf("%d",&m2[i][j]);
						}


					}


					printf("\n??????Linear Search???????");
					printf("\nEnter the element to search: ");
					scanf("%d",&search);

						     for(i=0;i<r1;i++)
						     {
							for(j=0;j<c1;j++)
							{
								if(m2[i][j]==search)
								{
									found1=1;
									printf("Element %d found at %d row and %d column.",search,i,j);
									break;
								 }
							}
						     }

						   if(found1==0)
						      printf("\nElement not Found!!!");
					     }

					     break;

		case 3:printf("\nxxxxxxxxxxxxxxxxxxxxExitxxxxxxxxxxxxxxxxxx");
		       exit(0);
		       break;
		default:printf("\n Invalid Choice!!Please again enter your choice (1-3)??");
		       break;
	  }

       }while(choice!=3);
     getch();
}