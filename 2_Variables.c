#include <stdio.h>
int main()
{
    /*
    Variable - An allocated space in memory to store a value
    We need to declare what type of dat we are storing
    Variables are defined in 2 ways, declaration + initialization
    */

    int x;       // Declaration
    x = 5;       // initialization
    int y = 524; // Declaration + initialization

    int age = 49;
    float gpa = 6.8;
    char grade = 'A';
    char name[] = "James";

    printf("Hello, %s You are %d years old and you scored a GPA of %f, and your grade is %c", name, age, gpa, grade );
   

    return 0;
}
