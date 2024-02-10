#include <stdio.h>
#include <stdlib.h>

int check();
void screen();
void marking(char mark);

char square[3][3]={{'1', '2', '3'}, {'4', '5', '6'}, {'7', '8', '9'}};
int choice, player;

int main(void){
    int i=0;
    
    char mark;//x or o for labeling.
    player= 1;

/*used do-while loop, cuz' i want to display the game screen before every move
and this loop will execute while my i value is equal to -1 (it means in progress)*/
    do{
        screen();
        //decide the player
    }while(i == -1){
        
    }
    
    return 0;
}

int check(){//1 for completed, -1 for in progress, 0 for over with no result
    int returnValue= 0;
    if(square[0][0]==square[0][1]&&square[0][1]==square[0][2]){
        returnValue= 1;//horizontal
    }else if(square[1][0]==square[1][1]&&square[1][1]==square[1][2]){
        returnValue= 1;//horizontal
    }else if(square[2][0]==square[2][1]&&square[2][1]==square[2][2]){
        returnValue= 1;//horizontal
    }else if(square[0][0]==square[1][0]&&square[1][0]==square[2][0]){
        returnValue= 1;//vertical
    }else if(square[0][1]==square[1][1]&&square[1][1]==square[2][1]){
        returnValue= 1;//vertical
    }else if(square[0][2]==square[1][2]&&square[1][2]==square[2][2]){
        returnValue= 1;//vertical
    }else if(square[0][0]==square[1][1]&&square[1][1]==square[2][2]){
        returnValue= 1;//diagonal
    }else if(square[0][2]==square[1][1]&&square[1][1]==square[2][0]){
        returnValue= 1;//diagonal
    }else if(square[0][0]!='1'&&square[0][1]!='2'&&square[0][2]!='3'&&
            square[1][0]!='4'&&square[1][1]!='5'&&square[1][2]!='6'&&
            square[2][0]!='7'&&square[2][1]!='8'&&square[2][2]!='9'){
        returnValue= 0;
    }else{
        returnValue= -1;
    }
    return returnValue;
}

void marking(char mark){//this funct. labels our selection to its place.
    if(choice==1 && square[0][0]=='1'){
        square[0][0]=mark;
    }else if(choice==2 && square[0][1]=='2'){
        square[0][1]=mark;
    }else if(choice==3 && square[0][1]=='3'){
        square[0][2]=mark;
    }else if(choice==4 && square[0][1]=='4'){
        square[1][0]=mark;
    }else if(choice==5 && square[0][1]=='5'){
        square[1][1]=mark;
    }else if(choice==6 && square[0][1]=='6'){
        square[1][2]=mark;
    }else if(choice==7 && square[0][1]=='7'){
        square[2][0]=mark;
    }else if(choice==8 && square[0][1]=='8'){
        square[2][1]=mark;
    }else if(choice==9 && square[0][1]=='9'){
        square[2][2]=mark;
    }else{
        printf("Invalid Move!");
        player--;
    }
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


/*day1- tryna figure the algorithm out.*/
/*day2- completed display funct & marking funct. but its not gonna work with loop
so i have to replace it with a lot of if-else statements.*/
/*day2 later- completed every function with no errors.*/





/*void marking(char mark){//this funct. labels our answer to the board.
    char a=1; int b=1;
    
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            if(choice==(b) && (square[i][j]==a)){
                square[i][j]=mark;
            }else
        }
        a++; b++;
    }
}*/