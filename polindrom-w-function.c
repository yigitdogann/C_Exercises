#include <stdio.h>

int polindrom(int num);

int main(void){
    printf("--FINAL_WEEK_EXERCISES--\n");
    
    int num=0;
    printf("sayınızı girin: ");
    scanf("%d", &num);
    
    if(num==polindrom(num)){
        printf("evet öyle");
    }else{
        printf("hayır değil");
    }
    
    return 0;
}

int polindrom(int num){
    int new=0;
    
    while(num>0){
        new=new+num%10;
        num=num/10;
        
        if(num>0){
            new=new*10;
        }
        printf("%d\n", new);
    }
    return new;
}