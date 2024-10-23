/*-> FUNCTIONS ARE USED TO RUN A BLOCK OF CODE MULTIPLE TIMES
 WITHOUT ACTUALLY WRITTING THE WHOLE CODE AGAIN AND AGAIN. */

// WRITE A CODE TO PRINT HAPPY BIRTHDAY SONG 3 TIMES. //
// ONLY THE FIRST NAME WILL BE TAKEN. //

#include<stdio.h>

void birthday(char name[]); // FUNCTION DECLARATION.

int main(){
    char name[50]; // NAME STRING INPUT.

    printf("enter your name:-> ");
    scanf("%s",&name);

    birthday(name); // FUNCTION CALLING.
    printf("\n");
    birthday(name);
    printf("\n");
    birthday(name);

    return 0;
}

void birthday(char name[]){  // FUNCTION DEFINATION.
    printf("\nHppy Birthday To You!!");
    printf("\nHappy Birthday To You!!");
    printf("\nHappy Birthday To Dear....%s",name);
    printf("\nHappy Birthday To You!!");
}

