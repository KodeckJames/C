#include<stdio.h>
#include<string.h>

int main(){
    // This technique is common in sorting algorithms
    char x[15] = "Water";
    char y[15] = "Lemonade";
    char temp[15];

    strcpy(temp, x); //Copying the contents of x to temp
    strcpy(x, y); //Copying y to x
    strcpy(y, temp); //Copying temp to y

    //NB:- When using the strcpy() function, if the length of the 2nd arg is less than the first arg, this can lead to unexpected behaviour and to solve this, we nee dto make both strings same size

    printf("x = %s\n", x);
    printf("y = %s", y);

    return 0;
}