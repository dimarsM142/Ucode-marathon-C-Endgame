#define _HEADER_
#ifdef _HEADER_

#define SIZE_WINDOWW 1920
#define SIZE_WINDOWH 1080
#define GRID_CELL 37.30
#define ARRAYW 30
#define ARRAYH 60
#define TOWERCUNT 3
#define PLACEDTOWERCUNT 100
#define MONSTERCUNT 330


#define LIMIT_1_WAVE 20
#define LIMIT_2_WAVE 40
#define LIMIT_3_WAVE 60
#define LIMIT_4_WAVE 80
#define LIMIT_5_WAVE 100
#define LIMIT_6_WAVE 130
#define LIMIT_7_WAVE 145
#define LIMIT_8_WAVE 160
#define LIMIT_9_WAVE 200
#define LIMIT_10_WAVE 240
#define LIMIT_11_WAVE 270
#define LIMIT_12_WAVE 300
#define LIMIT_13_WAVE 330

#define AIR_TOWER 0
#define AIR_AND_EARTH_TOWER 1
#define EARTH_TOWER 2
#define AIR_MONSTER 1
#define EARTH_MONSTER 2
#define SHADOW_MONSTER 3

#include <SDL2/SDL.h>
//#include "../resource/SDL2/SDL_ttf.h"
//#include "../resource/SDL2/SDL_mixer.h"
#include <stdlib.h>
#include <stdbool.h>
#include <unistd.h>
#include <math.h>



typedef struct tower_s {
    int x;
    int y;
    int damage_tower;
    int type_tower;
    bool is_down;
} tower_t;

typedef struct monster_s {
    int hp;
    bool is_live;
    int monst_y;
    int monst_x;
    int type_monster;
    char facing;
} monster_t;

typedef struct selected_rect_s {
    SDL_Rect *selectedRect;
    int i;
} selected_rect_t;

int main_menu (SDL_Window * window, SDL_Renderer *renderer);
void find_dist_func(monster_t *monst, tower_t *placedrectanglepos, SDL_Texture **placedtower, int counter_monst, SDL_Texture *basicBullet, SDL_Texture *airBullet, SDL_Texture *earthBullet, SDL_Renderer *renderer);
SDL_Point get_rectangle_pos (SDL_Rect rectangle);

int main_game(SDL_Window * window, SDL_Renderer *renderer);
void ocuppyarray (int array[ARRAYW][ARRAYH], SDL_Point mousePos, int selectedRect);
bool getboundaries (int array[ARRAYW][ARRAYH], SDL_Point mousePos, int event_type);
void do_arr_monst(monster_t *monst, tower_t *placedrectanglepos, SDL_Texture **placedtower, SDL_Renderer *renderer, SDL_Texture **monster_texts, SDL_Texture *basicBullet, SDL_Texture *airBullet, SDL_Texture *earthBullet, int *coins, int *kills, int *counter);
void set_arr_monst(monster_t *monst, const int amount_monst);
void move_monster(monster_t *monst, int num);
void sort_towers(tower_t placedrectanglepos[PLACEDTOWERCUNT], SDL_Texture *placedtower[PLACEDTOWERCUNT], selected_rect_t selectedRect);
int pauses(SDL_Renderer *renderer);
int game_over (SDL_Window * window, SDL_Renderer *renderer);
int start_menu (SDL_Window * window, SDL_Renderer *renderer);
int win_menu (SDL_Window * window, SDL_Renderer *renderer);

#endif
