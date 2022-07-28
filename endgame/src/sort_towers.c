#include "header.h"

void sort_towers(tower_t *placedrectanglepos, SDL_Texture *placedtower[PLACEDTOWERCUNT], selected_rect_t selectedRect) {
    tower_t *placedrectangle;
    SDL_Texture *placedtow;
    for (int i = 0; i < PLACEDTOWERCUNT-1; i++) {
        if (selectedRect.i != i &&
            placedtower[i] && placedtower[i+1] &&
            placedrectanglepos[i].y > placedrectanglepos[i+1].y) {
            placedrectangle = &placedrectanglepos[i];
            placedrectanglepos[i] = placedrectanglepos[i+i];
            placedrectanglepos[i+1] = *placedrectangle;
            placedtow = placedtower[i];
            placedtower[i] = placedtower[i+1];
            placedtower[i+1] = placedtow;
        }
    }
}
