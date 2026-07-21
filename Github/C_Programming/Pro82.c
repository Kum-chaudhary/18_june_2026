#include<stdio.h>
#include<conio.h>

// group of details using structure 

struct student
{
	int id;
	char name[20];
};
struct employee
{
	int id;
	char name[20];
};
void main()
{
	struct student s1;
	struct employee e1;
	
	printf("\n Enter student details:");
	printf("\n Enter id:");
	scanf("%d",&s1.id);
	getchar();
	printf("\n Enter name:");
	gets(s1.name);
	
	printf("\n Enter Employee details:");
	printf("\n Enter id:");
	scanf("%d",&e1.id);
	getchar();
	printf("\n Enter name:");
	gets(e1.name);	
	
	printf("\n----student details-------\n");
	printf("\n id :%d",s1.id);
	printf("\n name : %s",s1.name);
	
	printf("\n----Employee details-----\n");
	printf("\n id : %d",e1.id);
	printf("\n name : %s",e1.name);
	
}