#include <stdio.h>

int main(void){
    int n=0, move=0;
    scanf("%d", &n);//n=number of stones
    char s[n+1];
    scanf("%s", s);

    for(int i=0; i<n; i++){
        if(s[i]==s[i+1]){
            move++;
        }
    }
    
    printf("%d", move);
    return 0;
}