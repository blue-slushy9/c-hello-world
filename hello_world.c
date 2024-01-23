#include <stdio.h> 

// Declare function prototype
void hello();

// Declare main function
int main() {
    // Call our function
    hello();
    // End main function execution, return 0 (i.e. success)
    return 0;
}

// Function definition
void hello() {
    printf("Hello, World!\n");
}
