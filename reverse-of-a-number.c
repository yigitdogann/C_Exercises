#include <stdio.h>

int main (void){
    printf("---REVERSE OF A NUMBER---\n");
    
    printf("Please enter a number: ");//15289
    int num=0;
    scanf("%d", &num);
    
    int revNum=0;
    
    while(num>0){
        revNum=revNum*10+num%10;
        num=num/10;
    }
    
    printf("%d", revNum);
    return 0;
}

/*revNum= (n%10)*100;
    n=n/10;
    revNum= revNum+((n%10)*10);
    n=n/10;
    revNum= revNum+(n%10);*/