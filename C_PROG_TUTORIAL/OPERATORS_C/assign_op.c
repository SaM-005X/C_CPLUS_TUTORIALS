#include<stdio.h>
#include<math.h>

int main()
{
    /* augmented assigment operators = used to replace a statement where an operator 
takes a variable as one of its arguments and then assigns the result back to the same 
variable, for eg; x = x + 1 --> x += 1 (here it is increased by one). */ 

    int x, y, z;
    printf("enter a number: \n");
    scanf("%d",&x);
    printf("enter a number: \n");
    scanf("%d",&y);

    x += y;

    //x -= y;

    //x *= y;

    //x %= y;

    //x /= y;

    printf("%d \n",x);  /* if each line above except the statement which needs to be executed is 
    not turned into a comment then the flow of code will be from top to bottom with each time a statement
    being executed and passing the output as input for the following statement. */ 

    /*z += x;  /**/

    /*z += y;

    /*z -= x;  /**/

    //z -= y;

    /*z *= x;  /**/

    //z *= y;

    /*z %= x;  /**/

    //z %= y;

    /*z /= x;  /**/

    //z /= y;

    // printf("%d, %d \n", z, x); //

    // printf("%d, %d \n", z, y); //

    /*z += x += y;  /**/

    /*z -= x -= y;  /**/

    /*z *= x *= y;  /**/

    /*z %= x %= y;  /**/

    /*z /= x /= y;  /**/

    // printf("%d, %d, %d \n", z, x, y); //
    

    // ASSIGNMENT, RELATIONAL AND LOGICAL OPERATOR //

    // ">", ">=", "<", "<=", "==", "!=" //
    // "AND (&&)", "OR (||)", "NOT (!)" //

    int a, b;

    printf("enter a number: \n");
    scanf("%d",&a);
    printf("enter a number: \n");
    scanf("%d",&b);

    // RELATIONAL OPERATIONS // // only intger datatypes can be used for relational operators and not float datatype. //

    printf("%d \n", a < b);
    printf("%d \n", a > b);
    printf("%d \n", a <= b);
    printf("%d \n", a >= b);
    printf("%d \n", a == b);
    printf("%d \n", a != b);

    // LOGICAL OPERATIONS // // only integer datatype should be used while dealing with logical operators. //

    printf("%d \n", (a<b)&&(a>b));
    printf("%d \n", (a<b)||(a>b));
    printf("%d \n", !(a==b));

    return 0;
}
