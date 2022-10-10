#define MY_DEBUG 1

#include "main.h"
#include "gui.cpp"

int main() 
{
    // Initialization
    //--------------------------------------------------------------------------------------
    Rectangle screen = Rec(0.0f, 0.0f, 800.0f, 450.0f);

    SetConfigFlags(FLAG_WINDOW_RESIZABLE);
    InitWindow(screen.width, screen.height, "raylib");

    Camera2D camera = { 0 };
    camera.offset = Vec2(screen.width/2.0f, screen.height/2.0f);
    camera.target = Vec2(screen.width/2.0f, screen.height/2.0f);
    camera.rotation = 0.0f;
    camera.zoom = 1.0f;

    SetTargetFPS(60);               // Set our game to run at 60 frames-per-second
    //--------------------------------------------------------------------------------------
    // Main game loop
    while (!WindowShouldClose())    // Detect window close button or ESC key
    {
        // Update
        //----------------------------------------------------------------------------------

        // Draw
        //----------------------------------------------------------------------------------
        BeginDrawing();

            ClearBackground(RAYWHITE);

            BeginMode2D(camera);

            EndMode2D();
            
            DrawFPS(10, 10);

        EndDrawing();
        //----------------------------------------------------------------------------------
    }

    // De-Initialization
    //--------------------------------------------------------------------------------------
    CloseWindow();        // Close window and OpenGL context
    //--------------------------------------------------------------------------------------

    return 0;
}