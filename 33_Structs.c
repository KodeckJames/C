#include<stdio.h>
#include<string.h>

struct Player{
    char name[12];
    int score;
};

int main(){
    // A struct ie structure is a collection of related data types
    //They can be of different data types listed under one name in a block of memory. Very similar to classes in othe langs (but no methods)

    //These refer to different blocks of memory which contain their own unique members:
    struct Player Player1; 
    struct Player Player2;

    strcpy(Player1.name, "JJ");
    Player1.score = 4;

    strcpy(Player2.name, "Ondix");
    Player2.score = 5;

    printf("%s\n", Player1.name);
    printf("%d\n", Player1.score);

    printf("%s\n", Player2.name);
    printf("%d", Player2.score);

    return 0;
}