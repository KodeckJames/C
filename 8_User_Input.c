#include <stdio.h>
#include <string.h>

int main()
{
    // n C, you can take user input using the scanf() function, getchar(), or gets() (though gets() is unsafe and should be avoided).

    // char name[25];
    // With character arrays, we can't change the size of the array after the program is already running, the value inside the array is the max size of the array of which if we go above that limit, it will cause a buffer overflow

    // Using the scanf function, we will read upto any whitespace. If the function has whitespace, we use the fgets() function instead of the scanf() and there are 3 params ie: name of variable, input size, stdin (meaning standard input)

    // The fgets(), function automatically adds a new character after the output and to prevent this, input this at the top of the doc: #include <string.h>

    char name[25];
    int age;
    printf("Enter tour age: ");
    scanf("%d", &age);
    printf("You are %d years old", age);
    printf("Enter your name: ");
    fgets(name, 25, stdin);
    name[strlen(name) - 1] = '\0';
    printf("You are %c and you are %d years old", name, age);
    fgets(age, 25, stdin);
}