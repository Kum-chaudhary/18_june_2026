#include<stdio.h>
void main()
{
	int score;
	printf("enter the score:");
	scanf("%d",&score);
	
	if(score >= 70)
	{
		printf("A Grade");
	}
	else if(score >= 60 && score < 70)
	{
		printf("B grade");
	}
	else if(score >= 50 && score < 60)
	{
		printf("C grade");
	}
	else if(score >=40 && score < 50)
	{
		printf("D grade");
	}
	else{
		printf("You are fail");
	}
}