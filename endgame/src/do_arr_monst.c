#include "header.h"

void do_arr_monst(monster_t *monst, tower_t *placedrectanglepos, SDL_Texture **placedtower, SDL_Renderer *renderer, SDL_Texture *monster_texts[3], SDL_Texture *basicBullet, SDL_Texture *airBullet, SDL_Texture *earthBullet, int *coins, int *kills, int *counter) {
    SDL_Texture *earth_monster_tex = monster_texts[0];
    *counter = 0;
    //SDL_Surface *
    //tempSurface = SDL_LoadBMP("resource/img/leftwalkingMonster1.bmp");
    //SDL_Texture *leftearth_monster_tex1 = 
    //    SDL_CreateTextureFromSurface(renderer, tempSurface);
    //SDL_FreeSurface(tempSurface);
    //tempSurface = SDL_LoadBMP("resource/img/leftwalkingMonster2.bmp");
    //SDL_Texture *leftearth_monster_tex2 = 
    //    SDL_CreateTextureFromSurface(renderer, tempSurface);
    //SDL_FreeSurface(tempSurface);
    //SDL_Texture *earth_monster_tex;// = monster_texts[0];
    //if ((*counter)++ > 1000) {
    //    *counter = 0;
    //    earth_monster_tex = rand() % 2 ?leftearth_monster_tex1:leftearth_monster_tex2;
    //}
    SDL_Texture *air_monster_tex = monster_texts[1];
    SDL_Texture *shadow_monster_tex = monster_texts[2];
    Mix_Chunk *menu_sound = Mix_LoadWAV("./resource/sounds/monster_death.wav");
    bool check_1_wave = false;
    bool check_2_wave = false;
    bool check_3_wave = false;
    bool check_4_wave = false;
    bool check_5_wave = false;
    bool check_6_wave = false;
    bool check_7_wave = false;
    bool check_8_wave = false;
    bool check_9_wave = false;
    bool check_10_wave = false;
    bool check_11_wave = false;
    bool check_12_wave = false;
       
       
    for (int counter_monst = 0; counter_monst < LIMIT_13_WAVE; counter_monst++) {
        SDL_Rect monster_arr1 = {monst[counter_monst].monst_x, monst[counter_monst].monst_y, 300, 300};
        if (monst[counter_monst].type_monster == EARTH_MONSTER)
        SDL_RenderCopy(renderer, 
                earth_monster_tex,
                NULL, &monster_arr1);
        if (monst[counter_monst].type_monster == AIR_MONSTER)
        SDL_RenderCopy(renderer, 
                air_monster_tex,
                NULL, &monster_arr1);
        if (monst[counter_monst].type_monster == SHADOW_MONSTER)
        SDL_RenderCopy(renderer, 
                shadow_monster_tex,
                NULL, &monster_arr1);
    }
    for(int counter_monst = 0; counter_monst < LIMIT_1_WAVE; counter_monst++) {
        move_monster(&monst[counter_monst], counter_monst);
        find_dist_func(monst, placedrectanglepos, placedtower, counter_monst, basicBullet, airBullet, earthBullet, renderer);
        if(!monst[counter_monst].is_live && monst[counter_monst].monst_x != -100 && monst[counter_monst].monst_y != -500) {
            monst[counter_monst].monst_x = -100;
            monst[counter_monst].monst_y = -500;
            *coins += 1;
            *kills += 1;
            Mix_PlayChannel(-1, menu_sound, 0);
        }
        if(counter_monst == LIMIT_1_WAVE - 1 && (!monst[counter_monst].is_live && monst[counter_monst].monst_x == -100 && monst[counter_monst].monst_y == -500)) {
            check_1_wave = true;
        }
    }

    if(check_1_wave == true) {
            for(int counter_monst = LIMIT_1_WAVE; counter_monst < LIMIT_2_WAVE; counter_monst++) {
            move_monster(&monst[counter_monst], counter_monst);
            find_dist_func(monst, placedrectanglepos, placedtower, counter_monst, basicBullet, airBullet, earthBullet, renderer);
            if(!monst[counter_monst].is_live && monst[counter_monst].monst_x != -100 && monst[counter_monst].monst_y != -500) {
                monst[counter_monst].monst_x = -100;
                monst[counter_monst].monst_y = -500;
                *coins +=1;
                *kills += 1;
                Mix_PlayChannel(-1, menu_sound, 0);
            }
            if(counter_monst == LIMIT_2_WAVE - 1 && (!monst[counter_monst].is_live && monst[counter_monst].monst_x == -100 && monst[counter_monst].monst_y == -500)) {
               check_2_wave = true;
            }
        }
    }

        if(check_2_wave == true) {
            for(int counter_monst = LIMIT_2_WAVE; counter_monst < LIMIT_3_WAVE; counter_monst++) {
                if(counter_monst % 2 == 0) {
                    move_monster(&monst[counter_monst], counter_monst);
                    find_dist_func(monst, placedrectanglepos, placedtower, counter_monst, basicBullet, airBullet, earthBullet, renderer);
                    if(!monst[counter_monst].is_live && monst[counter_monst].monst_x != -100 && monst[counter_monst].monst_y != -500) {
                        monst[counter_monst].monst_x = -100;
                        monst[counter_monst].monst_y = -500;
                        *coins +=1;
                        *kills += 1;
                        Mix_PlayChannel(-1, menu_sound, 0);
                    }
                }
                else {
                    move_monster(&monst[counter_monst], counter_monst);
                    find_dist_func(monst, placedrectanglepos, placedtower, counter_monst, basicBullet, airBullet, earthBullet, renderer);
                    if(!monst[counter_monst].is_live && monst[counter_monst].monst_x != -100 && monst[counter_monst].monst_y != -500) {
                        monst[counter_monst].monst_x = -100;
                        monst[counter_monst].monst_y = -500;
                        *coins +=1;
                        *kills += 1;
                        Mix_PlayChannel(-1, menu_sound, 0);
                    }
                }
                if(counter_monst == LIMIT_3_WAVE - 1 && (!monst[counter_monst].is_live && monst[counter_monst].monst_x == -100 && monst[counter_monst].monst_y == -500)) {
                    check_3_wave = true;
                }
            }
        }

        if(check_3_wave == true) {
            for(int counter_monst = LIMIT_3_WAVE; counter_monst < LIMIT_4_WAVE; counter_monst++) {
                move_monster(&monst[counter_monst], counter_monst);
                find_dist_func(monst, placedrectanglepos, placedtower, counter_monst, basicBullet, airBullet, earthBullet, renderer);
                if(!monst[counter_monst].is_live && monst[counter_monst].monst_x != -100 && monst[counter_monst].monst_y != -500) {
                    monst[counter_monst].monst_x = -100;
                    monst[counter_monst].monst_y = -500;
                    *coins +=1;
                    *kills += 1;
                    Mix_PlayChannel(-1, menu_sound, 0);
                }
                if(counter_monst == LIMIT_4_WAVE - 1 && (!monst[counter_monst].is_live && monst[counter_monst].monst_x == -100 && monst[counter_monst].monst_y == -500)) {
                    check_4_wave = true;
                }
            }
        }

        if(check_4_wave == true) {
            for(int counter_monst = LIMIT_4_WAVE; counter_monst < LIMIT_5_WAVE; counter_monst++) {
                move_monster(&monst[counter_monst], counter_monst);
                find_dist_func(monst, placedrectanglepos, placedtower, counter_monst, basicBullet, airBullet, earthBullet, renderer);
                if(!monst[counter_monst].is_live && monst[counter_monst].monst_x != -100 && monst[counter_monst].monst_y != -500) {
                    monst[counter_monst].monst_x = -100;
                    monst[counter_monst].monst_y = -500;
                    *coins +=1;
                    *kills += 1;
                    Mix_PlayChannel(-1, menu_sound, 0);
                }
                if(counter_monst == LIMIT_5_WAVE - 1 && (!monst[counter_monst].is_live && monst[counter_monst].monst_x == -100 && monst[counter_monst].monst_y == -500)) {
                    check_5_wave = true;
                }
            }
        }

        if(check_5_wave == true) {
            for(int counter_monst = LIMIT_5_WAVE; counter_monst < LIMIT_6_WAVE; counter_monst++) {
                if(counter_monst % 2 == 0) {
                    move_monster(&monst[counter_monst], counter_monst);
                    find_dist_func(monst, placedrectanglepos, placedtower, counter_monst, basicBullet, airBullet, earthBullet, renderer);
                    if(!monst[counter_monst].is_live && monst[counter_monst].monst_x != -100 && monst[counter_monst].monst_y != -500) {
                        monst[counter_monst].monst_x = -100;
                        monst[counter_monst].monst_y = -500;
                        *coins +=1;
                        *kills += 1;
                        Mix_PlayChannel(-1, menu_sound, 0);
                    }
                }
                else {
                    move_monster(&monst[counter_monst], counter_monst);
                    find_dist_func(monst, placedrectanglepos, placedtower, counter_monst, basicBullet, airBullet, earthBullet, renderer);
                    if(!monst[counter_monst].is_live && monst[counter_monst].monst_x != -100 && monst[counter_monst].monst_y != -500) {
                        monst[counter_monst].monst_x = -100;
                        monst[counter_monst].monst_y = -500;
                        *coins +=1;
                        *kills += 1;
                        Mix_PlayChannel(-1, menu_sound, 0);
                    }
                }
                if(counter_monst == LIMIT_6_WAVE - 1 && (!monst[counter_monst].is_live && monst[counter_monst].monst_x == -100 && monst[counter_monst].monst_y == -500)) {
                    check_6_wave = true;
                }
            }
        }

        if(check_6_wave == true) {
            for(int counter_monst = LIMIT_6_WAVE; counter_monst < LIMIT_7_WAVE; counter_monst++) {
                move_monster(&monst[counter_monst], counter_monst);
                find_dist_func(monst, placedrectanglepos, placedtower, counter_monst, basicBullet, airBullet, earthBullet, renderer);
                if(!monst[counter_monst].is_live && monst[counter_monst].monst_x != -100 && monst[counter_monst].monst_y != -500) {
                    monst[counter_monst].monst_x = -100;
                    monst[counter_monst].monst_y = -500;
                    *coins +=1;
                    *kills += 1;
                    Mix_PlayChannel(-1, menu_sound, 0);
                }
                if(counter_monst == LIMIT_7_WAVE - 1 && (!monst[counter_monst].is_live && monst[counter_monst].monst_x == -100 && monst[counter_monst].monst_y == -500)) {
                    check_7_wave = true;
                }
            }
        }

        if(check_7_wave == true) {
            for(int counter_monst = LIMIT_7_WAVE; counter_monst < LIMIT_8_WAVE; counter_monst++) {
                move_monster(&monst[counter_monst], counter_monst);
                find_dist_func(monst, placedrectanglepos, placedtower, counter_monst, basicBullet, airBullet, earthBullet, renderer);
                if(!monst[counter_monst].is_live && monst[counter_monst].monst_x != -100 && monst[counter_monst].monst_y != -500) {
                    monst[counter_monst].monst_x = -100;
                    monst[counter_monst].monst_y = -500;
                    *coins +=1;
                    *kills += 1;
                    Mix_PlayChannel(-1, menu_sound, 0);
                }
                if(counter_monst == LIMIT_8_WAVE - 1 && (!monst[counter_monst].is_live && monst[counter_monst].monst_x == -100 && monst[counter_monst].monst_y == -500)) {
                    check_8_wave = true;
                }
            }
        }

        if(check_8_wave == true) {
            for(int counter_monst = LIMIT_8_WAVE; counter_monst < LIMIT_9_WAVE; counter_monst++) {
                if(counter_monst % 2 == 0) {
                    move_monster(&monst[counter_monst], counter_monst);
                    find_dist_func(monst, placedrectanglepos, placedtower, counter_monst, basicBullet, airBullet, earthBullet, renderer);
                    if(!monst[counter_monst].is_live && monst[counter_monst].monst_x != -100 && monst[counter_monst].monst_y != -500) {
                        monst[counter_monst].monst_x = -100;
                        monst[counter_monst].monst_y = -500;
                        *coins +=1;
                        *kills += 1;
                        Mix_PlayChannel(-1, menu_sound, 0);
                    }
                }
                else {
                    move_monster(&monst[counter_monst], counter_monst);
                    find_dist_func(monst, placedrectanglepos, placedtower, counter_monst, basicBullet, airBullet, earthBullet, renderer);
                    if(!monst[counter_monst].is_live && monst[counter_monst].monst_x != -100 && monst[counter_monst].monst_y != -500) {
                        monst[counter_monst].monst_x = -100;
                        monst[counter_monst].monst_y = -500;
                        *coins +=1;
                        *kills += 1;
                        Mix_PlayChannel(-1, menu_sound, 0);
                    }
                }
                if(counter_monst == LIMIT_9_WAVE - 1 && (!monst[counter_monst].is_live && monst[counter_monst].monst_x == -100 && monst[counter_monst].monst_y == -500)) {
                    check_9_wave = true;
                }
            }
        }

        if(check_9_wave == true) {
            for(int counter_monst = LIMIT_9_WAVE; counter_monst < LIMIT_10_WAVE; counter_monst++) {
                if(counter_monst % 2 == 0) {
                    move_monster(&monst[counter_monst], counter_monst);
                    find_dist_func(monst, placedrectanglepos, placedtower, counter_monst, basicBullet, airBullet, earthBullet, renderer);
                    if(!monst[counter_monst].is_live && monst[counter_monst].monst_x != -100 && monst[counter_monst].monst_y != -500) {
                        monst[counter_monst].monst_x = -100;
                        monst[counter_monst].monst_y = -500;
                        *coins +=1;
                        *kills += 1;
                        Mix_PlayChannel(-1, menu_sound, 0);
                    }
                }
                else {
                    move_monster(&monst[counter_monst], counter_monst);
                    find_dist_func(monst, placedrectanglepos, placedtower, counter_monst, basicBullet, airBullet, earthBullet, renderer);
                    if(!monst[counter_monst].is_live && monst[counter_monst].monst_x != -100 && monst[counter_monst].monst_y != -500) {
                        monst[counter_monst].monst_x = -100;
                        monst[counter_monst].monst_y = -500;
                        *coins +=1;
                        *kills += 1;
                        Mix_PlayChannel(-1, menu_sound, 0);
                    }
                }
                if(counter_monst == LIMIT_10_WAVE - 1 && (!monst[counter_monst].is_live && monst[counter_monst].monst_x == -100 && monst[counter_monst].monst_y == -500)) {
                    check_10_wave = true;
                }
            }
        }

        if(check_10_wave == true) {
            for(int counter_monst = LIMIT_10_WAVE; counter_monst < LIMIT_11_WAVE; counter_monst++) {
                move_monster(&monst[counter_monst], counter_monst);
                find_dist_func(monst, placedrectanglepos, placedtower, counter_monst, basicBullet, airBullet, earthBullet, renderer);
                if(!monst[counter_monst].is_live && monst[counter_monst].monst_x != -100 && monst[counter_monst].monst_y != -500) {
                    monst[counter_monst].monst_x = -100;
                    monst[counter_monst].monst_y = -500;
                    *coins +=1;
                    *kills += 1;
                    Mix_PlayChannel(-1, menu_sound, 0);
                }
                if(counter_monst == LIMIT_11_WAVE - 1 && (!monst[counter_monst].is_live && monst[counter_monst].monst_x == -100 && monst[counter_monst].monst_y == -500)) {
                    check_11_wave = true;
                }
            }
        }

        if(check_11_wave == true) {
            for(int counter_monst = LIMIT_11_WAVE; counter_monst < LIMIT_12_WAVE; counter_monst++) {
                move_monster(&monst[counter_monst], counter_monst);
                find_dist_func(monst, placedrectanglepos, placedtower, counter_monst, basicBullet, airBullet, earthBullet, renderer);
                if(!monst[counter_monst].is_live && monst[counter_monst].monst_x != -100 && monst[counter_monst].monst_y != -500) {
                    monst[counter_monst].monst_x = -100;
                    monst[counter_monst].monst_y = -500;
                    *coins +=1;
                    *kills += 1;
                    Mix_PlayChannel(-1, menu_sound, 0);
                }
                if(counter_monst == LIMIT_12_WAVE - 1 && (!monst[counter_monst].is_live && monst[counter_monst].monst_x == -100 && monst[counter_monst].monst_y == -500)) {
                    check_12_wave = true;
                }
            }
        }

        if(check_12_wave == true) {
            for(int counter_monst = LIMIT_12_WAVE; counter_monst < LIMIT_13_WAVE; counter_monst++) {
                if(counter_monst % 2 == 0) {
                    move_monster(&monst[counter_monst], counter_monst);
                    find_dist_func(monst, placedrectanglepos, placedtower, counter_monst, basicBullet, airBullet, earthBullet, renderer);
                    if(!monst[counter_monst].is_live && monst[counter_monst].monst_x != -100 && monst[counter_monst].monst_y != -500) {
                        monst[counter_monst].monst_x = -100;
                        monst[counter_monst].monst_y = -500;
                        *coins +=1;
                        *kills += 1;
                        Mix_PlayChannel(-1, menu_sound, 0);
                    }
                }
                else {
                    //SDL_Rect monster_arr1 = {
                    //    monst[counter_monst].monst_x, 
                    //    monst[counter_monst].monst_y, 
                    //    300, 
                    //    300};
                    move_monster(&monst[counter_monst], counter_monst);
                    find_dist_func(monst, placedrectanglepos, placedtower, counter_monst, basicBullet, airBullet, earthBullet, renderer);
                    if(!monst[counter_monst].is_live && monst[counter_monst].monst_x != -100 && monst[counter_monst].monst_y != -500) {
                        monst[counter_monst].monst_x = -100;
                        monst[counter_monst].monst_y = -500;
                        *coins +=1;
                        *kills += 1;
                        Mix_PlayChannel(-1, menu_sound, 0);
                    }
                }
            }
        }
}
