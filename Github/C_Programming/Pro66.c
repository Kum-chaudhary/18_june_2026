#include<stdio.h>
void Addition(); //function declaration
void Sub();  //function declaration
void Multiplication();  //function declaration
void Division();  //function declaration
void main()
{
   int choice;
   printf("\n Addtion");
   printf("\n Substraction");
   printf("\n Multiplication");
   printf("\n Divisiton");
   
   printf("\n Enter your choice:");
   scanf("%d",&choice);
   
   switch(choice)
   {
   	case 1:
   		Addition();//function calling
   		break;
   	case 2:
	    Sub();//function calling
		break;
	case 3:
   		Multiplication();//function calling
   		break;
	case 4:
   		Division();//function calling
   		break;
		default:
		printf("Invalid Choice");   	   		
   }
}
void Addition()//function defination
{
	int num1,num2,ans=0;
	
	printf("\nEnter the Number 1:");
	scanf("%d",&num1);
	printf("\nEnter the Number 2:");
	scanf("%d",&num2);
	ans=num1+num2;
	printf("\n Addtion %d + %d = %d",num1,num2,ans);
	
}
void Sub()//function defination
{
	int num1,num2,ans=0;
	
	printf("\nEnter the Number 1:");
	scanf("%d",&num1);
	printf("\nEnter the Number 2:");
	scanf("%d",&num2);
	ans=num1-num2;
	printf("\n Sub %d - %d = %d",num1,num2,ans);
	
}
void Multiplication()//function defination
{
	int num1,num2,ans=0;
	
	printf("\nEnter the Number 1:");
	scanf("%d",&num1);
	printf("\nEnter the Number 2:");
	scanf("%d",&num2);
	ans=num1*num2;
	printf("\n Multiplication %d * %d = %d",num1,num2,ans);
	
}
void Division()//function defination
{
	int num1,num2,ans=0;
	
	printf("\nEnter the Number 1:");
	scanf("%d",&num1);
	printf("\nEnter the Number 2:");
	scanf("%d",&num2);
	ans=num1/num2;
	printf("\n Division %d / %d = %d",num1,num2,ans);	
}