//
// Created by Liu KT on 2024/11/20.
//

#include "../include/menu.h"

menu::menu(std::string path, SDL_Renderer *renderer) {
    SDL_Log("Creating menu...");
    this -> background = loadTexture(path, renderer);
    this -> renderer = renderer;
}

int menu::process_input(SDL_Event *event) {
    switch (event->type) {
        case SDL_KEYDOWN:
            if (event->key.keysym.sym == SDLK_q) {
                SDL_Log("SDL_q");
                return PLAYGROUNDID;
            }
            if (event->key.keysym.sym == SDLK_s) {
                SDL_Log("SDL_s");

            }
            if (event->key.keysym.sym == SDLK_w) {
                SDL_Log("SDL_w");

            }
            if (event->key.keysym.sym == SDLK_DOWN) {
                SDL_Log("SDL_d");
            }
        break;
    }
    return MENUID;
}

int menu::update(float deltatime) {
    return TRUE;
}

void menu::render(SDL_Renderer *renderer) {
    SDL_RenderClear(renderer);
    SDL_RenderCopy(renderer, this->background, nullptr, nullptr);
    SDL_RenderPresent(renderer);
}

menu::~menu() {
    delete this;
}
