#include <stdio.h>


void myFunction(){
        printf("\n\tThis is my first ever function in C and im so happy about it.\n\n");
    }

void idFunction(char name[], int age, char job[]){
    printf("\tHi there! My name is %s, and I am just a %d years old %s.\n\n", name, age, job);
}

void printVertical(int myNums[5]){
    for(int i=0; i<5; i++){
        printf("\t%d\t\t\t\t%d\n", myNums[i], myNums[i]);
    }
}

int squareFinder(int number){
    return number*number;
}

int main (void){
    printf("---FUNCTION_LEARNING_PAGE---\n");
    
    myFunction();
    
    idFunction("yigit", 20, "student");
    
    
    int myNums[5]={1, 2, 3, 4, 5};
    printVertical(myNums);
    
    int num=0;
    printf("\n\nEnter your number for calculation: ");
    scanf("%d", &num);
    printf("\n\t ---> %d is the square of %d <---\n", squareFinder(num), num);
    
    return 0;
}