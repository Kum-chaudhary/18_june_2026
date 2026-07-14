#include<stdio.h>
//function without parameter and function with return type.
void main()
{
	int n1,n2;
	int result;
	// function calling
	result= Addition(n1,n2);
	printf("\n result = %d",result);
}
int Addition()//function defination
{
	int num1,num2,ans=0;
	
	printf("\nEnter the Number 1:");
	scanf("%d",&num1);
	printf("\nEnter the Number 2:");
	scanf("%d",&num2);
	ans=num1+num2;
	return ans;
	
}