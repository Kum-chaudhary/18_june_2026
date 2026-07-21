#include<stdio.h>
void main()
{
	
	//array syntax : <datatype> varname[size];
	int marks[5] = {12,33,55,78,90}; // array defination
	int i;
	
	//array index always start from zero (0)
	printf("\n %d",marks[0]);
	printf("\n %d",marks[4]);
	
	for(i=0;i<5;i++)
	{
		printf("\n %d",marks[i]);
	}
}