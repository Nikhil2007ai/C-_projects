/*
	Name:Nikhil Shee
	DOC:4/8/2026
	Obj:Menudriven Program(Project 1)
*/
#include<stdio.h>
#include<conio.h>
void main()
{
	int choice,choice1,choice2,choice3;
	int n,i,j,row;
	char ch1='a';
	char ch2='A';
	char c;
	clrscr();
	do
	{
	printf("\n-----Project 1-------\n");
	printf("\n 1----Using For Loop");
	printf("\n 2----Using While Loop");
	printf("\n 3----Using Do While Loop");
	printf("\n 4----Exit");
	printf("\n Enter Your Choice::");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1:printf("\n You have Chosen Using For Loop>>>\n");
		       printf("\n 1.Print Small a....z");
		       printf("\n 2.Print Capital A...Z");
		       printf("\n 3.Print Normal Triangle");
		       printf("\n 4.Print Reverse Triangle");
		       printf("\n Enter Your Choice::");
		       scanf("%d",&choice1);
		       switch(choice1)
		       {
				case 1:printf("\n----Small a....z-----");
				       printf("\n Enter number of lines you want::");
				       scanf("%d",&n);
				       clrscr();
				       for(i=0;i<n;i++)
				       {
						for(j=0;j<26;j++)
						{
							gotoxy(i+1,j+1);
							sound(i*50);
							delay(5);
							nosound();
							textcolor(i+j);
							cprintf("%c",ch1+j);
						}
				       }
				       break;
				case 2:printf("\n----Capital A...Z-----");
				       printf("\n Enter number of lines you want::");
				       scanf("%d",&n);
				       clrscr();
				       for(i=0;i<n;i++)
				       {
						for(j=0;j<26;j++)
						{
							gotoxy(i+1,j+1);
							sound(i*50);
							delay(5);
							nosound();
							textcolor(i+j);
							cprintf("%c",ch2+j);
						}

				       }
				       break;
				case 3:printf("\n----Normal Triangle----");
				       printf("\nEnter number of rows::");
				       scanf("%d",&row);
				       printf("\nEnter the Character you want to Generate::");
				       scanf(" %c",&c);
				       for(i=1;i<=row;i++)
				       {
						for(j=1;j<=i;j++)
						{
							textcolor(i);
							cprintf("%c",c);

						}
						printf("\n");
				       }
				       break;
				case 4:printf("\n----Reverse Triangle----");
				       printf("\nEnter number of rows::");
				       scanf("%d",&row);
				       printf("\nEnter the Character you want to Generate::");
				       scanf(" %c",&c);
				       for(i=row;i>=1;i--)
				       {
						for(j=1;j<=i;j++)
						{
							textcolor(i);
							cprintf("%c",c);

						}
						printf("\n");
				       }
				       break;
			}
		       break;
		case 2:printf("\n You Have Chosen Using While Loop>>>\n");
		       printf("\n 1.Print Small a....z");
		       printf("\n 2.Print Capital A...Z");
		       printf("\n 3.Print Normal Triangle");
		       printf("\n 4.Print Reverse Triangle");
		       printf("\n Enter Your Choice::");
		       scanf("%d",&choice2);
		       switch(choice2)
		       {
				case 1:printf("\n----Small a....z-----");
				       printf("\n Enter number of lines you want::");
				       scanf("%d",&n);
				       clrscr();
				       i=0;
				       while(i<n)
				       {
						j=0;
						while(j<26)
						{
							gotoxy(i+1,j+1);
							sound(i*90);
							delay(5);
							nosound();
							textcolor(i+j);
							cprintf("%c",ch1+j);
							j++;
						}
					       i++;
				       }
				       break;
				case 2:printf("\n----Capital A...Z-----");
				       printf("\n Enter number of lines you want::");
				       scanf("%d",&n);
				       clrscr();
				       i=0;
				       while(i<n)
				       {
						j=0;
						while(j<26)
						{
							gotoxy(i+1,j+1);
							sound(i*90);
							delay(5);
							nosound();
							textcolor(i+j);
							cprintf("%c",ch2+j);
							j++;
						}
					       i++;
				       }
				       break;
				case 3:printf("\n----Normal Triangle----");
				       printf("\nEnter number of rows::");
				       scanf("%d",&row);
				       printf("\nEnter the Character you want to Generate::");
				       scanf(" %c",&c);
				       i=1;
				       while(i<=row)
				       {
						j=1;
						while(j<=i)
						{
							textcolor(i);
							cprintf("%c",c);
							j++;

						}
						printf("\n");
						i++;
				       }
				       break;
				case 4:printf("\n----Reverse Triangle----");
				       printf("\nEnter number of rows::");
				       scanf("%d",&row);
				       printf("\nEnter the Character you want to Generate::");
				       scanf(" %c",&c);
				       i=row;
				       while(i>=1)
				       {
						j=1;
						while(j<=i)
						{
							textcolor(i);
							cprintf("%c",c);
							j++;

						}
						printf("\n");
						i--;
				       }
				       break;
		       }
		       break;
		case 3:printf("\n You Have Chosen Using Do While Loop>>>\n");
		       printf("\n 1.Print Small a....z");
		       printf("\n 2.Print Capital A...Z");
		       printf("\n 3.Print Normal Triangle");
		       printf("\n 4.Print Reverse Triangle");
		       printf("\n Enter Your Choice::");
		       scanf("%d",&choice3);
		       switch(choice3)
		       {
				case 1:printf("\n----Small a....z-----");
				       printf("\n Enter number of lines you want::");
				       scanf("%d",&n);
				       clrscr();
				       i=0;
				       do
				       {
						j=0;
						do
						{
							gotoxy(i+1,j+1);
							sound(i*90);
							delay(5);
							nosound();
							textcolor(i+j);
							cprintf("%c",ch1+j);
							j++;
						}while(j<26);



					i++;
				       }while(i<n);
				       break;
			       case 2:printf("\n----Capital A...Z-----");
				      printf("\n Enter number of lines you want::");
				      scanf("%d",&n);
				      clrscr();
				      i=0;
				      do
				      {
						j=0;
						do
						{
							gotoxy(i+1,j+1);
							sound(i*90);
							delay(5);
							nosound();
							textcolor(i+j);
							cprintf("%c",ch2+j);
							j++;
						}while(j<26);



					i++;
				       }while(i<n);
				       break;
			       case 3:printf("\n----Normal Triangle----");
				      printf("\nEnter number of rows::");
				      scanf("%d",&row);
				      printf("\nEnter the Character you want to Generate::");
				      scanf(" %c",&c);
				      i=1;
				      do
				      {
						j=1;
						do
						{
							textcolor(i);
							cprintf("%c",c);
							j++;

						}while(j<=i);
						printf("\n");
						i++;
				       }while(i<=row);
				       break;
			       case 4:printf("\n----Reverse Triangle----");
				      printf("\nEnter number of rows::");
				      scanf("%d",&row);
				      printf("\nEnter the Character you want to Generate::");
				      scanf(" %c",&c);
				      i=row;
				      do
				      {
						j=1;
						do
						{
							textcolor(i);
							cprintf("%c",c);
							j++;

						}while(j<=i);
						printf("\n");
						i--;
				       }while(i>=1);
				      break;
		       }
		       break;
		case 4:exit(0);
		       break;
		default:printf("\n Invalid Choice>>>");
	 }
	 }while(choice!=4);
 getch();
}