#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
    const int MIN = 1;
    const int MAX = 100;

    int guess;
    int guesses;
    int answer;

    //Uses current time as a seed to generate random numbers
    srand(time(0));

    //Generates a random number between MIN and MAX
    answer = (rand() % MAX) + MIN;

    do
    {
        printf("Enter a guess: ");
        scanf("%d", &guess);

        if(guess>answer){
            printf("A lil too High! Try again\n");
        }else if(guess<answer){
            printf("A lil too low! Try again\n");
        }else{
            printf("Correct ✅\n");
        }
        guesses++;
    } while (answer!=guess);

    printf("***********************\n");
    printf("Answer: %d\n", answer);
    printf("Guesses: %d\n", guesses);
    printf("***********************\n");


    return 0;
}