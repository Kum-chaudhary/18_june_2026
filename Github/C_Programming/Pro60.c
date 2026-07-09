/* skip number 3
 1
 2
 4
 5
*/
#include<stdio.h>
void main()
{
	int i;
	for(i=1;i<=5;i++)
	{
		if(i==3)
		{
			continue;
		}
		printf("\n %d",i);
	}
}