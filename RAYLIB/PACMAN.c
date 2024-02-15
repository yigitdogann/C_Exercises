#include "raylib.h"

int main(void){
  //display settings//
    const int screenHeight = 600;
    const int screenWidth = 1000;
    InitWindow(screenWidth, screenHeight, "Drawing Exercises 1: PACMAN");
    SetTargetFPS(60);
  //display settings//
  
    typedef struct player{
        bool active;
        Vector2 position;
        int radius;
        Color color1;
    }player;
    
    player pacman = {0};
            //pacman features 
            pacman.active = true;
            pacman.position.x = 100;
            pacman.position.y = 100;
            pacman.radius = 30;
            pacman.color1 = YELLOW;
    
    
    while(!WindowShouldClose()){
        if((IsKeyDown(KEY_A) || IsKeyDown(KEY_LEFT)) && pacman.position.x - pacman.radius> 0){
            pacman.position.x += -5; 
        }
        if((IsKeyDown(KEY_D) || IsKeyDown(KEY_RIGHT)) && pacman.position.x + pacman.radius< 1000){
            pacman.position.x += +5; 
        }
        if((IsKeyDown(KEY_W) || IsKeyDown(KEY_UP)) && pacman.position.y - pacman.radius> 0){
            pacman.position.y += -5;
        }
        if((IsKeyDown(KEY_S) || IsKeyDown(KEY_DOWN)) && pacman.position.y + pacman.radius< 600){
            pacman.position.y += +5;
        }
        
        BeginDrawing();
            
            ClearBackground(LIGHTGRAY);
            DrawText("hi there!", 450, 0, 20, BLACK);
            DrawText("This is my drawing example", 360, 20, 20, BLACK);
            
            DrawCircleSector(pacman.position, pacman.radius, 30, 330, 0, pacman.color1);
            
        EndDrawing();
    }
    CloseWindow();
    return 0;
}