#include<stdio.h>

enum Day {Sun=1, Mon=2, Tue=3, Wed=4, Thur=5, Fri=6, Sat=7};

int main(){
    //Short for enumerations
    //enum => A user defined type of named integer identifiers that helps to make a program more readable. You can either declare them inside or outside the main function

    enum Day today = Tue;

    printf("%d", today); //enums are not strings, but they can be treated as int

    if(today==Sun || today==Sat){
        printf("\nTake a break!");
    }else{
        printf("Have to go to school!!!");
    }

    return 0;
}