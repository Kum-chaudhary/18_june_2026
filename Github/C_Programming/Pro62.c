/*

 Enter the marks: 45
 Enter the marks: 78
 Enter the marks: 96
 Enter the marks: 33
 you are fail in this subject.
 Enter the marks:45
*/
#include<stdio.h>
void main()
{
	int marks,i;
	for(i=1;i<=5;i++)
	{
		printf("\n Enter the marks:");
		scanf("%d",&marks);
		
		if(marks<35)
		{
			printf("you are fail in this subject.");
			continue;
		}
	}
}