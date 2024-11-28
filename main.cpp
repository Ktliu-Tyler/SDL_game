#include <iostream>
#include <SDL.h>
#include <SDL2/SDL_image.h>
#include <SDL2/SDL_ttf.h>
#include "SDL_lib/graphics.h"
#include "include/engine.h"
#include "SDL_lib/SDL_bgi.h"
#include <SDL2/SDL_mixer.h>
// 主程式 由game_is_running判斷是否關閉遊戲
int main(int argc, char *argv[]) {
    game_is_running = initialize_window();
    setup();
    while (game_is_running) {
        // SDL_Log("Game is running...");
        process_input();
        game_is_running = update();
        render();
    }
    destroy_window();
    return 0;
}