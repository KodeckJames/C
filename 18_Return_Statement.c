#include<stdio.h>
#include<math.h>

double square(double x){
    return pow(x, 2);
}

int main(){
    double result = square(7);
    printf("Result is: %.1lf", result);
    // return => returns a value back to a calling function;

    return 0;
}