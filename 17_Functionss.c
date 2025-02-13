#include <stdio.h>

void birthday(char name[], int age) {  
    printf("\nHappy birthday to you!");
    printf("\nHappy birthday to you!");
    printf("\nHappy birthday dear %s!\n", name);  // Fixed spacing
    printf("You are %d years old now.\n", age);  // Added newline
    printf("Happy birthday to you!\n");
}

int main() {
    int age = 39;
    //char name[] = {'J', 'J', '\0'};  Explicit initialization
    char name[] = "JJ";  // Explicit initialization

    birthday(name, age);
    birthday(name, age);
    birthday(name, age);

   
    // Function => It's a small section of code that's executed whenever we call it ie when we invoke a function. When we compile and run a C program, we begin with invoking the main function

    //Syntax of a Function:

    // return_type function_name(parameters) {
    //     Function body
    //     return value;  // (if return_type is not void)
    // }

    /*
    
    Types of Functions in C
    1. Library Functions (Predefined)
    These are built-in functions provided by C's standard library.

    Function	Library	Description
    printf()	<stdio.h>	Prints output to the console
    scanf()	<stdio.h>	Reads user input
    sqrt()	<math.h>	Computes square root
    strlen()	<string.h>	Returns string length

    2. User-Defined Functions
    These are functions created by the programmer.

    Example: A Simple Function
    c
    Copy
    Edit
    #include <stdio.h>

    Function declaration
    void greet() {
        printf("Hello, World!\n");
    }

    int main() {
        greet();  // Function call
        return 0;
    }
🔹 Explanation:

    greet() is a user-defined function that prints "Hello, World!".
    main() calls greet().

    Function Declaration (Prototype)
    In C, functions should be declared before usage if they are defined after main().   

    Example of Function Prototype
    
    #include <stdio.h>

    // Function prototype
    int square(int);

    int main() {
        int num = 4;
        printf("Square: %d\n", square(num));
        return 0;
    }

    // Function definition
    int square(int n) {
        return n * n;
    }
    ✅ Why Use Prototypes?

    Helps the compiler know the function exists before main().
    Prevents implicit declaration errors.

    Recursive Functions
    A recursive function is a function that calls itself.

    🔹 Example: Factorial using Recursion
    
    #include <stdio.h>

    int factorial(int n) {
        if (n == 0)
            return 1;
        return n * factorial(n - 1);
    }

    int main() {
        printf("Factorial of 5: %d\n", factorial(5));
        return 0;
    }
    ✅ How It Works:

    factorial(5) calls factorial(4), then factorial(3), etc.
    Stops when n == 0.

        Inline Functions (Using static inline) ⚡
    Inline functions reduce function call overhead by replacing function calls with actual code.

    🔹 Example:
    c
    Copy
    Edit
    #include <stdio.h>

    static inline int square(int x) {
        return x * x;
    }

    int main() {
        printf("Square of 6: %d\n", square(6));
        return 0;
    }
    ✅ When to Use Inline Functions?

    For small, frequently called functions.
    To improve performance by avoiding function call overhead.

    
*/
    return 0;
}