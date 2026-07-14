#include<stdio.h>
//function with parameter and function with return type
void main()
{
	int n1,n2;
	int result;
	printf("\n Enter number 1:");
	scanf("%d",&n1);
	printf("\n Enter number 2:");
	scanf("%d",&n2);
	
	result = Addition(n1,n2);
	printf("\n result = %d",result);
	result = sub(n1,n2);
	printf("\n result = %d",result);
	
}
int Addition(int num1,int num2) //function declaration
{
	int ans;
	ans =num1+num2;
    return ans;
}
int sub(int num1,int num2)
{
	int ans;
	ans =num1-num2;
    return ans;
}