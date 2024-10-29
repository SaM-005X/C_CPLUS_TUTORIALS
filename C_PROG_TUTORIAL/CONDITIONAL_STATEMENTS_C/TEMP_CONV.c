// temperature conversion program. //

// example 1:->

// #include<stdio.h>
// #include<ctype.h>

// int main(){

//     char unit;
//     float temp;
    
//     printf("\nis the temperature in (F) or (C)?: ");
//     scanf("%c", &unit);

//     unit = toupper(unit);

//     if(unit == 'C'){
//         printf("\nEnter the temp in celsius: ");
//         scanf("%f", &temp);
//         temp = (temp * 9 / 5) + 32;
//         printf("\nThe temp in farenheit is: %.1f", temp);
//     }
//     else if(unit == 'F'){
//         printf("\nEnter the temp in farenheit: ");
//         scanf("%f", &temp);
//         temp = ((temp - 32) * 5) / 9;
//         printf("\nThe temp in celcius is: %.1f", temp);
//     }
//     else{
//         printf("\n%c is not a valid unit of measurement");
//     }
// }

// an alternative example using functions. //

#include <stdio.h>

void convertToCelsius(float fahrenheit) {
    float celsius = (fahrenheit - 32) * 5.0/9.0;
    printf("%.2f Fahrenheit is %.2f Celsius\n", fahrenheit, celsius);
}

void convertToFahrenheit(float celsius) {
    float fahrenheit = (celsius * 9.0/5.0) + 32;
    printf("%.2f Celsius is %.2f Fahrenheit\n", celsius, fahrenheit);
}

int main() {
    float temp;
    char unit;

    printf("Enter temperature (e.g. 32F, 100C): ");
    scanf("%f%c", &temp, &unit);

    if (unit == 'F' || unit == 'f') {
        convertToCelsius(temp);
    } else if (unit == 'C' || unit == 'c') {
        convertToFahrenheit(temp);
    } else {
        printf("Invalid input.\n");
    }

    return 0;
}
