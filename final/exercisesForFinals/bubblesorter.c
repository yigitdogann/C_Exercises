#include <stdio.h>

void sorter(int array[]);

int main(void){
    int myArray[]={1, 5, 6, 4, 2 ,35 , 684, 85, 98, 22};
    sorter(myArray);
    
    for(int i=0; i<10; i++){
        printf("%d ", myArray[i]);
    }
    return 0;
}

void sorter(int array[]){
    for(int i=0; i<10; i++){
        for(int j=0; j<10-1; j++){
            if(array[j]>array[j+1]){
                int hold=array[j];
                array[j]=array[j+1];
                array[j+1]=hold;
            }
        }
    }
}