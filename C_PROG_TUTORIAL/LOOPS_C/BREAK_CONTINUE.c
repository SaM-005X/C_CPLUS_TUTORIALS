#include<stdio.h>
int main(){

    // continue = skips the rest of the code and forces the next iteration of the loop
    // break = exists a loop/switch

    for(int i =1; i<=20; i++){
        if(i==13){
            continue;
        }

/*1
2
3
4
5
6
7
8
9
10
11
12
14
15
16
17
18
19
20
THIS IS THE OUTPUT FOR CONTINUE STATEMENT AS WE CAN SEE THE NUMBER 13 IS NOT PRESENT IN THE OUTPUT*/
            
            // if(i==13){
            //     break;
            // }

/*1
2
3
4
5
6
7
8
9
10
11
12
THIS IS THE OUTPUT FOR BREAK STATEMENT AS WE CAN SEE THAT AFTER 12 THE LOOP BREAKS AND THE REST OF THE CODE IS NOT EXECUTED.*/
        
        printf("%d\n",i);
    }
    
    return 0;
}