#include<stdio.h>
void main()
{
	int Month;
	printf("enter the Month:");
	scanf("%d",&Month);
	
	switch(Month)
	{
		case 1:
			 printf("january");
			 break;
		case 2:
			 printf("february");
			 break;
		case 3:
			 printf("march");
			 break;
		case 4:
			 printf("april");
			 break;	
		case 5:
			 printf("may");
			 break;	
		case 6:
			 printf("june");
			 break;
		case 7:
			 printf("jul");
			 break;	 	
		case 8:
			 printf("aguast");
			 break;	 
		case 9:
			 printf("saptember");
			 break;	
		case 10:
			 printf("octomber");
			 break;	 
		case 11:
			 printf("november");
			 break;	
		case 12:
			 printf("december");
			 break;	 	  	 
		default:
		    printf("Invalid Month");	 	 
	}
}