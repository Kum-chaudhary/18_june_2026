#include<stdio.h>
#include<string.h>
void main()
{
	char name[20] = "Admin";
	char username[20];
	
	printf("enter the username");
	scanf("%s",&username);
	
	if(strcmp(name,username)==0)
	{
		printf("welcome to system");
	}
	else{
		printf("invalid username");
	}
}