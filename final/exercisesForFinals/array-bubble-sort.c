#include <stdio.h>
#define SIZE 5

void sorter(int sorted[]);

int main(void){
    
    int array[SIZE];
    printf("get %d numbers:\n", SIZE);
    for(int i=0; i<SIZE; i++){
        scanf("%d", &array[i]);
    }
    
    sorter(array);
    
    for(int i=0; i<SIZE; i++){
        printf("%d ", array[i]);
    }
    
    return 0;
}

void sorter(int sorted[]){
//////BUBBLE SORT//////
    for(int i=0; i<SIZE; i++){
        for(int j=0; j<SIZE-1; j++){
            if(sorted[j]>sorted[j+1]){
                int hold=0;
                hold=sorted[j+1];
                sorted[j+1]=sorted[j];
                sorted[j]=hold;
            }
        }
    }
}