#include "header.h"

void ocuppyarray (int array[ARRAYW][ARRAYH], SDL_Point mousePos, int selectedRect) {
    int val = selectedRect + 2;
    array[(int)(((float)mousePos.y + GRID_CELL / 2 + 2) / GRID_CELL)]
         [(int)(((float)mousePos.x + GRID_CELL / 2 + 2) / GRID_CELL)] = val;
    array[(int)(((float)mousePos.y + GRID_CELL / 2 + 2) / GRID_CELL)]
         [(int)(((float)mousePos.x - GRID_CELL / 2 - 2) / GRID_CELL)] = val;
    array[(int)(((float)mousePos.y - GRID_CELL / 2 - 2) / GRID_CELL)]
         [(int)(((float)mousePos.x + GRID_CELL / 2 + 2) / GRID_CELL)] = val;
    array[(int)(((float)mousePos.y - GRID_CELL / 2 - 2) / GRID_CELL)]
         [(int)(((float)mousePos.x - GRID_CELL / 2 - 2) / GRID_CELL)] = val;
}
