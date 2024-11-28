//
// Created by Liu KT on 2024/11/21.
//

#ifndef PLAYER_H
#include <SDL.h>
#include "constants.h"
#include "tool.h"
#define PLAYER_H
#endif //PLAYER_H

class Player { // 玩家 class
public:
    Player(float x, float y, float width ,float height, float speed);
    SDL_Rect *rect;
    void init(float x, float y);
    void render(SDL_Renderer* renderer);
    void move(char dir);
    void kinetic(float dt);
    void shoot();
    float x, y, vx=100, vy=100;
    float speed;
    float width;
    float height;
    SDL_Renderer* renderer;
    char direction = 's';
};


class Bullet {
    public:
    Bullet(float posx, float posy);
    SDL_Rect *rect;
    void init(float x, float y);
    void render(SDL_Renderer* renderer);
    void kinetic(float dt);
    void destroy();
    float x, y;
    bool destroyed = false;
private:
    float vx=100, vy=100;
    float speed=PLAYER_SPEED;
    float width=20, height=20;
};

