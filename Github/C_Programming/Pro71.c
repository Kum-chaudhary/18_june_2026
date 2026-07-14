#include<stdio.h>
int marks = 100;  //global variable declare
void display()
{
	printf("\n using num inside the function %d",marks);
}
void main()
{   
    display(); 
	printf("\n using num outside the function %d",marks);
}