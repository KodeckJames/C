#include<stdio.h>

void printAge(int *pAge){
    printf("You are %d years old", *pAge); //dereference
}

int main(){
    //* Pointer => A varible like reference that holds a memory address to another variable, array, etc. Some tasks are performed more easily with pointers
    // * = indirectional operator (value at address)
    //* You can also pass a pointer as a param to a function

    int age = 21;
    int *pAge = &age;
    // int *pAge = NULL; //Good practice to assign NULL if declaring a pointer
    // pAge = &age;



    printf("Address of age: %p\n", pAge); //This shows the address of the given value
    printf("Address of age: %d\n", *pAge); //This extracts the value of the given address
    printf("Value of age: %d\n", age);

    printAge(pAge);

    return 0;    
}