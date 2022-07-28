#include "header.h"

bool getboundaries (int array[ARRAYW][ARRAYH], SDL_Point mousePos, int event_type) {
    switch (event_type) {
        case SDL_MOUSEMOTION:
            if (array[(int)(((float)mousePos.y + GRID_CELL / 2 + 2) / GRID_CELL)]
                [(int)(((float)mousePos.x + GRID_CELL / 2 + 2) / GRID_CELL)] ||
                array[(int)(((float)mousePos.y + GRID_CELL / 2 + 2) / GRID_CELL)]
                [(int)(((float)mousePos.x - GRID_CELL / 2 - 2) / GRID_CELL)] ||
                array[(int)(((float)mousePos.y - GRID_CELL / 2 - 2) / GRID_CELL)]
                [(int)(((float)mousePos.x + GRID_CELL / 2 + 2) / GRID_CELL)] ||
                array[(int)(((float)mousePos.y - GRID_CELL / 2 - 2) / GRID_CELL)]
                [(int)(((float)mousePos.x - GRID_CELL / 2 - 2) / GRID_CELL)])
                return true;
            return false;
            break;
        case SDL_MOUSEBUTTONUP:
            if (!array[(int)(((float)mousePos.y + GRID_CELL / 2 + 2) / GRID_CELL)]
                [(int)(((float)mousePos.x + GRID_CELL / 2 + 2) / GRID_CELL)] &&
                !array[(int)(((float)mousePos.y + GRID_CELL / 2 + 2) / GRID_CELL)]
                [(int)(((float)mousePos.x - GRID_CELL / 2 - 2) / GRID_CELL)] &&
                !array[(int)(((float)mousePos.y - GRID_CELL / 2 - 2) / GRID_CELL)]
                [(int)(((float)mousePos.x + GRID_CELL / 2 + 2) / GRID_CELL)] &&
                !array[(int)(((float)mousePos.y - GRID_CELL / 2 - 2) / GRID_CELL)]
                [(int)(((float)mousePos.x - GRID_CELL / 2 - 2) / GRID_CELL)])
                return true;
            return false;
            break;
    }
    return false;
}
