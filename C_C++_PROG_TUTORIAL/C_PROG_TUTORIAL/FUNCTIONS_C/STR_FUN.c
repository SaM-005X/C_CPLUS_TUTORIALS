// STRING FUNCTIONS:-> 

#include<stdio.h>
#include<string.h>

int main(){

    char string1[] = "SAMRAT";
    char string2[] = "sengupta";

    // string functions and their functionality:->

    //strlwr(string1);  // -> "samrat", converts a string to lowercase.                  
    //strupr(string2);  // -> "SENGUPTA", converts a string to uppercase.
    //strcat(string1, string2);  // -> "SAMRATsengupta", appends string2 to end of string1.
    //strncat(string1, string2, 1);  // -> "SAMRATs", appends n characters from string2 to string1.
    //strcpy(string1, string2);  // -> "sengupta", copy string2 to string1.
    //strncpy(string1, string2, 2);  // -> "seMRAT", copy n characters of string2 to string1.

    //strset(string1, '?');  // -> "??????" sets all characters of a string to a given character.
    //strnset(string1, 'x', 1);  // -> "xAMRAT", sets first n characters of a string to a given character.
    //strrev(string1);  // -> "TARMAS", reverses a string.

    //int result = strlen(string1);  // -> "6", returns string length as integer.
    //int result = strcmp(string1, string2);  // "these strings are not same", string compares all the characters.
    //int result = strcmp(string1, string2, 1);  // -> "these strings are same", string compare n characters.
    //int result = strcmpi(string1, string2);  // -> "these strings are not same.", string compare all (ignore case).
    //int result = strnicmp(string1, string2, 1);  // -> "these strings are same.", string compare n characters (ignore case).

    printf("%s", string1);

    /*if(result == 0){
        printf("these strings are same.");
    }
    else{
        printf("these strings are not same.");
    }*/

    return 0;
}