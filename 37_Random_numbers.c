#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
    //Pseudo random numbers => A set of values or elements that are statistically random ( Note: rand() generates the same sequence every time you run the program unless you seed it using srand().). The rand() function gives you a random number between 0 - 32,767

    srand(time(0));

    int number1 = (rand() % 6) + 1;
    int number2 = (rand() % 6) + 1;
    int number3 = (rand() % 6) + 1;

    printf("%d\n", number1);
    printf("%d\n", number2);
    printf("%d\n", number3);

    return 0;
}