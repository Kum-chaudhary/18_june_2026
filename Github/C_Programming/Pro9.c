/*
TASK : 

take 4 variable and 
perform addition, multiplication,
subsctraction, division


*/

#include<stdio.h>
void main()
{
	//expected output 4 variable nad perform addition,multiplication,substraction,divisition
	
	//variable declaration
	int num1,num2,num3,num4,ans = 0;
	float num5,num6,num7,num8,ans1=0;
	//variable initialization
	
	num1 = 50;
	num2 = 70; 
	num3 = 34;
	num4 = 23;
 
 
   printf("\n addition");
   ans = num1 + num2 + num3 + num4;
   printf("\n %d + %d + %d + %d = %d",num1,num2,num3,num4,ans);

   printf("\n substraction");
   ans = num1 - num2 - num3 - num4;
   printf("\n %d - %d - %d - %d = %d",num1,num2,num3,num4,ans);	
   
   printf("\n multiplication");
   ans = num1 * num2 * num3 * num4;
   printf("\n %d * %d * %d * %d = %d",num1,num2,num3,num4,ans);
   
   printf("\n division");
   ans1 = num5 / num6 / num7 / num8;
   printf("\n %f / %f / %f / %f = %f",num5,num6,num7,num8);
}