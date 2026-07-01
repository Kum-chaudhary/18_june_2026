#include<stdio.h>
#include<conio.h>
void main()
{
	//variable declaration
	int num1, num2;
   int result = 0;

    printf("enter the number");
    scanf("%d",&num1);
    printf("enter the number");
    scanf("%d",&num2);

     result = num1 > num2 ? num1 : num2 ;
     printf("\n gretest number is %d", result);
	
	
	
	
}
