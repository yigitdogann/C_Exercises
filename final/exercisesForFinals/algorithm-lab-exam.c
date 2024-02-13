//çam ağacı versiyonları
//asal sayı
//binary
//kaç basamaklı

#include <stdio.h>
/*
int main (void){
    int lenght=0;
    printf("get the lenght: ");
    scanf("%d", &lenght);
    
    for(int i=1; i<=lenght; i++){//i is current row.
        for(int j=0; j<lenght-i; j++){//j is blank counter
            printf(" ");
        }
        for(int k=0; k<(2*i)-1; k++){//k is star counter
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
*/
/*
int main(void){
    int number=0, count=0;
    printf("get number: ");
    scanf("%d", &number);
    
    for(int i=2; i<=number; i++){
        if(number%i==0){
            count++;
        }
    }
    if(count==1){
        printf("%d is a prime number", number);
    }else{
        printf("its not");
    }
    return 0;
}
*/
/*
int main(void){
    int num=0;
    printf("get number: ");
    scanf("%d", &num);//NUM IS LENGHT
    
    for(int i=1; i<=num; i++){//i is current row
        for(int j=1; j<=i-1; j++){//j is blank counter
            printf(" ");
        }
        for(int k=1; k<=(num*2)-(2*i-1); k++){//k is star counter
            printf("*");
        }
        printf("\n");
    }
    return 0;
//*********
// *******
//  *****
//   ***
//    * 
}
*/
/*
int main(void){
    long int num=0, bin=0, i=1;
    printf("get num: ");
    scanf("%ld", &num);
    
    while(num>0){
        bin= bin+(num%2*i);
        num/= 2;
        i*=10;
    }
    printf("%ld", bin);
    return 0;
}
*/
/*
int main(void){
    long int num=0, bin=0, i=1;
    printf("get num: ");
    scanf("%ld", &num);
    
    while(num>0){
        bin=bin+(num%2*i);
        num/=2;
        i*=10;
    }
    printf("%ld", bin);
    return 0;
}
*/
