/* SWITCH STATEMENTS.
switch = A MORE EFFECIENT ALTERNATIVE TO USING MANY "else if" STATEMENTS
ALLOWS A VALUE TO BE TESTED FOR EQUALITY AGAINST MANY CASES. */


// basic switch program.


// #include<stdio.h>

// int main(){
//     char grade;

//     printf("\nenter a letter grade: ");
//     scanf("%c",&grade);

//     switch(grade){
//         case 'A':   
//             printf("perfect\n");
//             break;
//         case 'B':
//             printf("you did good\n");
//             break;
//         case 'C':
//             printf("you did okay\n");
//             break;
//         case 'D':
//             printf("at least not enough\n");
//             break;
//         case 'F':
//             printf("you have failed\n");
//             break;
//         default:
//             printf("please enter only valid grade\n");
//     }

//     return 0;
// }

// calculator using switch statement:->

#include<stdio.h>
#include<math.h>

void main(){

    int choice;
    double a;
    double b;
    printf("\nEnter your choice:->\n1 => Addition\n2 => Substraction\n3 => Multiplication\n4 => Division\n5 => Remainder\n6 => Exponent\n7 => Square root\n");
    printf("Enter your numbers:->\n");
    printf("Enter the first number, ");
    printf("Enter your second number:-> ");

    if (scanf("%d %lf %lf", &choice, &a, &b) == 3){ // IF THE GIVEN INPUTS SUCH AS "CHOICE", "a" AND "b" ARE DOUBLE OR NOT. //
        switch(choice){
            case 1 :
                printf("the sum of the two numbers is: %lf\n", a+b);
                break;
            case 2 :
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
                break;
            case 3 :
                printf("the product of the two numbers is: %lf\n", a*b);
                break;
            case 4 :
                printf("the division of the two numbers will be: %lf\n", a/b);
                break;
            case 5 : {
                int A = (int)a;
                int B = (int)b;
                printf("The remainder of the number when divided: %d\n", A % B);
                break;
            }
            case 6 :
                printf("the exponent of the two numbers will be (a to the power b): %lf\n", pow(a, b));
                printf("the exponent of the two numbers will be (b to the power a): %lf\n", pow(b, a));
                break;
            case 7 :
                printf("the square-root of the numbers will be (sqrt of a): %lf\n", sqrt(a));
                printf("the square-root of the numbers will be (sqrt of b): %lf\n", sqrt(b));
                break;
        }
    }
    else{ // ELSE CONDITION OF CHECKING THE PROPER DATATYPE OF THE GIVEN INPUTS. //
        printf("give proper value to choice, a and b so that the proper computation can be done:");
    }
}
