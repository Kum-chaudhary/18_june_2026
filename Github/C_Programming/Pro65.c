#include<stdio.h>
void checkvotting(); //function declaration
void PosNegative();  //function declaration
void main()
{
   int choice;
   printf("\n Menu");
   printf("\n press 1 for check votting");
   printf("\n press 2 for positive nagative");
   
   printf("\n Enter your choice:");
   scanf("%d",&choice);
   
   if(choice==1)
   {
   	  checkvotting();  //function calling
   }
   else if(choice==2)	
   {
   	  PosNegative();  //function calling
   }
   else
   {
   	 printf("Invalid choice");
   }
}
void checkvotting()  //function defination
{
	int age;
	printf("Enter  your age:");
	scanf("%d",&age);
	if(age >= 18)
	{
		printf("\n You are eligible for votting.");
	}
	else
	{
		printf("\n You are below 18");
	}
}
void PosNegative()  //function defination
{
	int num;
	
	printf("\n enter your number:");
	scanf("%d",&num);
	
	if(num > 0)
	{
		printf("Positive");
	}
	else
	{
		printf("Nagative");
	}
}