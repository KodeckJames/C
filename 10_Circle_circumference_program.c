#include <stdio.h>

int main(){

    const double PI = 3.14159;
    double diameter;
    printf("Enter the diameter: ");
    scanf("%lf", diameter);
    double circumference = ("%lf * %lf", diameter, PI);
    printf("Circumference is %lf", circumference);

    return 0;
}