/* Q1) WRITE A PROGRAM IN C TO CHECK IF THE TWO GIVEN NUMBERS ARE DIVISIBLE BY TWO. */

/*#include<stdio.h>
int main()
{
   int x, y; // TAKING TWO NUMBERS AS INPUTS. //
   printf("enter a number: \n");
   scanf("%d",&x);
   printf("enter a number: \n");
   scanf("%d",&y);
    
   // COMPARISION BETWEEN TWO NUMBERS. //

   printf("\nthe given two numbers will be divisible by 2 if the output comes 1, otherwise 0.\n");
   printf("the output is: %d \n", (x%2==0)&&(y%2==0));

   return 0;
}*/


/* Q2) WRITE A PROGRAM IN C TO CHECK IF THE TWO GIVEN NUMBERS ARE ODD OR EVEN. */

#include<stdio.h>
int main()
{
   int x, y; // TAKING TWO NUMBERS AS INPUTS. //
   printf("enter a number:");
   scanf("%d",&x);
   printf("enter a number:");
   scanf("%d",&y);

   // COMPARISION BETWEEN TWO NUMBERS AND THEN CHECKING EACH NUMBERS IF THEY ARE ODD OR EVEN. //

   printf("1 --> EVEN AND 0 --> ODD,,,THE GIVEN 1ST NUM IS: %d \n", x%2==0);
   printf("1 --> EVEN AND 0 --> ODD,,,THE GIVEN 2ND NUM IS: %d \n", y%2==0);
   printf("THE GIVEN TWO NUMBERS ARE ODD IF THE OUTPUT IS 0, OTHERWISE 1 IF EVEN.\n");
   printf("THE GIVEN OUTPUT IS: %d \n", (x%2==0)&&(y%2==0));

   return 0;
}


/* Q3) WRITE A C PROGRAM TO PRINT THE AVERAGE OF THREE NUMBERS. */
/* Q4) WRITE A C PROGRAM TO CHECK IF THE GIVEN CHARACTER A DIGIT OR NOT. */
/* Q5) WRITE A C PROGRAM TO PRINT THE SMALLER NUMBER AMONG TWO GIVEN NUMBERS. */