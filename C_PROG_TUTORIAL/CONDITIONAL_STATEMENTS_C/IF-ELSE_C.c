  // CONTROL STATEMENTS. //
// TO CHECK SOME CONDITION AND EXECUTE A PART OR BLOCK OF CODE. //

/* CHECKING AGE ELEGIBILITY OF A USER. */
/*#include<stdio.h>

int main(){
    int age; // TAKING AGE OF A USER.

    printf("\n enter your age: "); // RECORDING THE AGE OF THE USER.
    scanf("%d",&age);

    if(age >= 18){ // IF USER'S AGE IS 18 OR ABOVE THEN. 
        printf("you are now signed up."); // THE USER WILL BE SIGNED IN.
    }
    else if(age < 0){ // IF THE USER IS LESS THAN 0 YEARS.
        printf("you haven't been born yet"); // THIS PRINT STATEMENT WILL BE EXECUTED.
    }
    else{ // ELSE STATEMENT.
        printf("you are too young to sign up.");
    }

    return 0;
}*/

/* MAKING A CALCULATOR USING NESTED IF, ELSE IF AND ELSE CONDITIONAL STATEMENTS:-> 
*THE DIFFERENCE WILL ONLY GIVE POSITIVE VALUES.* */

#include<stdio.h>
#include<math.h>

void main(){

    double choice;
    printf("\nenter your choice: \n 1 => addition\n 2 => substraction\n 3 => multiplication.\n 4 => division\n 5 => remainder\n 6 => exponents\n 7 => square-root \n");
    printf("enter your numbers: \n");

    double a;
    double b;

    printf("enter the first number:, ");
    printf("enter the second number:, ---> ");

    if(scanf("%lf %lf %lf", &choice, &a, &b) == 3){ // IF THE GIVEN INPUTS SUCH AS "CHOICE", "a" AND "b" ARE DOUBLE OR NOT. //
        if(choice == 1){
            printf("the sum of the two numbers is: %lf\n", a+b);
        }
        else if(choice == 2){
            if (a && b != 0){
                if(a>b){
                    printf("the difference between the numbers: %lf\n", a-b);
                }
                else if(b>a){
                    printf("the difference between the numbers: %lf\n", b-a);
                }
            }
            else{
                printf("the difference can't be done:");
            }
        }
        else if(choice == 3){
            printf("the product of the two numbers is: %lf\n", a*b);
        }
        else if(choice == 4){
            printf("the division of the two numbers will be: %lf\n", a/b);
        }
        else if(choice == 5){
            int A = (int)a;
            int B = (int)b;
            printf("the reaminder of the number when divided: %d\n", A%B);
        }
        else if(choice == 6){
            printf("the exponent of the two numbers will be (a to the power b): %lf\n", pow(a, b));
            printf("the exponent of the two numbers will be (b to the power a): %lf\n", pow(b, a));
        }
        else if(choice == 7){
            printf("the square-root of the numbers will be (sqrt of a): %lf\n", sqrt(a));
            printf("the square-root of the numbers will be (sqrt of b): %lf\n", sqrt(b));
        }
    }
    else{ // ELSE CONDITION OF CHECKING THE PROPER DATATYPE OF THE GIVEN INPUTS. //
        printf("give proper value to choice, a and b so that the proper computation can be done:");
    }
}