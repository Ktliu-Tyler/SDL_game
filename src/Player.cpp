#include "../include/player.h"


Player::Player(float posx, float posy, float w, float h, float sp) {
    x = posx;
    y = posy;
    width = w;
    height = h;
    speed = sp;
    rect = new SDL_Rect {
        (int) x,
        (int) y,
        (int) width,
        (int) height
    };
}

void Player::init(float x, float y) {
    this->x = x;
    this->y = y;
}


void Player::render( SDL_Renderer* renderer) {
    rect = new SDL_Rect {
        (int) x,
        (int) y,
        (int) width,
        (int) height
    };
    // std::cout << x <<" "<< y << std::endl;
    SDL_SetRenderDrawColor(renderer, 255, 255, 255, 255);
    SDL_RenderFillRect(renderer, rect);
}

void Player::move(char dir) {
    direction = dir;
}

void Player::kinetic(float dt) {
    if(direction=='u') {
        y -= speed * vy/abs(vy)*dt;
    }else if(direction=='d') {
        y += speed * vy/abs(vy)*dt;
    }
}


Bullet::Bullet(float posx, float posy) {
    x = posx;
    y = posy;
    destroyed = false;
    rect = new SDL_Rect {
        (int) x,
        (int) y,
        (int) width,
        (int) height
    };
}

void Bullet::kinetic(float dt) {
    x += speed * dt;
    if(x > WINDOW_WIDTH) {
        destroyed = true;
    }
}

void Bullet::render(SDL_Renderer* renderer) {
    if(destroyed) {
        destroy();
    }
    rect = new SDL_Rect {
        (int) x,
        (int) y,
        (int) width,
        (int) height
    };
    SDL_SetRenderDrawColor(renderer, 255, 255, 255, 255);
    SDL_RenderFillRect(renderer, rect);
}

void Bullet::destroy() {
    SDL_Log("Bullet::destroy");
}




