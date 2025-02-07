#include <stdio.h>

int main(){

    /*
    Purpose of return 0; in main()
    main() is the entry point of a C program.
    When return 0; is used, it signals to the operating system that the program has executed successfully.
    Returning non-zero values (like return 1;) typically indicates an error.


    Why Can the Program Run Without return 0 statement?
    In modern C standards (C99 and later), if main() does not explicitly return a value, the compiler implicitly returns 0.
    This is because main() is expected to return an int, and if you don't specify a return value, the compiler assumes return 0; by default.
    
     */

    printf("I like Pizza\n");
    printf("It's really good");
    return 0;
}