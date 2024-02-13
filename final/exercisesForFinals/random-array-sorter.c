#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 15

void random(int array[]);
void sorter(int array[]);

int main(void){
    int myArray[SIZE];
    srand(time(NULL));
    
    random(myArray);//filled randomly.
    sorter(myArray);//sorted them.
    
    for(int i=0; i<SIZE; i++){//printed low-to-high.
        printf("%d ", myArray[i]);
    }
    return 0;
}

void random(int array[]){//random number generator for array filling
    for(int i=0; i<SIZE; i++){
        array[i]=rand()%500+1;
    }
}
void sorter(int array[]){//bubble sorter
    for(int i=0; i<SIZE; i++){
        for(int j=0; j<SIZE-1; j++){
            if(array[j]>array[j+1]){
                int hold=array[j];
                array[j]=array[j+1];
                array[j+1]=hold;
            }
        }
    }
}