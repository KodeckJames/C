#include<stdio.h>
#include<string.h>

int main(){
    char string1[] = "cub";
    char string2[] = "Ondix";

    //strlwr(string1); //Converts a string to lowercase
    //strupr(string2); //Converts string to upercase
    //strcat(string1, string2); //appends string2 at the end of string1
    //strncat(string1, string2, 2); //appends n characters from string2 to string1
    //strcpy(string1, string2); //copy string2 to string1
    //strncpy(string1, string2, 3); //copy n characters of string2 to string1
    //strset(string1, '?'); //sets all characters of a string to a given character
    //strnset(string1, 'p', 2); //sets first n characters of a string to a given character
    //strrev(string1); //reverses a string
    //int result = strlen(string1); // returns string length as int
    //int result = strcmp(string1, string2); //string compare all characters. If they're the same, it returns 0 but if not the same, it returns another number other than 0.
    //int result = strncmp(string1, string2, 2); //String compare n characters
    //int result = strcmpi(string1, string2); //String compare all (ignore case sensitivity)
    int result = strncmpi(string1, string2); //String compare all (ignore case sensitivity)


    printf("%d", result);
    return 0;
}