#include <stdio.h>

int main (void){
    printf("-READING_DATA_FROM_A_TEXT_FILE-\n");
    
    FILE *myFile = fopen("PUT_HERE_THE_PATH_OF_.txt", "r");//r means only read mode.
    
    if(myFile == NULL){
        printf("Empty file.");
        return 1;
    }
    
    char characters;
    
    while((characters=fgetc(myFile)) != EOF){
        printf("%c", characters);
    }
    
    fclose(myFile);
    
    return 0;
}