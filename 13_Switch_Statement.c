#include<stdio.h>

int main(){
    /*
        A switch is a more efficient alternative to using many "else if" statements
        It allows a statement to be tested for equality against many cases

        Function of break statement is so we can break out of our switch and exit
    */
    char grade;
    printf("\nEnter a letter grade: ");
    scanf("%c", &grade);

    switch(grade){
        case 'A':
            printf("Excellent");
            break;
        case 'B':
            printf("You did good");
            break;
        case 'C':
            printf("Not bad but pull up your socks");
            break;
        case 'D':
            printf("Sit down and think about your life");
            break;
        case 'E':
            printf("See Me!!!");
            break;
        default:
            printf("Please enter only valid grades");
    }

}
