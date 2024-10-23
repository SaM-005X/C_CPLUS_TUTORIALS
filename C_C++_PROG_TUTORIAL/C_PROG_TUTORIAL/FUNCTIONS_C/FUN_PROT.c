#include<stdio.h>

void hello(char[], int); // function prototype.

int main(){ // main function.

    // function prototype

    // WHAT IS IT?
    // function declaration, without a body, before main() (function).
    // ensures that calls to a function are made with the correct arguments.

    /* IMPORTANT NOTES:-
    1) MANY C COMPILERS DO NOT CHECK FOR PARAMENTE MATCHING.
    2) MISSING ARGUMENTS WILL RESULT IN UNEXPECTED BEHAVIOUR.
    3) A FUNCTION PROTOTYPE CAUSES THE COMPILER TO FLAG AN ERROR IF ARGUMENTS ARE MISSING.
    
    ADVANTAGES:->
    1) EASIER TO NAVIGATE A PROGRAM WITH THE MAIN FUNCTION (main()) AT THE TOP.
    2) HELPS WITH DEBUGGING.
    3) COMMONLY USED IN HEADER FILES.*/

    char name[50];
    printf("enter your name:-> ");
    scanf("%s",&name);

    int age;
    printf("enter your age:-> ");
    scanf("%d",&age);

    hello(name, age); /*function calling.*/ /* hello(name); --> this will cause no problem if the function prototype is not mentioned above the main function, 
    but giving only one argument will cause to pass garbage value to the second argument. 
    on specifying the function prototype above will simply give an error or warning without actually running the code.*/

    return 0;
}

void hello(char name[], int age){  // function defining.
    printf("\nhello ----> %s!!", name);
    printf("\nyour age is %d years old!!", age);
}