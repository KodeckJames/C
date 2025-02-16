#include<stdio.h>

int main(){
    // A do while loop always executes a block of code once, THEN checks a condition unlike the while loop which checks a condition, THEN executes a block of code if condition is true

    int number = 0;
    int sum = 0;
    // while(number > 0){
    //     printf("Enter a number greater then 0: ");
    //     scanf("%d", number);
    //     if (number>0){
    //         sum += number;
    //     }
    // }
    do{
        printf("Enter a number greater than 0: ");
        scanf("%d", &number);
        if (number>0){
            sum += number;
        }
    } while (number > 0);
    printf("Sum: %d", sum);

    return 0;
}