#include <stdio.h>

int main(){
    //we'll get up to 10^18 length input.
    long long int n;
    scanf("%lld", &n);
    
    int count=0;
    while(n>0){
        int digit;
        
        //check each digit, least magnificant to most magnificant.
        digit = n%10;
        if(digit==4 || digit ==7){
            count++;
        }
        
        //eliminate the last digit.
        n /= 10;
    }
    
    if(count == 4 || count == 7)
        printf("YES");
    else
        printf("NO");
    
    return 0;
}
