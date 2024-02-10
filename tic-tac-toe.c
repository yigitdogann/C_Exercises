#include <stdio.h>
#include <stdlib.h>

int check();
void screen();
void marking(char mark);

char square[3][3]={{'1', '2', '3'}, {'4', '5', '6'}, {'7', '8', '9'}};
int choice, player;

int main(void){
    screen();
    
    return 0;
}

int check(){
    
    
}

void screen(){//this funct. just prints the game board.
    printf("\nTIC TAC TOE GAME <----\n\n");
    printf("\tPlayer 1 (X)  -  Player 2 (O)\n\n");
    
    printf("\t       |       |       \n");
    printf("\t   %c   |   %c   |   %c   \n", square[0][0], square[0][1], square[0][2]);
    printf("\t_______|_______|_______\n");
    
    printf("\t       |       |       \n");
    printf("\t   %c   |   %c   |   %c   \n", square[1][0], square[1][1], square[1][2]);
    printf("\t_______|_______|_______\n");
    
    printf("\t       |       |       \n");
    printf("\t   %c   |   %c   |   %c   \n", square[2][0], square[2][1], square[2][2]);
    printf("\t       |       |       \n");
}

void marking(char mark){//this funct. labels our answer to the board.
    char a=1; int b=1;
    
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            if(choice==(b) && (square[i][j]==a)){
                square[i][j]=mark;
            }else
        }
        a++; b++;
    }
}
/*d1- tryna figure the algorithm out.*/
/*d2- completed display funct & marking funct. but its not gonna work with loop
so i have to replace it with a lot of if-else statements.*/