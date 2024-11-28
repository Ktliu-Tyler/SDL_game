//
// Created by Liu KT on 2024/11/20.
//

#ifndef TOOL_H
#define TOOL_H
#include "SDL2/SDL_image.h"
#include "SDL2/SDL_mixer.h"
#include "SDL2/SDL_ttf.h"
#include "SDL2/SDL_mixer.h"
#include "iostream"
#endif //TOOL_H
//一些遊戲工具
SDL_Texture* loadTexture(const std::string& path, SDL_Renderer* renderer);// 載入圖片

