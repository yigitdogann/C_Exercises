#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 150

int numGenerator(void);
void isPalindrome(int array[]);

int main(void){
    printf("--PALINDROME_FINDER--\n");
    srand(time(NULL));
    
    int myArray[SIZE];
    
    for(int i=0; i<SIZE; i++){
        myArray[i]=numGenerator();
    }
    
    isPalindrome(myArray);
    
    //////////////////////////////CHECKER
    /*for(int i=0; i<SIZE; i++){
        printf("%d) %d\n", i+1, myArray[i]);
    }*/

    return 0;    
}

int numGenerator(void){
    int num= 0;
    num= (rand() %1000 +1);
    return num;
}

void isPalindrome(int array[]){
    int new= 0;
    for(int i=0; i<SIZE; i++){
        while(array[i]>0){
            new= new*10 + array[i]%10;
            array[i]= array[i]/10;
        }
        if(new==array[i]){
            printf("%d is palindrom", new);
        }
    }
}