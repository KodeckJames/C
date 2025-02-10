#include<stdio.h>
#include<math.h>
#include<ctype.h>

int main(){

    /*
    scanf("%f", &num1); reads the floating-point number but leaves the newline (\n) in the buffer.

    scanf("%c", &sign_operator); then reads that leftover newline instead of waiting for a new character input.

    The simplest solution is to add a space before %c in scanf() to skip any whitespace characters (including \n).

    This tells scanf to ignore any leading whitespace (including the leftover newline).

    Another approach is to manually consume the newline before reading sign_operator:

    This removes the unwanted newline before scanf("%c", &sign_operator); runs.

    If you're reading only one character, you can use getchar() instead of scanf():

    printf("\nEnter the sign operator: ");
    sign_operator = getchar();  // Reads a single character

    This directly gets user input without buffer issues.
    */


    double num1;
    double num2;
    char sign_operator;
    double result;

    printf("\nEnter first number: ");
    scanf("%lf", &num1);

    printf("\nEnter the sign operator(+ - * /): ");
    //scanf(" %c", &sign_operator);
    getchar();
    sign_operator = getchar();

    printf("\nEnter the second number: ");
    scanf("%lf", &num2);

    switch(sign_operator){
        case '+':
            result = num1 + num2;
            printf("\nThe result is : %.2f", result);
        break;
        case '-':
            result = num1 - num2;
            printf("\nThe result is : %.2lf", result);
        break;
        case '*':
            result = num1 * num2;
            printf("\nThe result is : %.2lf", result);
        break;
        case '/':
            result = num1 / num2;
            printf("\nThe result is : %.2lf", result);
        break;
        default:
            printf("\nPlease enter valid inputs");
    }
}