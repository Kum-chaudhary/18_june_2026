#include<stdio.h>
#include<string.h>
void main()
{
	char name[20];
	int count;
	int i;
	printf("\n Enter your name:");
	gets(name);
	for(i=0;name[i]!='\0';i++)
	{
		count++;
	}
	printf("\n length = %d",count);
}