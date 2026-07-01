#include <stdio.h>

int main() {
    int num1=10;
    char choice='A';

    printf("\n num1 = %d", num1);
    printf("\n size of num1 or int : %d",sizeof(num1));
    printf("\n size of int: %d", sizeof(int));
    printf("\n size of float: %d",sizeof(float));
    printf("\n size of double: %d",sizeof(double));
    printf("\n size of character: %d",sizeof(char));

    return 0;
}