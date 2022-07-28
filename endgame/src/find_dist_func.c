#include "header.h"

void find_dist_func(monster_t *monst, tower_t *placedrectanglepos, SDL_Texture **placedtower, int counter_monst, SDL_Texture *basicBullet, SDL_Texture *airBullet, SDL_Texture *earthBullet, SDL_Renderer *renderer) {
    int temp_count1 = 0;
    int temp_count2 = 0;
    if(counter_monst < LIMIT_1_WAVE) {
        temp_count1 = 0;
        temp_count2 = LIMIT_1_WAVE;
    }
    if(counter_monst < LIMIT_2_WAVE && counter_monst >= LIMIT_1_WAVE) {
        temp_count1 = LIMIT_1_WAVE;
        temp_count2 = LIMIT_2_WAVE;
    }
    if(counter_monst < LIMIT_3_WAVE && counter_monst >= LIMIT_2_WAVE) {
        temp_count1 = LIMIT_2_WAVE;
        temp_count2 = LIMIT_3_WAVE;
    }
    if(counter_monst < LIMIT_4_WAVE && counter_monst >= LIMIT_3_WAVE) {
        temp_count1 = LIMIT_3_WAVE;
        temp_count2 = LIMIT_4_WAVE;
    }
    if(counter_monst < LIMIT_5_WAVE && counter_monst >= LIMIT_4_WAVE) {
        temp_count1 = LIMIT_4_WAVE;
        temp_count2 = LIMIT_5_WAVE;
    }
    if(counter_monst < LIMIT_6_WAVE && counter_monst >= LIMIT_5_WAVE) {
        temp_count1 = LIMIT_5_WAVE;
        temp_count2 = LIMIT_6_WAVE;
    }
    if(counter_monst < LIMIT_7_WAVE && counter_monst >= LIMIT_6_WAVE) {
        temp_count1 = LIMIT_6_WAVE;
        temp_count2 = LIMIT_7_WAVE;
    }
    if(counter_monst < LIMIT_8_WAVE && counter_monst >= LIMIT_7_WAVE) {
        temp_count1 = LIMIT_7_WAVE;
        temp_count2 = LIMIT_8_WAVE;
    }
    if(counter_monst < LIMIT_9_WAVE && counter_monst >= LIMIT_8_WAVE) {
        temp_count1 = LIMIT_8_WAVE;
        temp_count2 = LIMIT_9_WAVE;
    }
    if(counter_monst < LIMIT_10_WAVE && counter_monst >= LIMIT_9_WAVE) {
        temp_count1 = LIMIT_9_WAVE;
        temp_count2 = LIMIT_10_WAVE;
    }
    if(counter_monst < LIMIT_11_WAVE && counter_monst >= LIMIT_10_WAVE) {
        temp_count1 = LIMIT_10_WAVE;
        temp_count2 = LIMIT_11_WAVE;
    }
    if(counter_monst < LIMIT_12_WAVE && counter_monst >= LIMIT_11_WAVE) {
        temp_count1 = LIMIT_11_WAVE;
        temp_count2 = LIMIT_12_WAVE;
    }
    if(counter_monst < LIMIT_13_WAVE && counter_monst >= LIMIT_12_WAVE) {
        temp_count1 = LIMIT_12_WAVE;
        temp_count2 = LIMIT_13_WAVE;
    }
    for (int i = 0; i < 100; i++) {
        if(placedtower[i]) {
            for (int j = temp_count1; j < temp_count2; j++) {
                if(monst[j].is_live) {
                    if(sqrt( (monst[j].monst_x - placedrectanglepos[i].x) * (monst[j].monst_x - placedrectanglepos[i].x)
                        + (monst[j].monst_y - placedrectanglepos[i].y) * (monst[j].monst_y - placedrectanglepos[i].y)) <= 250 && placedrectanglepos[i].is_down &&
                        ((placedrectanglepos[i].type_tower == AIR_AND_EARTH_TOWER && monst[j].type_monster != SHADOW_MONSTER) || (placedrectanglepos[i].type_tower == AIR_TOWER &&
                        monst[j].type_monster == AIR_MONSTER) || (placedrectanglepos[i].type_tower == EARTH_TOWER &&
                        monst[j].type_monster == EARTH_MONSTER) || (placedrectanglepos[i].type_tower == AIR_TOWER && monst[j].type_monster == SHADOW_MONSTER) )   ) {
                            monst[j].hp -= placedrectanglepos[i].damage_tower;
                            if(monst[j].hp % 2500 >= 20 && monst[j].hp % 2500 <= 130) {
                                int temp_tower_x = placedrectanglepos[i].x + 43;
                                int temp_tower_y = placedrectanglepos[i].y + 40;
                                int temp_monster_x = monst[j].monst_x + 110;
                                int temp_monster_y = monst[j].monst_y + 110;
                                int bullet_x = (temp_tower_x + temp_monster_x) / 2;
                                int bullet_y = (temp_tower_y + temp_monster_y) / 2;
                                SDL_Rect bull_arr = {bullet_x, bullet_y, 50, 50};
                                switch(placedrectanglepos[i].type_tower) {
                                    case 0:
                                        SDL_RenderCopy(renderer, airBullet, NULL, &bull_arr);
                                        break;
                                    case 1:
                                        SDL_RenderCopy(renderer, basicBullet, NULL, &bull_arr);
                                        break;
                                    case 2:
                                        SDL_RenderCopy(renderer, earthBullet, NULL, &bull_arr);
                                        break;
                                    default:
                                        break;
                                }
                                
                            }
                    }
                    if(monst[j].hp <= 0) {
                        monst[j].is_live = false;
                    }
                }
            }
        }
    }
}
