// ARGUMENTS AND PARAMETERS:-> //

#include<stdio.h>

void birthday(char name[], int age); // FUNCTION DECLARATION -> PARAMETERS PASSED AS "char name[]" and "int age". //

int main(){

    char name[50]; // TAKING THE INPUT(name). //
    printf("enter your name:-> ");
    scanf("%s",&name);

    int age; // TAKING THE INPUT(age). //
    printf("enter your age:-> ");
    scanf("%d",&age);

    birthday(name,age); // FUNCTION CALLING. //

    return 0;
}

void birthday(char name[], int age){ // FUNCTION DEFINATION.
    printf("\nHappy Birthday To You Dear .... %s!!",name);
    printf("\nCongragulation!! You Are %d Years Old!!",age);
}

/* 1) ARGUMENTS => THEY ARE THE VALUES PASSED WHEN CALLING THE FUNCTION, 
THEY DEFINE WHICH VALUES TO BE PASSED ON TO THE FUNCTION.

2) PARAMETERS => THEY ARE PASSED IN THE FUNCTION DECLARATION AND FUNCTION DEFINATION.
THEY DEFINE THE DATATYPE OF THE PASSED VALUES IN THE FUNCTION,
AND ACTIALLY HELP IN COMPUTING THE VALUES.*/