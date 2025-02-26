#include<stdio.h>

int main(){
    // memory = An array of bytes within RAM (street)
    // memory block = a single unit (byte) within memory, used to hold some value (person)
    //Memory address = The address of where a memory block is.It's format specifier is p
    //Analogy => Fancy memory as a street with houses, the houses are the memory blocks, and the memory addresses as the adresses of each house

    char a = 'X';
    char b = 'Y';
    char c = 'Z';

    printf("%d bytes\n", sizeof(a));
    printf("%d bytes\n", sizeof(b));
    printf("%d bytes\n", sizeof(c));

    printf("%p\n", &a);
    printf("%p\n", &b);
    printf("%p\n", &c);
}