/*
enter the value:8
enter the value:7
enter the value:9
enter the value:7
enter the value:4

 sum = 35
*/
#include<stdio.h>
void main()
{
	int i=1;
	int num;
	int sum=0;
	while(i<=5)
	{
		printf("enter the value:");
        scanf("%d",&num);
        sum+=num;
        i++;
   }
       printf("\n sum = %d",sum);
}


