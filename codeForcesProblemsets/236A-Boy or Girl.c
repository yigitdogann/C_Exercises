#include <stdio.h>
#include <string.h>

int main() {
    static char str[101]; //each index is '\0', thanks to static
    fgets(str, 101, stdin); //get the text input
    int length = strlen(str) - 1; //lenth of text
    
    int distinct = length;
    
    //check for a letter if there's any copy
    for(int i=0; i<length-1; i++){ //pick a letter
        
        for(int j=i+1; j<length; j++){ //search copy
            if(str[i] == str[j]){
                distinct--;
                break;
            }
        }
    }
    
    if(distinct%2==0){
        printf("CHAT WITH HER!");
    }else{
        printf("IGNORE HIM!");
    }
    
	return 0;
}
