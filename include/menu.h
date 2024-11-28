//
// Created by Liu KT on 2024/11/20.
//

#ifndef MENU_H
#include <iostream>
#include "constants.h"
#include "tool.h"
#include <string>

#define MENU_H
#endif //MENU_H


class menu {// Menu class
    public:
    SDL_Texture *background = nullptr; // 背景
    SDL_Renderer *renderer = nullptr; // 渲染器
    int update(float deltatime);
    int process_input(SDL_Event *event);
    void render(SDL_Renderer *renderer);
    menu(std::string path, SDL_Renderer* renderer);
    ~menu();
};




