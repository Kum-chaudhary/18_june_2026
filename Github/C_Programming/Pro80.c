#include<stdio.h>
#include<string.h>
void main()
{
	// copy one string to another string
	char str1[20];
	char str2[20];
	
	printf("\n Enter string 1 :");
	gets(str1);
	printf("\n Enter string 2:");
	gets(str2);
	
	printf("\n s1 : %s",str1);
	printf("\n s2 : %s",str2);
	
	
	// string me old data ko new data ko copy kiya
	//strcpy(oldstring,newstring)
	strcpy(str2,str1);
	printf("\n s1 : %s",str1);
	printf("\n s2 : %s",str2);
}