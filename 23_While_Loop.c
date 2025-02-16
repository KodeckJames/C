#include <stdio.h>
#include <string.h>

int main(){
    // A while loop repeats a sectionof code possibly unlimited times
    // While some condition is true
    // A while loop might not execute at all depending on what our condition is
    // Params in the while loop braces => 1.Condition 2

    char name[25];

    printf("What's your name?: ");
    fgets(name, 25, stdin);
    name[strlen(name) - 1] = '\0';

    while (strlen(name) == 0)
    {
        printf("You did not enter a name!!!");
        printf("\nWhat's your name?: ");
        fgets(name, 25, stdin);
        name[strlen(name) - 1] = '\0';
    }
    

    printf("Hello, %s", name);

    return 0;
}