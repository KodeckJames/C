#include<stdio.h>
int main(){
    //Are used to add some choices to a program

    int age;
    printf("\nEnter your age: ");
    scanf("%d", &age);

    if(age>=18){
        printf("You are sigend up");
    } else if(age<0){
        printf("Go back and get born then come back💀💀");
    }    
    else if(age==0){
        printf("Grow up first little baby👶🏾🍼");
    }
    else
    {
        printf("You are Under age");
    }
    

    return 0;
}