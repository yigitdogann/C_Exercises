#include <stdio.h>

int main (void){
    printf("---PRINTING X WITH DIFFERENT SIZES---\n");
    
    int rows=0;
    //char midName[]="";
    
    
    printf("Height of your X(Will be duplicated by 2!): ");
    scanf("%d", &rows);
    
    //printf("What do you want to print inside of X?");
    //scanf("%s", &midName);
    
    
    if(rows<5){
        //UPPER BODY CODE BLOCK IS BELOW
        for(int c=1; c<=rows; c++){//c is current row counter
            for(int j=1; j<=c-1; j++){//j is start&end blank counter
                printf(" ");
            }
            printf("XX");
            for(int m=1; m<=(2*rows-2*c); m++){//m is middle blank counter
                printf(" ");
            }
            printf("XX");
            for(int j=0; j<=c-1; j++){//j is start&end blank counter
                printf(" ");
            }
            printf("\n");
        
        }
    
        //printf("%s", midName);
    
        //LOWER BODY BLOCK IS BELOW
        for(int c=rows; c>=1; c--){//c is current row counter

            for(int j=1; j<=c-1; j++){//j is start&end blank counter
                printf(" ");
            }
        
            printf("XX");
            for(int m=1; m<=(2*rows-2*c); m++){//m is middle blank counter
                printf(" ");
            }
        
            printf("XX");
            for(int j=0; j<=c-1; j++){//j is start&end blank counter
                printf(" ");
            }
        
            printf("\n");
        }
    } else if(rows<10){
        //UPPER BODY CODE BLOCK IS BELOW
        for(int c=1; c<=rows; c++){//c is current row counter
            for(int j=1; j<=c-1; j++){//j is start&end blank counter
                printf(" ");
            }
            printf("XXX");
            for(int m=1; m<=(2*rows-2*c); m++){//m is middle blank counter
                printf(" ");
            }
            printf("XXX");
            for(int j=0; j<=c-1; j++){//j is start&end blank counter
                printf(" ");
            }
            printf("\n");
        
        }
    
        //printf("%s", midName);
    
        //LOWER BODY BLOCK IS BELOW
        for(int c=rows; c>=1; c--){//c is current row counter

            for(int j=1; j<=c-1; j++){//j is start&end blank counter
                printf(" ");
            }
        
            printf("XXX");
            for(int m=1; m<=(2*rows-2*c); m++){//m is middle blank counter
                printf(" ");
            }
        
            printf("XXX");
            for(int j=0; j<=c-1; j++){//j is start&end blank counter
                printf(" ");
            }
        
            printf("\n");
        }
    } else{
            //UPPER BODY CODE BLOCK IS BELOW
        for(int c=1; c<=rows; c++){//c is current row counter
            for(int j=1; j<=c-1; j++){//j is start&end blank counter
                printf(" ");
            }
            printf("XXXX");
            for(int m=1; m<=(2*rows-2*c); m++){//m is middle blank counter
                printf(" ");
            }
            printf("XXXX");
            for(int j=0; j<=c-1; j++){//j is start&end blank counter
                printf(" ");
            }
            printf("\n");
        
        }
    
        //printf("%s", midName);
    
        //LOWER BODY BLOCK IS BELOW
        for(int c=rows; c>=1; c--){//c is current row counter

            for(int j=1; j<=c-1; j++){//j is start&end blank counter
                printf(" ");
            }
        
            printf("XXXX");
            for(int m=1; m<=(2*rows-2*c); m++){//m is middle blank counter
                printf(" ");
            }
        
            printf("XXXX");
            for(int j=0; j<=c-1; j++){//j is start&end blank counter
                printf(" ");
            }
        
            printf("\n");
        }
    }
    return 0;
}