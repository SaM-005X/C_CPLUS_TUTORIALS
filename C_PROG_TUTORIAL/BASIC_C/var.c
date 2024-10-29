#include<stdio.h>
int main()
{
    /* VARIABLES:- 1) ALLOCATED SPACE IN MEMORY TO STORE A VALUE.
    2) A VARIABLE'S NAME MUST BE MEANINGFUL.
    3) A VARIABLE NAME MUST BE AN ALPHABET OR A NUMBER OR A COMBINATION OF BOTH BUT WITHOUT ANY SPACES IN BETWEEN THEM OR PRESENCE OF ANY SPECIAL CHARACTER EXCEPT '_'(UNDERSCORE).
    4) WE REFER TO A VARIABLE'S NAME TO ACCESS THE STORED VALUE IT CONTSIANS.
    5) THAT VARIABLE NOW BEHAVES AS IF IT WAS THE VALUE IT CONTAINS.
    6) BUT WE NEED TO DECLARE WHAT TYPE OF DATA WE ARE STORING. 
    7) CREATING A VARIABLE IS OF TWO STEPS I) DECLARATION, II) INITIALIZATION. */
    int x; // decalaring a variable of integer datatype named as x. //
    printf("enter an integer number:");
    scanf("%d",&x); // input or initialisation //
    printf("the following number is : %d",x); // printing or displaying the following integer //
    /* therefore we can say that a variable name must be meaningful */
    return 0;
}