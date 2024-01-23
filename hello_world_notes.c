#include <stdio.h> // Preprocessor directive that tells the compiler to
		   // include the standard input/output library; provides
		   // functions like 'printf' and 'scanf';

// Function prototype---declares to compiler that there is a function named
// 'hello', and that it takes no parameters and returns no output, hence void;
// in C, the compiler needs to know about a function's existence (i.e. its
// prototype) before it's used in the program; this is why function prototypes
// are often placed before the 'main' function or any other code that uses
// those functions; this way, the compiler knows what to expect in terms of
// the function's return type and parameters; additionally, providing a
// function prototype before its usage allows the compiler to catch any
// potential errors related to the function's usage in the code; while it's
// common practice to place function prototypes before 'main', it is not
// strictly necessary for smaller programs, whereas for larger programs it is
// strongly recommended in order to improve code readability and
// maintainability;
void hello();

// Declaration of main function in a C program; every C program must have a
// main function which serves as the entry point to the program, i.e. where
// the actual program execution begins; 'int' indicates that the function will
// return an integer value, where 0 conventionally indicates successful
// execution and a non-zero value an error or abnormal termination; 'main' is
// the name of the function, the empty () mean it takes no parameters,
// in some cases 'main(void)' may be used to signify the same thing;
// 'return 0' brings about the end of the program and signifies successful
// execution;
int main() {
    // Call the hello function, the compiler already knows about the function
    // because of our prototype above;
    hello();

    return 0;
}

// Function definition
void hello() {
    printf("Hello, World!\n");
}

// HINT: to compile a C program on Debian12, you can run this command:
//
// gcc -o hello hello.c
//
// where 'hello' is the name of the executable and 'hello.c' is the name of
// your C program file;
//
// after you have done this, you can run it with the following command:
//
// ./hello 
//
// where, again, 'hello' is the name of your executable;
