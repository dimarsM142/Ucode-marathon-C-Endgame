#include "header.h"

SDL_Point get_rectangle_pos (SDL_Rect rectangle) {
    SDL_Point point = { rectangle.x - rectangle.w / 2, rectangle.y - rectangle.h /2 };
    return point;
}
