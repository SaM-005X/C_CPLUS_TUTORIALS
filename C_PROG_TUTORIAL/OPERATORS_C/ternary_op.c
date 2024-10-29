// FINDING THE MAXIMUM NUMBER BETWEEN TWO GIVEN NUMBERS USING TERNARY OPERATOR. 

#include<stdio.h>

double findmax(double x, double y){
    return (x>y) ? x : y; // THE CONDITION AND THE OPERATOR CHECKS THE OVERALL IF/ELSE CONDITION AND RETURNS THE VALUE.
}

int main(){

    // ternary operator => SHORTCUT TO if/else WHEN ASSIGNING/RETURNING A VALUE.
    // (CONDITION) ? value if true : value if false

    double x, y;
    printf("enter your first number:-> ");
    scanf("%lf",&x);
    printf("enter your second number:-> ");
    scanf("%lf",&y);

    double max = findmax(x,y); // THE VALUE IS RETURNED TO THE VARIABLE "max".

    printf("\nthe maximum between the two given numbers is:-> %lf", max); // THE MAXIMUM IS PRINTED.

    return 0;
}