#include<stdio.h>
#include<math.h>

int main(){
    double length;
    double height;
    printf("Enter the length: ");
    scanf("%lf", &length);
    printf("Enter the height: ");
    scanf("%lf", &height);
    double hypotenuse = sqrt((length*length)+(height*height));
    printf("The hypotenuse is: %lf ", hypotenuse);
}