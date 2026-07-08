#include<stdio.h>
void main()
{
	// total eligible person 
	int age;
	int num;
	int eligible_counter=0;
	
	for(num=1;num<=5;num++)
	{
		printf("\n Enter Person %d age:",num);
		scanf(" %d ",&age);
		
		if(age>=18)
		{
			eligible_counter+= 1;
		}	
	}
	printf("\n total eligible : %d",eligible_counter);
	
}