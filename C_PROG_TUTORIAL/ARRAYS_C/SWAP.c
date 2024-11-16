// #include<stdio.h>
// #include<string.h>

// int main(){

//     // char x = 'X';
//     // char y = 'Y';

//     // x = y;  
//     // /*the output for the above code will be:->
//     // x = Y
//     // y = Y*/
//     // y = x;
//     // /*the output for the above code will be:->
//     // x = X
//     // y = X*/

//     // printf("x = %c\n",x);
//     // printf("y = %c\n",y);
//     // // but the swapping didnot happen.

//     // therefore we have to bring in a third variable.

//     char x = 'X';
//     char y = 'Y';
//     char temp;

//     // x = y;  
//     // /*the output for the above code will be:->
//     // x = Y
//     // y = Y*/
//     // y = x;
//     // /*the output for the above code will be:->
//     // x = X
//     // y = X*/

//     temp = x;
//     x = y;
//     y = temp;
//     // hence the swapping has happened.

//     printf("x = %c\n",x);
//     printf("y = %c\n",y);
//     // but the swapping didnot happen.

//     return 0;
// }
 
#include<stdio.h>
#include<string.h>

int main(){
    char x[15] = "water";
    char y[15] = "soda";
    char temp[15];

    strcpy(temp, x);
    strcpy(x, y);
    strcpy(y, temp);

    printf("x = %s\n", x);
    printf("y = %s\n", y);

    return 0;
}