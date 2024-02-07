#include <stdio.h>

int main(void){
    printf("---> 2D_Arrays <---\n\n");
//just tryna learn how it works.

////////////////HOW TO INITIALIZE////////////////
    int a[4][5];
/*this basically means a matrix that has 4 rows & 5 columns.
so yea, we have 20 elements in this array of course.*/

    int b[2][3]={1, 2, 3, 4, 5, 6};
/*first array with 3 elements has 1-2-3 values at[0][1][2]
second array with 3 elements has 4-5-6 values at[0][1][2]*/
    
    int c[2][3]={{1, 2, 3}, {4, 5, 6}};
/*also we can give values like this notation.
and this one is more clear to understand.*/

//////////////////HOW TO PRINT//////////////////
/*firstly, we need to know that we are working on 2 dimensions.
hence we cannot use just one loop to print all of the elements*/

    int myArray[2][4]={{1, 2, 3, 4}, {5, 6, 7, 8}};
    for(int i=0; i<2; i++){//i is rows.
        printf("\t");
        for(int j=0; j<4; j++){//j is columns.
            printf("%d ", myArray[i][j]);
        }
        printf("\n");
    }
    return 0;
}