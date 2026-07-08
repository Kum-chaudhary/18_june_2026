#include<stdio.h>
void main()
{
	//total number sum
	int i,num;
	int sum=0;
	for(i=1;i<=5;i++)
	{
		printf("\nenter the number:");
		scanf("%d",&num);
		
		//sum of number sum+=num;
		sum+=num;	
	}
	printf("\n Total : addition = %d",sum);
}