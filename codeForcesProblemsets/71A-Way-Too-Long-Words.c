#include <stdio.h>
#include <string.h>
 
int main(void){
    int n=0;
    char s[101];
    scanf("%d", &n);//n is number of line
    for(int i=1; i<=n; i++){
        scanf("%s", s);
        int lenght=strlen(s);
        if(lenght>10){
            printf("%c", s[0]);
            printf("%d", lenght-2);
            printf("%c\n", s[lenght-1]);
        }else{
            printf("%s\n", s);
        }
    }
    return 0;
}