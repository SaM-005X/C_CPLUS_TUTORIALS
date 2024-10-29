// BASIC PATTERN PRINTING.

// #include<stdio.h>

// int main(){

//     // nested loops=> a loop inside another loop.

//     for(int i = 0; i <= 10; i++){
//         for(int j = 0; j <= i; j++){
//             printf("*");
//         }
//         // print a new line after each row of stars
//         printf("\n");
//     }

//     return 0;
// }

//-> OUTPUT OF THE ABOVE CODE WILL BE: 
// *
// **
// ***
// ****
// *****
// ******
// *******
// ********
// *********
// **********
// ***********

// #include <stdio.h> 
// int main() 
// { 
//    //nested loop = a loop inside of another loop 
//    int rows; 
//    int columns; 
//    char symbol; 
//    printf("\nEnter # of rows: "); 
//    scanf("%d", &rows); 
//    printf("Enter # of columns: "); 
//    scanf("%d", &columns); 
//    scanf("%c"); //clears \n from buffer 
//    printf("Enter a symbol to use: "); 
//    scanf("%c", &symbol); 
//    for(int i = 1; i <= rows; i++) 
//    { 
//       for(int j = 1; j <= columns; j++) 
//       { 
//          printf("%c", symbol); 
//       } 
//       printf("\n"); 
//    } 
//    return 0; 
// } 
// WHAT IS WRONG WITH THIS CODE

// The code you provided is mostly correct, but there is a small issue with how the newline character ( `\n` ) is handled in the input buffer, which can cause the program to behave unexpectedly when reading the symbol. Specifically, the  `scanf("%c");`  statement intended to clear the newline character from the buffer is not correctly placed, and it can lead to the program reading an unintended character instead of the desired symbol.

// Here's a corrected version of the code:
#include <stdio.h>

int main()
{
   // Nested loop = a loop inside of another loop
   int rows;
   int columns;
   char symbol;

   printf("\nEnter # of rows: ");
   scanf("%d", &rows);
   printf("Enter # of columns: ");
   scanf("%d", &columns);
   while (getchar() != '\n'); // Clear the input buffer

   printf("Enter a symbol to use: ");
   scanf("%c", &symbol);

   for (int i = 1; i <= rows; i++)
   {
      for (int j = 1; j <= columns; j++)
      {
         printf("%c", symbol);
      }
      printf("\n");
   }
   return 0;
}
// ### Changes Made:
// 1. **Clearing the Input Buffer**: Instead of using  `scanf("%c");` , I've replaced it with a  `while (getchar() != '\n');`  loop to clear the input buffer. This ensures that any leftover characters, including newline characters, are removed before reading the symbol.

// ### Explanation:
// - When you enter the number of rows and columns, pressing Enter creates a newline character in the input buffer. If you immediately call  `scanf("%c", &symbol);`  afterward, it may read this newline instead of waiting for a new character input.
// - The  `while (getchar() != '\n');`  loop consumes all characters in the input buffer until it reaches a newline, effectively clearing it before you prompt for the symbol.

// With this change, the program should work as intended, allowing the user to input the desired symbol without any issues.