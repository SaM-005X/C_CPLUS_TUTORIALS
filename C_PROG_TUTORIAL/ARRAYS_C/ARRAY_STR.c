// this is "ARRAY OF STRINGS."

#include<stdio.h>
#include<string.h>

int main(){

    char cars[][10]={"mustang","corvette","camaro"};

    // cars[0] = "tesla";   
    /* --> this will not change the first pstion in the cas postion,
    as  arrays are immutable. */

    strcpy(cars[0],"tesla");  /*but this will copy the value of the first postion as tesla*/

    for(int i =0; i<sizeof(cars)/sizeof(cars[0]); i++){  // printing the values of the array .
        printf("%s\n",cars[i]);
    }
    return 0;
}
