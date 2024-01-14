#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 15

void randGenerator(int array[]);
void sorter(int array[]);

int main(void){
    srand(time(NULL));
    
    int myArray[SIZE];
    
    randGenerator(myArray);
    sorter(myArray);
    
    for(int i=0; i<SIZE; i++){
        printf("%d ", myArray[i]);
    }
   
    return 0;
}

void randGenerator(int array[]){
    for(int i=0; i<SIZE; i++){
        array[i]=rand() %500 + 1;
    }
    /* 
    for(int i=0; i<SIZE; i++){
        printf("%d ", array[i]);
    }
    printf("\n");
    */
}

void sorter(int array[]){
    for(int i=0; i<SIZE; i++){
        for(int j=0; j<SIZE-1; j++){
            if(array[j]>array[j+1]){
                int hold=array[j];
                array[j]=array[j+1];
                array[j+1]=hold;
            }
        }//I MADE BUBBLE SORTER FOR THIS 
    }//if left is higher, put right's value in left.
}//then put right the value of left's saved value.