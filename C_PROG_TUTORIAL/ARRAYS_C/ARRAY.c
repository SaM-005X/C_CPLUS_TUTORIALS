// #include <stdio.h>

// int main() {
//     int n; // Declare n as an int
//     printf("Enter the number of elements you want in the array:-> ");
//     scanf("%d", &n); // Read the value of n

//     double price[n]; /* Declare the array with size n. 
// THIS ARRAY IS ALSO CALLED AS "VARIABLE LENGTH ARRAY".*/

//     for(int i = 0; i < n; i++) { // Loop from 0 to n-1
//         printf("Enter the element:-> ");
//         scanf("%lf", &price[i]); // Store the input in price[i]
//     }

//     // Optionally, print the elements to verify
//     printf("You entered:\n");
//     for(int i = 0; i < n; i++) {
//         printf("$%.2lf\n", price[i]);
//     }

//     return 0;
// }

/*  ARRAYS => IS A DATA STRUCTURE THAT CAN STORE MANY VALUES OF THE SAME DATA TYPE.
    ARRAYS CANNOT BE MODIFIED AFTER THE COMPILATION OR DURING THE COMPILE TIME.
    THEREFORE, ARRAYS ARE A TYPE OF STATIC DATA-STRUCTURES. */

#include <stdio.h>
#include <stdlib.h> // For malloc and free

int main() {
    int n; // declaring a variable name with 'n'.
    printf("Enter the number of elements you want in the array:-> ");
    scanf("%d", &n);

    // Input validation
    if (n <= 0) {
        printf("Please enter a positive integer for the number of elements.\n");
        return 1; // Exit the program with an error code
    }

    // Allocate memory for the array
    double *price = (double *)malloc(n * sizeof(double));
    if (price == NULL) {
        printf("Memory allocation failed.\n");
        return 1; // Exit the program if allocation fails
    }

    for (int i = 0; i < n; i++) {
        printf("Enter the element:-> ");
        scanf("%lf", &price[i]);
    }

    // Optionally, print the elements to verify
    printf("You entered:\n");
    for (int i = 0; i < n; i++) {
        printf("$%.2lf\n", price[i]);
    }

    // Free the allocated memory
    free(price);

    return 0;
}

/*Summary of Data Structures Used:
Static Array: In the first version (if your compiler supports VLAs), 
it creates an array of a size determined at runtime.

Dynamic Array: In the second version, it allocates memory for an array using  malloc , 
which allows for more flexibility in terms of size, 
especially if  n  is large or unknown at compile time.*/
