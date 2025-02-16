#include <stdio.h>

int main(){
    // A for loop repeats a section of code a limited number of times
    // Params to be passed in the braces => 1.Declare a  Counter/ index 2. Condition ie how long we should continue repeating that code 3. We can increment or decrement our counter

    for (int i = 1; i <= 10; i+=2)
    {
        printf("%d\n", i);
        printf("Test");
    }
}