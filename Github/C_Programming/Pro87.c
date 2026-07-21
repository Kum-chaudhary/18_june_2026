// pointer
#include<stdio.h>
#include<conio.h>
void main()
{
   int num = 10;
   int *ptr = &num;  //address of num variable
   printf("\n number = %d",num);
   printf("\n address = %p",num);
   
   printf("\n value of ptr: %d",*ptr);
   printf("\n address of ptr:%p",ptr);
   
}