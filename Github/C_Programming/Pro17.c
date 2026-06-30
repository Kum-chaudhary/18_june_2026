/*
Expected output : 

hi, _______ your subject is ___________ and your score is _________ .

you are _____ years old now. 

Do you want to continue ? press 'y' for yes and press 'n' for no
and your choice is : _________ . 



*/

#include<stdio.h>
#include<conio.h>
void main()
{
	//variable declaration
	char name[10];
	char subject[20];
	int score;
	int age;
	int choice;
	
	//accept from user variable initialization
	
	printf("\n Enter your name");
	scanf("%s", &name);
	printf("\n Enter subject :");
	scanf("%s",&subject);
    getchar();
	printf("\n Enter your score:");
	scanf("\n %d", &score);
	printf("\n Enter your age:");
	scanf("\n %d",&age);
	
     printf("do you want to continue ? press 'y' for yes and 'n' for no:");
     scanf("%d",&choice);
     printf("\n Hi, %s your subject is %s. \n",name,subject,score);
     printf("\n you are %d years old now %d. \n",age);
     printf("\n And your choice is: %d. \n",choice);     
}