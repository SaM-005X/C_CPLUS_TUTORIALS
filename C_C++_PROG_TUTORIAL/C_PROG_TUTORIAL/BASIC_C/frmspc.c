#include<stdio.h>

int main()
{
    // format specifier % =defines and formats a type of data to be displayed. //

    // %c --> character. //
    // %d --> integer. //
    // %s --> string (array of charcters). //
    // %f --> float. //
    // %lf --> double. //

    // %.1 --> decimal precision. //
    // %1 --> minimum field width. //
    // % --> left align. //

    float item1=5.43;
    float item2=6.54;
    float item3=7.65;

    printf("item1:- $%f \n", item1);
    printf("item2:- $%f \n", item2);
    printf("item3:- $%f \n", item3);

    printf("item1:- $%.2f \n", item1);
    printf("item2:- $%.2f \n", item2);
    printf("item3:- $%.2f \n", item3);
    
    printf("item1:- $%8.2f \n", item1);
    printf("item2:- $%8.2f \n", item2);
    printf("item3:- $%-8.2f \n", item3);

    return 0;
}