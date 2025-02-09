#include<stdio.h>
#include<ctype.h>

int main(){
    /*
    #include <ctype.h> is a C standard library header that provides functions for character classification and conversion. It allows you to check and manipulate characters, such as determining if a character is a digit, uppercase, lowercase, or converting characters between cases.

    NB:- & means address of operator in scanf("%c", &unit)
    */

    char unit;
    float temp;
    float convtemp;

    printf("\nIs the temp in (F) or (C)? ");
    scanf("%c", &unit);

    unit = toupper(unit);

    if(unit=='C'){
        printf("\nEnter The temp in Celsius:");
        scanf("%f", &temp);
        convtemp = (temp * 9 / 5) + 32;
        printf("%f Degrees Celsius in Fahrenheit is: %.1f", temp, convtemp);
    } else if (unit=='F'){
        printf("\nEnter The temp in Fahrenheit:");
        scanf("%f", &temp);
        convtemp = ((temp - 32) * 5) / 9;
        printf("%f Fahrenheit in Degrees Celsius is: %.1f", temp, convtemp);
    } else{
        printf("%c is not a valid unit for measurement", unit);
    }

    return 0;
}