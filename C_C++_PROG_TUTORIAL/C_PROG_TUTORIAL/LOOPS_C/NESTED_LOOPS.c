// #include<stdio.h>

// int main(){

//     // nested loops=> a loop inside another loop.

//     for(int i=0; i<=10; i++){
//         for(int j=0; j<=i; j++){
//             printf("*");
//         }
//     }
//     printf("\n");

//     return 0;
// }

#include<stdio.h>

int main(){

    // nested loops=> a loop inside another loop.

    for(int i = 0; i <= 10; i++){
        for(int j = 0; j <= i; j++){
            printf("*");
        }
        // print a new line after each row of stars
        printf("\n");
    }

    return 0;
}
