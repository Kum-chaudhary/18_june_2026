// nested structure 
#include<stdio.h>
#include<conio.h>
struct address
{
	char city[20];
	int pincode;
	char country[20];
};
struct student
{
	int id;
	char name[20];
	struct address addr;
	
};
struct Employee
{
	int id;
	char name[20];
	struct address addr;
};
void main()
{
   struct student s1;
   printf("\n Enter student details:");
   printf("\n Enter student Id:");
   scanf("%d",&s1.id);
   getchar();
   printf("\n Enter student name:");
   gets(s1.name);
   printf("\n Enter city:");
   gets(s1.addr.city);
   printf("\n Enter pincode:");
   scanf("%d",&s1.addr.pincode);
   getchar();
   printf("\n Enter country:");
   gets(s1.addr.country);
}