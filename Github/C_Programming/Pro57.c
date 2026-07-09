/*
Enter a number: 5

 Do you want to continue ? press '1' for yes and press '0' for no: 1
Enter a number: 8

 Do you want to continue ? press '1' for yes and press '0' for no:0
Game Over
*/
#include<stdio.h>
void main()
{
	int num,status;  // declaration
	status = 1; //variable initialization
	
	while(status==1) //condition
	{
		printf("Enter a number:");
		scanf("%d",&num);
		
		printf("\n Do you want to continue ? press '1' for yes and press '0' for no:");
		scanf("%d",&status);  //updation
	}
	  printf("Game Over");
}