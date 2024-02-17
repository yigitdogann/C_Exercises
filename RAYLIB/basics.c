#include "raylib.h"

int main(void){
    
                //***********display settings***********
    const int screenWidth=1600, screenHeight=850;
    InitWindow(screenWidth, screenHeight, "basics - one window");
    SetTargetFPS(120);
                //***********display settings***********


    int points =0;
    
    //SetWindowOpacity(0.9f);
    
                //***player look***
    typedef struct player{
        int radius;
        Vector2 center;
        Color color;
    }player;
    
    player pacman = {0};
        pacman.radius=24;
        pacman.center.x=150;
        pacman.center.y=150;
        pacman.color=DARKBLUE;
                //***player look***
    
                //***bullet***
    typedef struct damager{
        Vector2 p1;
        Vector2 p2;
        Vector2 p3;
        Color color;
    }damager;
    
    damager bullet = {0};
        bullet.p1.x=pacman.center.x+30;
        bullet.p1.y=pacman.center.y;
        bullet.p2.x=pacman.center.x;
        bullet.p2.y=pacman.center.y-15;
        bullet.p3.x=pacman.center.x;
        bullet.p3.y=pacman.center.y+15;
        bullet.color=pacman.color; 
                //***bullet***
    
    
    while(!WindowShouldClose()){
        double timer= GetTime();
        
        if((IsKeyDown(KEY_A) || IsKeyDown(KEY_LEFT)) && pacman.center.x - pacman.radius > 0){
            pacman.center.x-=5;
            bullet.p1.x-=5;bullet.p2.x-=5;bullet.p3.x-=5;
            if(IsKeyDown(KEY_LEFT_SHIFT)){
                pacman.center.x-=12;
                bullet.p1.x-=12;bullet.p2.x-=12;bullet.p3.x-=12;
            }
        }
        if((IsKeyDown(KEY_D) || IsKeyDown(KEY_RIGHT)) && pacman.center.x + pacman.radius < screenWidth){
            pacman.center.x+=5;
            bullet.p1.x+=5;bullet.p2.x+=5;bullet.p3.x+=5;
            if(IsKeyDown(KEY_LEFT_SHIFT)){
                pacman.center.x+=12;
                bullet.p1.x+=12;bullet.p2.x+=12;bullet.p3.x+=12;
            }
        }
        if((IsKeyDown(KEY_W) || IsKeyDown(KEY_UP)) && pacman.center.y - pacman.radius > 0){
            pacman.center.y-=5;
            bullet.p1.y-=5;bullet.p2.y-=5;bullet.p3.y-=5;
            if(IsKeyDown(KEY_LEFT_SHIFT)){
                pacman.center.y-=12;
                bullet.p1.y-=12;bullet.p2.y-=12;bullet.p3.y-=12;
            }
        }
        if((IsKeyDown(KEY_S) || IsKeyDown(KEY_DOWN)) && pacman.center.y + pacman.radius < screenHeight){
            pacman.center.y+=5;
            bullet.p1.y+=5;bullet.p2.y+=5;bullet.p3.y+=5;
            if(IsKeyDown(KEY_LEFT_SHIFT)){
                pacman.center.y+=12;
                bullet.p1.y+=12;bullet.p2.y+=12;bullet.p3.y+=12;
            }
        }
        
        BeginDrawing();
            
            DrawCircleSector(pacman.center, pacman.radius, 30, 330, 360, pacman.color);
            DrawText("yigit", pacman.center.x-pacman.radius, pacman.center.y-50, 22, pacman.color);
            
            if(IsKeyDown(KEY_A) || IsKeyDown(KEY_LEFT)){
                DrawCircleSector(pacman.center, pacman.radius, 0, 150, 360, pacman.color);
                DrawCircleSector(pacman.center, pacman.radius, 210, 360, 360, pacman.color);
            }if(IsKeyDown(KEY_D) || IsKeyDown(KEY_RIGHT)){
                DrawCircleSector(pacman.center, pacman.radius, 30, 330, 360, pacman.color);
            }if(IsKeyDown(KEY_W) || IsKeyDown(KEY_UP)){
                DrawCircleSector(pacman.center, pacman.radius, 0, 240, 360, pacman.color);
                DrawCircleSector(pacman.center, pacman.radius, 300, 360, 360, pacman.color);
            }if(IsKeyDown(KEY_S) || IsKeyDown(KEY_DOWN)){
                DrawCircleSector(pacman.center, pacman.radius, 0, 60, 360, pacman.color);
                DrawCircleSector(pacman.center, pacman.radius, 120, 360, 360, pacman.color);
            }if(IsKeyDown(KEY_SPACE)){
                DrawTriangle(bullet.p1, bullet.p2, bullet.p3, bullet.color);
                DrawCircle(pacman.center.x, pacman.center.y, pacman.radius/2, RED);
                
            }
            
            
            ClearBackground(LIGHTGRAY);
            
            DrawText("BEST GAME EVER", screenWidth*2/5, 0, 30, MAROON);
            DrawText(TextFormat("Your Points: %d", points), 0, 0, 30, DARKGREEN);
            DrawText(TextFormat("Time Elapsed: %.2f", timer), 0, 25, 30, DARKGREEN);
            
        EndDrawing();
        
    }
    CloseWindow();
    return 0;
}