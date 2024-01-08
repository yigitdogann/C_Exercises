#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 50

int main(void){
    int myArray[SIZE];
    srand(time(NULL));
    
    
    for(int i=0; i<SIZE; i++){
        myArray[i] = (rand() %500 +1);
        printf("%d ", myArray[i]);
    }
    
    for(int whole=0; whole<SIZE; whole++){
        for(int i=0; i<SIZE-1; i++){
            if(myArray[i]>myArray[i+1]){
                int hold=myArray[i];
                myArray[i]=myArray[i+1];
                myArray[i+1]=hold;
            }
        }
    }
    
    printf("\n\n");
    for(int i=0; i<SIZE; i++){
        printf("%d ", myArray[i]);
    }
    
    
    return 0;
}