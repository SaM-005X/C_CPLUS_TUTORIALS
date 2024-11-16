// BUBBLE SORT ALGORITHM:->
// WITH CHARACTER ARRAY ALSO.

#include<stdio.h>


void sortarray(int array[], int size){
// void sortarray(char array[], int size){
        for(int i = 0; i < size - 1; i++){
            for(int j = 0; j < size - i - 1; j++){
                if(array[j] > array[j+1]){
                    int temp = array[j];
                    array[j] = array[j+1];
                    array[j+1] = temp;
                }
            }
        }
    // }
    }   

void printarray(int array[], int size){
// void printarray(char array[], int size){
        for(int i = 0; i < size; i++){
            printf("%d ", array[i]);
            // printf("%c ", array[i]);
        }
        printf("\n");
    // }
    }


int main(){

    int array[] = {9,1,8,2,7,3,6,4,5};
    // char array[10] = {'F','E','D','C','B','A'};  // single character must be within single quotation ''.
    int size = sizeof(array)/sizeof(array[0]);

    sortarray(array, size);
    printarray(array, size);

    return 0;
}