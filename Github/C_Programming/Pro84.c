#include<stdio.h>
#include<conio.h>
//array of structure
// group of details using structure 

struct student
{
	int marks[5];
}s1;
void main()
{
	int i;
	for(i=0;i<5;i++)
	{
		printf("Enter marks:");
		scanf("%d",&s1.marks[i]);
	}
}
