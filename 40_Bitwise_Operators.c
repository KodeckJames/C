#include<stdio.h>

int main(){
    //Bitwise Operators => Special operators used in bit level programming 

    /*
        & - AND
        | - OR
        ^ - XOR
        << - left shift
        >> - right shift    
    */

    int x = 6; //  00000110
    int y = 12; // 00001100
    int z = 0; //  00001110

    z = x & y;
    printf("AND = %d\n", z);

    z = x | y;
    printf("OR = %d\n", z);

    z = x ^ 1;
    printf("XOR = %d\n", z);

    z = x << 1;
    printf("Left shift = %d\n", z);

    z = x >> 1;
    printf("Right shift = %d\n", z);

    return 0;
}