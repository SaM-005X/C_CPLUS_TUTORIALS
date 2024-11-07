// #include <stdio.h>

// int main()
// {

    /* 2D-ARRAY => an array, where each element is an entire array
    useful if you need a matrix, grid, or table of data.*/

    // int numbers[2][3]={
    //                     {1,2,3},
    //                     {4,5,6},     // HERE IT IS PRE DEFINED AND NOT DEFINED INDIVIDUALLY.
    //                     {7,8,9}
    //                     };

    // int numbers[3][3];

    // int rows;
    // int columns;
    // rows=sizeof(numbers)/sizeof(numbers[0]);
    // columns=sizeof(numbers[0])/sizeof(numbers[0][0]);
    // printf("rows: %d\n",rows);
    // printf("columns: %d\n",columns);

    // numbers[0][0]=1;     // HERE EACH ELEMENT IS DEFINED INDIVIDUALLY.
    // numbers[0][1]=2;
    // numbers[0][2]=3;
    // numbers[1][0]=4;
    // numbers[1][1]=5;
    // numbers[1][2]=6;
    // numbers[2][0]=7;
    // numbers[2][1]=8;
    // numbers[2][2]=9;

    // //print 2D array
    // for(int i=0; i<rows; i++){
    //     for(int j=0; j<columns; j++){
    //         printf("%d ", numbers[i][j]);
    //     }
    //     printf("\n");
    // }

//     return 0;
// }

// USER DEFINED VARIABLE LENGTH 2D-ARRAY:-> 

// #include <stdio.h>

// int main() {
//     int rows;
//     int columns;

//     printf("Enter the number of rows:-> ");
//     scanf("%d", &rows);
//     printf("Enter the number of columns:-> ");
//     scanf("%d", &columns);

//     // Declare a 2D array with user-defined dimensions
//     int numbers[rows][columns];  /* SINCE THIS IS A VARIABLE LENGTH ARRAY IT MAY SHOW SLIGHT 
//     RED MARKS OF ERROR BECAUSE THE SIZE OF THE ROWS AND COLUMNS ARE DEFINED 
//     AT THE TIME OF COMPILATION OF THE CODE OR RUNNING TIME.*/

//     // Input values for the array
//     printf("Enter the elements of the array:\n");
//     for (int i = 0; i < rows; i++) {
//         for (int j = 0; j < columns; j++) {
//             printf("Element [%d][%d]: ", i, j);
//             scanf("%d", &numbers[i][j]);
//         }
//     }

//     // Print the array
//     printf("The array is:\n");
//     for (int i = 0; i < rows; i++) {
//         for (int j = 0; j < columns; j++) {
//             printf("%d ", numbers[i][j]);
//         }
//         printf("\n");
//     }

//     return 0;
// }

// USING DYNAMIC MEMEORY ALLOCATION OR DYNAMIC ARRAY:->

#include <stdio.h>
#include <stdlib.h>

int main() {
    int rows, columns;

    // Input for number of rows and columns
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    printf("Enter the number of columns: ");
    scanf("%d", &columns);

    // Allocate memory for the array of pointers
    int **numbers = (int **)malloc(rows * sizeof(int *));
    if (numbers == NULL) {
        fprintf(stderr, "Memory allocation failed!\n");
        return 1; // Exit if memory allocation fails
    }

    // Allocate memory for each row
    for (int i = 0; i < rows; i++) {
        numbers[i] = (int *)malloc(columns * sizeof(int));
        if (numbers[i] == NULL) {
            fprintf(stderr, "Memory allocation failed!\n");
            // Free previously allocated memory before exiting
            for (int j = 0; j < i; j++) {
                free(numbers[j]);
            }
            free(numbers);
            return 1; // Exit if memory allocation fails
        }
    }

    // Input values for the array
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &numbers[i][j]);
        }
    }

    // Print the array
    printf("The array is:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            printf("%d ", numbers[i][j]);
        }
        printf("\n");
    }

    // Free allocated memory
    for (int i = 0; i < rows; i++) {
        free(numbers[i]); // Free each row
    }
    free(numbers); // Free the array of pointers

    return 0;
}