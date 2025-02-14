#include<stdio.h>

void hello(char[], int); //Function prototype



int main(){
    /*
    FUNCTION PROTOTYPE
    What is it?
    It's a function declaration, without a body, before main() which ensures that calls to a function are made with the correct arguments
    Basically this is another way in which we can declare and define functions

    one way of declaring a function prototype is by declaring the function before the main function but not giving it a body then later add a body and define what the function does.

    basic syntax:
    return_type function_name(parameter_type1, parameter_type2, ...);
  
    */

    char name[] = "JJ";
    int age = 40;
    hello(name, age);
}

void hello(char name[], int age){
    printf("Hello %s, You are %d years old", name, age);
}