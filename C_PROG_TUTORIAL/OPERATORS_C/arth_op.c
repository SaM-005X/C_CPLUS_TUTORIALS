#include<stdio.h>
#include<math.h>

int main()
{
    // OPERATORS PRECEDENCE. //
    /*PRIORITY--------------------OPERATOR
        "1"                         "!"
        "2"                         "*,/,%"
        "3                          "+,-"
        "4"                         "<,<=,>,>="
        "5"                         "==,!="
        "6"                         "&&"
        "7"                         "||"
        "8"                         "="
        .
        .
        .
        .
        .
        .
        .
        */
        
    // arithmetic operators. //

    // arithmetic operators precedence --> "*, /, %, +, -, =" //

    // + --> "addition". //
    // - --> "subtraction". //
    // * --> "multiplication". //
    // pow() --> "to the power (exponential)". //
    // % --> "modulus". //
    // / --> "dividion". //
    // ++ --> "increment". //
    // -- --> "decrement". //

    float x,y,z;
    printf("enter a number: \n");
    scanf("%f",&x);
    printf("enter a number: \n");
    scanf("%f",&y);

    /*// "ADDITION" //
        
        z = x + y;
        
        printf("the sum: %f \n", z);*/
    
    /*// "SUBSTRACTION" //

        z = x - y;

        printf("the difference: %f \n", z);*/
    
    /*// "MULTIPLICATION" //

        z = x * y;

        printf("the product: %f \n", z);*/

    /*// "POWER (EXPONENTIAL)" //

        z = pow (x, y);

        printf("the exponents: %f \n", z);*/

    /*// "REMAINDER" //

        z = (int) x % (int) y; // only takes place with integer datatype. //

        printf("the remainder: %f \n", z);*/

    /*// "DIVISION" //

        z = x / y;

        printf("the division: %f \n", z);*/
    
    /*// "PRE-INCREMENT" //

        z = ++x, ++y;

        printf("the pre-incremented value: %f, %f \n", x, y);*/

    /*// "PRE-DECREMENT" //

        z = --x, --y;

        printf("the pre-decremented value: %f, %f \n", x, y);*/
    
    /*// "POST-INCREMENT" //

        z = x++, y++;

        printf("the post-incremented value: %f, %f \n", x, y);*/

    /*// "POST-DECREMENT" //

        z = x--, y--;

        printf("the post-decremented value: %f, %f \n", x, y);*/
    
    // some more increment and decrement operations. //

    // take the values of x and y to be 2.12, 3.23 //

        printf("%f \n", x);  // 2.120000 //

        printf("%f \n", ++x);  // 3.120000 //

        printf("%f \n", x++);  // 3.120000 //

        printf("%f \n", --x);  // 3.120000 //

        printf("%f \n", x--);  // 3.120000 //

        printf("%f \n", x);  // 2.120000 //

        /*printf("%f \n", y);  // 3.230000 //

        printf("%f \n", ++y);  // 4.230000 //

        printf("%f \n", y++);  // 4.230000 //

        printf("%f \n", --y);  // 4.230000 //

        printf("%f \n", y--);  // 4.230000 //

        printf("%f \n", y);  // 3.230000 //*/

    // some practice on precedence. //

        printf("%d \n", 5 * 2 - 2 * 3);

        printf("%d \n", 5 * 2 / 2 * 3);

        printf("%d \n", 5 * (2 / 2) * 3);

        printf("%d \n", 5 + 2 / 2 * 3);
        
    return 0;
}