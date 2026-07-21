#include<stdio.h>
#include<string.h>
void main()
{
	//find length of string
	char name[20];    // string :  is a charcter of array
	printf("\n Enter your name : ");
	gets(name);
	printf("\n length = %d",strlen(name));
}