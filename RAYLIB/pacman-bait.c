#include "raylib.h"

int main(void){
  //display settings//
    const int screenWidth = 1000;
    const int screenHeight = 600;
    InitWindow(screenWidth, screenHeight, "Drawing Exercises 1: PACMAN");
    SetTargetFPS(240);
  //display settings//
  
    typedef struct player{
        bool active;
        Vector2 position;
        int radius;
        Color color1;
    }player;
    
    typedef struct yem{
       bool active;
       Vector2 position;
       int radius;
       Color color;
    }yem;
    
    Rectangle block = {0};
            //block features
            block.x=500;
            block.y=500;
            block.width=20;
            block.height=100;
    int point = 0;
    int flag = 0;
    
    player pacman = {0};
            //pacman features 
            pacman.active = true;
            pacman.position.x = 100;
            pacman.position.y = 100;
            pacman.radius = 30;
            pacman.color1 = GOLD;
    //yem features
    
    yem yem1 = {0};
    
    Image image = LoadImage("C:/raylib/raylib/denemelerim/assets/background1.png");  // Load image data into CPU memory (RAM)
            Texture2D texture = LoadTextureFromImage(image);       // Image converted to texture, GPU memory (RAM -> VRAM)
            UnloadImage(image);                                    // Unload image data from CPU memory (RAM)

            image = LoadImageFromTexture(texture);                 // Load image from GPU texture (VRAM -> RAM)
            UnloadTexture(texture);                                // Unload texture from GPU memory (VRAM)

            texture = LoadTextureFromImage(image);                 // Recreate texture from retrieved image data (RAM -> VRAM)
            UnloadImage(image);
    
    while(!WindowShouldClose()){
        
        /////////////////////hareket/////////////////////
        if((IsKeyDown(KEY_A) || IsKeyDown(KEY_LEFT)) && pacman.position.x - pacman.radius> 0){
            pacman.position.x += -2;
        }
        if((IsKeyDown(KEY_D) || IsKeyDown(KEY_RIGHT)) && pacman.position.x + pacman.radius< 1000){
            pacman.position.x += +2;
        }
        if((IsKeyDown(KEY_W) || IsKeyDown(KEY_UP)) && pacman.position.y - pacman.radius> 40){
            pacman.position.y += -2;
            
        }
        if((IsKeyDown(KEY_S) || IsKeyDown(KEY_DOWN)) && pacman.position.y + pacman.radius< 600){
            pacman.position.y += +2;
        }
        
        
        if(yem1.active == 0){
            yem1.active = true;
            yem1.position.x = GetRandomValue(0, screenWidth);
            yem1.position.y = GetRandomValue(40, screenHeight);
            yem1.radius = 15;
            yem1.color = WHITE;
        }
        
        
        
        BeginDrawing();
            
            DrawTexture(texture, screenWidth/2 - texture.width/2, screenHeight/2 - texture.height/2, WHITE);
            
            /////////////////////sekil/////////////////////
            if((IsKeyDown(KEY_A) || IsKeyDown(KEY_LEFT))){
                DrawCircleSector(pacman.position, pacman.radius, 0, 150, 360, pacman.color1);
                DrawCircleSector(pacman.position, pacman.radius, 210, 360, 360, pacman.color1);
            }else if((IsKeyDown(KEY_D) || IsKeyDown(KEY_RIGHT))){
                DrawCircleSector(pacman.position, pacman.radius, 30, 330, 360, pacman.color1);
            }else if((IsKeyDown(KEY_W) || IsKeyDown(KEY_UP))){
                DrawCircleSector(pacman.position, pacman.radius, 0, 240, 360, pacman.color1);
                DrawCircleSector(pacman.position, pacman.radius, 300, 360, 360, pacman.color1);
            }else{
                DrawCircleSector(pacman.position, pacman.radius, 0, 60, 360, pacman.color1);
                DrawCircleSector(pacman.position, pacman.radius, 120, 360, 360, pacman.color1);
            }
            
            
            
            //ClearBackground(GRAY);
            DrawText("hi there!", 450, 0, 20, BLACK);
            DrawText("This is my drawing example", 360, 20, 20, BLACK);
            DrawText(TextFormat("Points: %1d", point), 800, 560, 35, RAYWHITE);
            
            //DrawCircleSector(pacman.position, pacman.radius, 30, 330, 360, pacman.color1);
            DrawLine(0, 40, 1000, 40, BLACK);
            DrawRectangle(0, 550, 20, 50, RAYWHITE);
            DrawRectangle(250, 550, 20, 50, RAYWHITE);
            DrawRectangle(block.x, block.y, block.width, block.height, MAROON);
            //DrawRectangle(500, 400, 20, 200, MAROON);
            DrawRectangle(750, 550, 20, 50, RAYWHITE);
            DrawRectangle(980, 550, 20, 50, RAYWHITE);
            
            DrawCircleV(yem1.position, yem1.radius, yem1.color);
            
                /*if(CheckCollisionCircleRec(pacman.position, pacman.radius, block) == true){
                    DrawText("Collision detected", 800, 20, 20, MAROON);
                    if(flag != 1){
                    point++;}
                    flag=1;
                }
                if(CheckCollisionCircleRec(pacman.position, pacman.radius, block) == false){
                    flag = 0;
                }*/
            
            if(CheckCollisionCircles(pacman.position, pacman.radius, yem1.position, yem1.radius)==1 && yem1.active == true){
                yem1.active= false;
                point++;
            }
            
        EndDrawing();
    }
    UnloadTexture(texture);
    CloseWindow();
    return 0;
}