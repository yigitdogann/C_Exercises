#include <stdio.h>

int main (void){
    printf("-ADDING_DATA_TO_A_TEXT_FILE-\n");
    
    FILE *myFile;
    char text[] = "This text will be added to the file";
    
    myFile = fopen("PUT_HERE_THE_PATH_OF_.txt", "a");//a means add mode
    
    if(myFile==NULL){
        printf("Error!");
        return 1;
    }
    
    fprintf(myFile, "%s", text);
    
    fclose(myFile);
    
    return 0;
}