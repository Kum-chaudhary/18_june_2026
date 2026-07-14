#include<stdio.h>
// function with parameter and without return type
void Addition(int num1,int num2); //function declaration with parameter
void Sub(int num1,int num2);  //function declaration with parameter
void Multiplication(int num1,int num2);  //function declaration with parameter
void Division(int num1,int num2);  //function declaration with parameter
void main()
{
	int n1,n2;
	printf("Enter number 1:");
	scanf("%d",&n1);
    printf("Enter number 2:");
	scanf("%d",&n2);
	
	// function calling
	Addition(n1,n2);
	Sub(n1,n2);
	 Multiplication(n1,n2);
	 Division(n1,n2);	
}
//function defination
void Addition(int num1,int num2)
{
	int ans;
	ans =num1+num2;
	printf("\n ans = %d",ans);
}
void Sub(int num1,int num2)
{
	int ans;
	ans =num1-num2;
	printf("\n ans = %d",ans);
}
void Multiplication(int num1,int num2)
{
	int ans;
	ans =num1*num2;
	printf("\n ans = %d",ans);
}
void Division(int num1,int num2)
{
	int ans;
	ans =num1/num2;
	printf("\n ans = %d",ans);
}