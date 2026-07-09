#include<stdio.h>
void main()
{
	int marks,i;

	for(i=1;i<=5;i++)
	{
		printf("\n Enter the subject %d marks :",i);
		scanf("%d",&marks);
		
		if(marks<35)
		{
			printf("fail");
		     break;
		}
	}
}