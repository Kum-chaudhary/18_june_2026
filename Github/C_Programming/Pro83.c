#include<stdio.h>
#include<conio.h>
//array of structure
// group of details using structure 

struct student
{
	int id;
	char name[20];
};
void main()
{
	struct student s1[3]; // array of element
	int i;
	for(i=0;i<3;i++)
	{
		printf("Enter id:");
		scanf("%d",&s1[i].id);
		getchar();
		printf("\n Enter name:");
		gets(s1[i].name);
		
	}
	printf("\n----------------\n");
	for(i=0;i<3;i++)
	{
		printf("\n id : %d",s1[i].id);
		printf("\n name : %s",s1[i].name);
	}
}