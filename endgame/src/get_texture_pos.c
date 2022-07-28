#include "header.h"

SDL_Point get_texture_pos (SDL_Rect texture) {
    SDL_Point point = { texture.x - texture.w / 2, texture.y - texture.h /2 };
    return point;
}
