// WHY IN C IT'S NECESSARY TO USE A LIB TO I/O? -> Cuz the language was not projected for that, but for control. perfomance and portability

#include <stdio.h> // LIB STD (Standard + I/o) 

int main() // MAIN IT'S A SPECIAL, RUN WITHOUT CALL THE FUNCTION

{

    printf("Hello World"); // PRINT
    return 0; // THIS CLOSES THE PROGRAM (FOR NOT LEAK MEMORY)
}