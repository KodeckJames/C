#include <stdio.h>
int main(){

    int x = 5;
    int y = 7;

    int z = x + y;
    printf("The sum is %d\n", z);

    //In division, if you store all variables in int type, if the result is to have remainders, it will return an int so you store them in floats ie:

    int a = 5;
    float b = 2;

    float c = a/(float)b;
    printf("Division answer is %f\n", c);

    int d = 5;
    int e = 2;

    int f = d % e;
    printf("Modulus is %d", f);

    

    return 0;
}