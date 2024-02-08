/*
all of these line of codes are belong to me and i'm writing
through my mind. like what i remember about question and answer.
numbers & function names are randomly selected for showing the example.
current time, one day after exam, 16/01/2024 - 10:50am
*/

//WHAT IS THE OUTPUT?

#include <stdio.h>

void mystery(int arr[], int i, int j);

int main (void){
    int anyArray[10]={6, 5, 9, 4, 7, 3, 2, 7, 8, 0};
    int i=0, j=9;
    printf("Before:\n");
    for(int i=0; i<10; i++){
        printf("%d ", anyArray[i]);
    }
    printf("\n");
    printf("After:\n");
    
    mystery(anyArray, i, j);
    
    for(int i=0; i<10; i++){
        printf("%d ", anyArray[i]);
    }
    return 0;
}

void mystery(int arr[], int i, int j){
    if(j<i){
        return;
    }
    int temp=arr[i];
    arr[i]=arr[j];
    arr[j]=temp;
    mystery(arr, i+1, j-1);
}