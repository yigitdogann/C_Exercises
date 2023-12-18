#include <stdio.h>
#include <string.h>

int main(void){
    char nick[101];
    scanf("%s", nick);
    int check=0;

    for (int i=0; i<(strlen(nick)); i++){//i controls
        for(int j=0; j<(strlen(nick)); j++){//j gets controlled
            if(!(i==j)){
                if(nick[i]==nick[j]){
                    check++;
                }
            }
        }
    }
    if((strlen(nick)-(check-(check/2)))%2==0){//different chars
        printf("CHAT WITH HER!");
    }else{
        printf("IGNORE HIM!");
    }
    return 0;
}