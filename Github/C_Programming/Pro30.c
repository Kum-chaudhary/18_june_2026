#include<stdio.h>
#include<string.h>
void main()
{
   char db_email[20] = "kumkum@gmail.com";
   char db_password[20] = "123456";
   char username[20] = "Kumkum";
   
   char email[20],password[20];  //variable declaration
   
   printf("enter the email id:");
   gets(email);
   
   printf("enter password");
   	 gets(password);
   
   if(strcmp(db_email,email)==0)
   {
   	 if(strcmp(db_password,password)==0)
   	 {
   	 	printf("welcome %s",username);
	 }
	else
	{
		printf("invalid password");
	}
   }
   else
   {
   	printf("invalid email -- user are not exist");
   }	
}