/* goto
enter the age:12
you can't watch movie.
 you are below 18 right now.
 
 // enter the age:45
 welcome to moviearea
*/
#include<stdio.h>
int main()
{
	int age;
	printf("\nenter the age:");
	scanf("%d",&age);
	
	if(age>=18)
	{
		goto moviearea;
	}
		printf("\nyou can't watch movie.");
		printf("\n you are below 18 right now.");
		return 0;
		moviearea:
			printf("\n welcome to moviearea");
	return 0;
}