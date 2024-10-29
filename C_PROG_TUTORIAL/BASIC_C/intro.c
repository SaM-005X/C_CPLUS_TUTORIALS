#include<stdio.h> /* here '#' is the preprocessor directive, and 'stdio.h' is the header file, 
The '#include' directive in C is a preprocessor instruction that tells the compiler to insert the contents of a specified file into the current program. 
In the case of 'stdio.h', 
it’s a header file that provides prototypes (function declarations) for standard input/output functions, such as 'printf()' and 'scanf()'. */

int main()/* The 'int main()' function is the entry point of a C program. 
It is the function that the operating system calls when the program is executed.
The 'main()' function is required in every C program, as it is the starting point from which the program's execution begins.
The int return type indicates that the main() function is expected to return an integer value, 
which is typically used to indicate the status of the program's execution.
A return value of 0 usually indicates a successful execution, while a non-zero value indicates an error. */
{ //the program always starts with open curly bracket. //
    printf("hello world!\n"); // printf is a built-in function, displays or prints the 'helo world!' statement. //
    printf("my name is samrat sengupta.\n"); // displays or prints the 'my name is samrat sengupta' statement in new line due to 1st printf function. //
    printf("I'm Good!\n"); // displays or prints the 'I'm Good!' statement in new line due to \n in 2nd printf function. //
    printf("1\t2\t3\t4\t5\t6\t7\t8\t9\t10\n"); // use of tab (\t) to create evenly spaces between numbers. //
    printf("\'chase success\' ~ samrat"); // backslash used like these helps to print special characterslike this. //
    return 0; /* It indicates successful program execution to the operating system (OS). 
    The OS expects the main function to return an integer value. 
    A return value of 0 typically means the program executed without errors and terminated normally. */
} // the program always ends with closed curly bracket. //
//
/* 1) C IS A MID LEVEL LANGUAGE, IT'S NOT AN OBJECT ORIENTED PROGRAMMING LANGUAGE.
   2) C IS ONE OF THE FASTEST PROGRAMMING LANGUAGE.
   3) C REQUIRES COMPILER TO CONVERT HIGH LEVEL LANGUAGE TO MACHINE LEVEL LANGUAGE OR ASSEMBLY LEVEL CODE.
   4) C IS THE BASIC PROGRAMMING LANGUAGE. */