#include <iostream>
#include <raylib-cpp.hpp>

int main() {
    InitWindow(600, 600, "Conway\'s Soliders");

    while(!WindowShouldClose()) {
        //

        BeginDrawing();
        
        ClearBackground(Color(23, 23, 23, 1));

        EndDrawing();
    }

    CloseWindow();

    return 0;
}
