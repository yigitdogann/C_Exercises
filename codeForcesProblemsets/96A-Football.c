#include <stdio.h>
#include <string.h>

int main(){
    static char str[101];
    fgets(str, 101, stdin); //get string and pass to the str array.
    str[strcspn(str, "\n")] = '\0'; //find newline char & replace with ending.
    
    
    int count0=0, count1=0;
    for(int i=0; i<strlen(str); i++){
        
        if(str[i]==0){
            
            //if 0, check next 6 if they're also zero.
            for(int j=i; j<i+7; j++){
                if(str[i]==str[j])
                    count0++;
            }
            
            //if counter doesn't hit 7, then reset it.
            if(!(count0 >= 7)){
                count0=0;
            }
            
        }else{
            
            //if 1, check next 6 if they're also one.
            for(int j=i; j<i+7; j++){
                if(str[i]==str[j])
                    count1++;
            }
            
            //if counter doesn't hit 7, then reset it.
            if(!(count1 >= 7)){
                count1=0;
            }
        }
    }
    
    
    //check counters, if they weren't re-arranged to zero, then we found.
    if(count1!=0){
        printf("YES");
    }else if(count0!=0){
        printf("YES");
    }else{
        printf("NO");
    }
    
    return 0;
}
