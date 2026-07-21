#include<stdio.h>
#include<conio.h>
struct student
{
	int id;
	char name[20];
	int marks[5];
	
}s1[3];
void main()
{
	int student_loop,marks_loop;
	int i,j;
	
	for(student_loop = 0;student_loop<3;student_loop++)
	{
		printf("\n--------Enter student %d information -----\n",student_loop+1);
		printf("\n Enter student id:");
		scanf("%d",&s1[student_loop].id);
		
		getchar();
		printf("\n Enter student name:");
		gets(s1[student_loop].name);
		
		for(marks_loop=0;marks_loop<5;marks_loop++)
		{
			printf("\n\t\t Enter marks:");
			scanf("%d",&s1[student_loop].marks[marks_loop]);
			
		}
	}
	printf("\n --------All STUDENT DETAILS: ------\n\n");
	for(i=0;i<3;i++)
	{
		printf("\n Student Information:",i+1);
		printf("\n ID: %d",s1[i].id);
		printf("\n NAME : %s",s1[i].name);
		
		for(j=0;j<5;j++)
		{
			printf("\n Subject %d Marks %d :",j+1,s1[i].marks[j]);
		}
	}
}