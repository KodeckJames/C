#include<stdio.h>
#include<stdbool.h>

int main(){
    //Logical operators => && (AND) checks if two conditions are true

    float temp = 27;
    bool sunny = false;

    if(temp>=25 && temp<=30 && sunny){
        printf("The weather is good");
    }else{
        printf("The weather is bad.");
    }

    // (OR) || operator checks if at least one condition is true

    if(temp<=0 || temp>=30){
        printf("\nThe weather is bad!");
    }
    else{
        printf("\nThe weather is good.");
    }

    // (NOT) ! operator reverses the state of a condition
    if(!sunny){
        printf("\nIt's cloudy outside");
    }else{
        printf("\nIt's sunny outside");
    }
}
