#include<stdio.h>
 
 int main()
 {
    // constant = fixed value that cannot be altered by the program during its execution. //

    const float PI = 3.141590;

    // PI = 31.4159; // here we cannot assign new value to the constant variable name "PI", and on running the code it will give error. //

    printf("the value of the constant PI = %f \n", PI);
     
    return 0;
 }