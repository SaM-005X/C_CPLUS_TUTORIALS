/* DIFFERENT TYPES OF DATA TYPES:- */
#include<stdio.h>
#include<stdbool.h>
int main()
{
    /*int a; // integer type of data, default size is 4 bytes (-2,147,483,648 to +2,147,648,647), use "%d" for calling. //
    printf("enter a number: \n");
    scanf("%d",&a);
    printf("the given number is %d \n", a); // "long int" can also be written as "int"*/

    /*unsigned int b; // unsigned integer datatype, default size is 4 bytes (0 to +4,294,967,295), use "%u" for calling. //
    printf("enter an integer number: \n");
    scanf("%u",&b);
    printf("the given value of the integer is: %u \n",b);*/
    
    /*char c='a'; // character datatype, stores single character only, use "%c" for calling. //
    printf("the given single character is: %c \n",c);*/

    /*char d[]="bro"; // array of characters, stores more than a single character, use "%s" for calling. //
    printf("the given multiple character string : %s \n",d);*/

    /*float e; // float datatype (decimal), 4 bytes (32 bits of precision), 6-7 digits can be stored, use "%f" for calling //
    printf("enter the floating decimal value: \n");
    scanf("%f",&e);
    printf("the given float decimal value is: %f \n",e); // it will print/display the float value. //
    printf("the given float decimal value with least precision is: %0.10f \n",e); // specifying the digits upto which the user wants to see/display, use "%0.10f" here 0.10 defines the number of digits i.e, 10 and f is the format specifier, when the entered number exceeds than 6-7 digits after decimal the rest of the decimal value after 6-7 digits will be random or garbage. //*/
    
    /*double f; // double float datatype (stores more digits after decimal points than float), 8 bytes (64 bits of precision ), 15-16 digits can be stored, use "%lf" for calling. //
    printf("enter a double value: \n");
    scanf("%lf",&f);
    printf("the given double float value is: %lf \n",f); // it will only show 6-7 digits fter decimal. //
    printf("the highest precised double float number is: %0.10lf \n",f); // here it will show accurate 10 digits after the decimal. //*/
    
    /*bool g; // boolean datatype, 1 byte (true/false), use "%d" for calling. //
    printf("enter a boolean value: \n");
    scanf("%d",&g);
    printf("%d \n",g); // when the boolean is user defined it automatically gives 0 as its default value if the user input is either "true" or "false", but if it is an integer the the following integer will be displayed. //*/
    
    /*bool h=true;
    bool i=false;
    printf("%d\n%d\n",h,i); // prints/displays 1 and 0. //*/

    /*char j=65; // signed character datatype, finding out ascii value of a decimal, 1 byte (-128 to +127), use "%d" for calling an integer value and "%c" for calling the ascii value of the character. //
    printf("the given character's value in integer is: %d \n",j); // will print/display the integer value of the character y. //
    printf("the given character's value in ascii is: %c \n",j); // will print/display the ascii value of the character y. //*/

    /*unsigned char k=255; // unsigned character datatype, at 255 the value returned is null (no value is displayed), 1 byte (0 to +255), if the user input exceeds 255 or any negative number then the out put will give an error with resetting the value of the unsigned char to "0", use "%d" for integer and "%c" for ascii character. //
    printf("the given value of the unsigned character in integer is: %d \n",k);
    printf("the given value of the unsigned character in ascii is: %c \n",k);*/

    /*short int l; // short integer datatype, 2 bytes (-32,768 to +32,767), use "%d" for calling the integer value. // 
    printf("enter the value of short integer: \n"); // if the input exceeds +32,767 then the value will be reset to -32,768 as output. //
    scanf("%d",&l);
    printf("the value of the short integer is: %d \n",l); // short int can also be written as simply "short". //*/ 
    
    /*unsigned short int m; // unsigned short integer datatype, 2 bytes (0 to +65,535), use "%d" for calling the integer value. //
    printf("enter the value of the unsigned short integer: \n"); // if the input exceeds +65,535 the the value will be reset to "0" as output. //
    scanf("%d",&m);
    printf("the given value of the unsigned short integer is: %d \n",m); // can also be written as "unsigned short". //*/

    /*long long int n; // long long integer datatype, 8 bytes (-9 quintillion to +9 quintillion), use "%lld" for calling. //
    printf("enter a number: \n");
    scanf("%lld",&n);
    printf("the given value of the long long integer is: %lld \n",n);*/

    /*unsigned long long int o; // unsigned long long integer datatype, 8 bytes (0 to +18 quintillion), use "llu" for calling. //
    printf("enter a number: \n");
    scanf("%llu",&o);
    printf("the given value of the unsigned long long integer value is: %llu \n",o);*/

    // SIZE OF EACH DATATYPE MENTIONED ABOVE DISPLAYED:- //

    /*printf("Size of char: %lu byte\n", sizeof(char));*/

    /*printf("Size of short: %lu bytes\n", sizeof(short));*/

    /*printf("Size of int: %lu bytes\n", sizeof(int));*/

    /*printf("Size of long: %lu bytes\n", sizeof(long));*/

    /*printf("Size of long long: %lu bytes\n", sizeof(long long));*/

    /*printf("Size of float: %lu bytes\n", sizeof(float));*/

    /*printf("Size of double: %lu bytes\n", sizeof(double));*/

    /*printf("Size of long double: %lu bytes\n", sizeof(long double));*/

    /*printf("Size of void*: %lu bytes\n", sizeof(void*));*/

    return 0;
}