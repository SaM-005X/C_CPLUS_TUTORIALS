#include<stdio.h>

double square(double x){ // THE FUNCTION DECLARATION, THE FUNCTION MUST BE DECLARED WITH PROPER DATATYPE AHEAD.
    double result = x*x;
    return result; // RETURNING THE "result" -> "CONTAINS THE VALUE OF THE SQUARED NUMBER" -> BACK TO THE MAIN FUNCTION TO THE VARIABLE "y", WHICH WILL PRINT THE VALUE OF THE SQUARED NUMBE.
}

int main(){

    // return = RETURNS A VALUE BACK TO A CALLING FUNCTION.

    double x; // TAKKING INPUT.
    printf("ENTER YOU NUMBER:-> ");
    scanf("%lf",&x);

    double y = square(x); // STORING THE RETURNED VALUE IN A VARIABLE "y".
    printf("the square of the given number is:-> %lf", y); // PRINTING THE SQUARE OF THE GIVEN NUMBER.

    return 0; // THIS STATEMENT IS USED TO DENOTE THAT THE CODE HAS EXECUTED WITHOUT ANY ERROR IF "0" IS RETURNED IN THE OUTPUT OR TERMINAL.
}

/* YOU CANNOT TAKE OR DEFINE A FUNCTION IF YOU HAVE TO RETURN 
A VALUE FROM THE FUNCTION TO THE MAIN FUNCTION BELOW THE MAIN FUNCTION, 
SINCE THE ARGUMENTS WILL NOT BE DEFINED AHEAD THE MAIN FUNCTION HENCE IT WILL SHOW A ERROR.*/

// double square(double x){
//     double result = x*x;
//     return result;
// }