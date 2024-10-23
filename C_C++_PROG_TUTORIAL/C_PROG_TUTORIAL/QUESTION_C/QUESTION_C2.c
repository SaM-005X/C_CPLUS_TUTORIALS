/* Q1) TO CALCULATE THE AREA AND THE CIRCUMFERENCE OF A GIVEN CIRCLE AND ITS RADIUS. */

/*#include<stdio.h> // THE PREPROCESSOR DIRECTIVE INVOKED. //
#include<math.h> // MATH LIBRARY IS CALLED FOR THE USE OF POW (POWER/EXPONENT FUNCTION). //

int main() // USER DEFINED MAIN FUNTION. //
{
    const double PI = 3.14159; // THE VALUE OF CONSTANT PI. //
    double radius; // THE VALUE OF RADIUS (DOUBLE DATATYPE). //
    double circumference; // THE VALUE OF CIRCUMFERENCE (DOUBLE DATATYPE). //
    double area; // THE VALUE OF AREA (DOUBLE DATATYPE). //

    printf("\n enter the radius: \n"); // ENTER A VALUE OF RADIUS. //
    scanf("%lf\n",&radius); 

    circumference = 2 * PI * radius; // CALCULATING THE CIRCUMFERENCE. //
    area = PI * pow(radius, 2); // CALCULATING THE AREA. //

    printf("the given circumference of the circle is : %lf \n",circumference); // PRINTING THE CIRCUMFERENCE OF THE GIVEN CIRCLE. //
    printf("\n");
    printf("the given area of the circle is : %lf \n",area); // PRINTING THE AREA OF THE GIVEN CIRCLE. //

    return 0;
}*/

/* Q2) TO CALCULATE THE HYPOTENUSE OF A RIGHT ANGLE TRIANGLE. */
/*
1) TAKING THREE SIDES.
2) TAKING THREE ANGLES.
3) CHECKING IF THE TRIANGLE IS A RIGHT ANGLE TRIANGLE.
4) CALCULATING THE HYPOTENUSE OF THE RIGHT ANGLE TRIANGLE.
( HYPOTENUSE IS CALLED AS THE LARGEST SIDE OF A RIGHT ANGLED TRIANGLE. )*/

#include<stdio.h>
#include<math.h>

int main()
{
    double a;
    double b;
    double c;

    double A;
    double B;
    double C;
    c = 90;

    printf("enter the first edge:");
    scanf("%lf",&a);
    printf("enter the second edge:");
    scanf("%lf",&b);
    printf("enter the first vertice:");
    scanf("%lf",&A);
    printf("enter the second vertice:");
    scanf("%lf",&B);

    double esum;
    esum = pow(a, 2) + pow(b, 2);

    double sum;
    sum = A + B;

    if (sum == c)
    {
        printf("the given triangle is a right angled triangle.\n");
        /*double esum; ----------------> we can do the calculations within the conditional statement.
        esum = pow(a, 2) + pow(b, 2);*/
        c = sqrt(esum);
        printf("the hypotenuse of the right angled triangle is: %lf\n",c);
    }
    else
    {
        printf("the given triangle is not a right angle triangle.\n");
    }

    return 0;
}