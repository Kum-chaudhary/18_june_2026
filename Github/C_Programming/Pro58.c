/*
Enter the number:5

 Do you want to continue ? press 'y' for yes and press 'n' for noEnter the number:y

 Do you want to continue ? press 'y' for yes and press 'n' for noEnter the number:6

 Do you want to continue ? press 'y' for yes and press 'n' for noEnter the number:n

 Do you want to continue ? press 'y' for yes and press 'n' for no
*/

#include<stdio.h>
#include<stdbool.h>
#include<conio.h>
void main()
{

	int num;
	bool status =true;
	char choice;
	
	
	while(status)
	{
		printf("Enter the number:");
		scanf("%d",&num);
		getchar(); //to clear buffer
		printf("\n Do you want to continue ? press 'y' for yes and press 'n' for no");
		scanf("%c",&choice);
		
		if(choice =='n')
	    {
		status = false;
	    }
	}
	
}