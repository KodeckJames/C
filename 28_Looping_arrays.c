#include<stdio.h>
#include<string.h>

int main(){
    /*
    sizeof(prices) returns the total number of bytes occupied by the array, not the number of elements.
    Since prices is an array of double, each element typically takes 8 bytes.
    sizeof(prices) will return 40 (5 elements × 8 bytes each).
    The loop will iterate 41 times, accessing invalid memory and possibly printing garbage values or causing a segmentation fault.

    Fix: Use sizeof(prices) / sizeof(prices[0])
    This calculates the correct number of elements in the array.
    */

    double prices[] = {5.0, 10.0, 15.0, 25.0, 20.0};
    int length = sizeof(prices)/sizeof(prices[0]);
    for (int i = 0; i < length; i++){
        printf("$%.2lf\n", prices[i]);
    }

        return 0;
}