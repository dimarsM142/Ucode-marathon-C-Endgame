#include "header.h"

void set_arr_monst(monster_t *monst, const int amount_monst) {
    for(int counter_monst = 0 ; counter_monst < amount_monst; counter_monst++) {
        monst[counter_monst].monst_x = -500;
        monst[counter_monst].monst_y = -500;
        if(counter_monst < LIMIT_1_WAVE) {
            monst[counter_monst].monst_y = -300 - 280 * counter_monst;
            monst[counter_monst].monst_x = -90;
            monst[counter_monst].hp = 15000;
            monst[counter_monst].is_live = true;
            monst[counter_monst].type_monster = EARTH_MONSTER;
        }

        if(counter_monst < LIMIT_2_WAVE && counter_monst >= LIMIT_1_WAVE) {
            monst[counter_monst].monst_y = -300 - 280 * (counter_monst - LIMIT_1_WAVE);
            monst[counter_monst].monst_x = -90;
            monst[counter_monst].hp = 30000;
            monst[counter_monst].is_live = true;
            monst[counter_monst].type_monster = AIR_MONSTER;
        }

        if(counter_monst < LIMIT_3_WAVE && counter_monst >= LIMIT_2_WAVE) {
            if(counter_monst % 2 == 0) {
            monst[counter_monst].monst_y = -300 - 280 * (counter_monst - LIMIT_2_WAVE);
            monst[counter_monst].monst_x = -90;
            monst[counter_monst].hp = 40000;
            monst[counter_monst].is_live = true;
            monst[counter_monst].type_monster = EARTH_MONSTER;
            }
            else {
                monst[counter_monst].monst_y = -300 - 280 * (counter_monst - LIMIT_2_WAVE);
                monst[counter_monst].monst_x = -90;
                monst[counter_monst].hp = 40000;
                monst[counter_monst].is_live = true;
                monst[counter_monst].type_monster = AIR_MONSTER;
            }
        }

        if(counter_monst < LIMIT_4_WAVE && counter_monst >= LIMIT_3_WAVE) {
            monst[counter_monst].monst_y = -300 - 280 * (counter_monst - LIMIT_3_WAVE);
            monst[counter_monst].monst_x = -90;
            monst[counter_monst].hp = 40000;
            monst[counter_monst].is_live = true;
            monst[counter_monst].type_monster = EARTH_MONSTER;
        }

        if(counter_monst < LIMIT_5_WAVE && counter_monst >= LIMIT_4_WAVE) {
            monst[counter_monst].monst_y = -300 - 280 * (counter_monst - LIMIT_4_WAVE);
            monst[counter_monst].monst_x = -90;
            monst[counter_monst].hp = 50000;
            monst[counter_monst].is_live = true;
            monst[counter_monst].type_monster = AIR_MONSTER;
        }

        if(counter_monst < LIMIT_6_WAVE && counter_monst >= LIMIT_5_WAVE) {
            if(counter_monst % 2 == 0) {
                monst[counter_monst].monst_y = -300 - 280 * (counter_monst - LIMIT_5_WAVE);
                monst[counter_monst].monst_x = -90;
                monst[counter_monst].hp = 50000;
                monst[counter_monst].is_live = true;
                monst[counter_monst].type_monster = EARTH_MONSTER;
            }
            else {
                monst[counter_monst].monst_y = -300 - 280 * (counter_monst - LIMIT_5_WAVE);
                monst[counter_monst].monst_x = -90;
                monst[counter_monst].hp = 60000;
                monst[counter_monst].is_live = true;
                monst[counter_monst].type_monster = AIR_MONSTER;
            }
        }

        if(counter_monst < LIMIT_7_WAVE && counter_monst >= LIMIT_6_WAVE) {
            monst[counter_monst].monst_y = -300 - 280 * (counter_monst - LIMIT_6_WAVE);
            monst[counter_monst].monst_x = -90;
            monst[counter_monst].hp = 40000;
            monst[counter_monst].is_live = true;
            monst[counter_monst].type_monster = SHADOW_MONSTER;
        }

        if(counter_monst < LIMIT_8_WAVE && counter_monst >= LIMIT_7_WAVE) {
            monst[counter_monst].monst_y = -300 - 280 * (counter_monst - LIMIT_7_WAVE);
            monst[counter_monst].monst_x = -90;
            monst[counter_monst].hp = 50000;
            monst[counter_monst].is_live = true;
            monst[counter_monst].type_monster = AIR_MONSTER;
        }

        if(counter_monst < LIMIT_9_WAVE && counter_monst >= LIMIT_8_WAVE) {
            if(counter_monst % 2 == 0) {
                monst[counter_monst].monst_y = -300 - 280 * (counter_monst - LIMIT_8_WAVE);
                monst[counter_monst].monst_x = -90;
                monst[counter_monst].hp = 60000;
                monst[counter_monst].is_live = true;
                monst[counter_monst].type_monster = EARTH_MONSTER;
            }
            else {
                monst[counter_monst].monst_y = -300 - 280 * (counter_monst - LIMIT_8_WAVE);
                monst[counter_monst].monst_x = -90;
                monst[counter_monst].hp = 70000;
                monst[counter_monst].is_live = true;
                monst[counter_monst].type_monster = AIR_MONSTER;
            }
        }

        if(counter_monst < LIMIT_10_WAVE && counter_monst >= LIMIT_9_WAVE) {
            if(counter_monst % 2 == 0) {
                monst[counter_monst].monst_y = -300 - 280 * (counter_monst - LIMIT_9_WAVE);
                monst[counter_monst].monst_x = -90;
                monst[counter_monst].hp = 80000;
                monst[counter_monst].is_live = true;
                monst[counter_monst].type_monster = EARTH_MONSTER;
            }
            else {
                monst[counter_monst].monst_y = -300 - 280 * (counter_monst - LIMIT_9_WAVE);
                monst[counter_monst].monst_x = -90;
                monst[counter_monst].hp = 90000;
                monst[counter_monst].is_live = true;
                monst[counter_monst].type_monster = AIR_MONSTER;
            }
        }

        if(counter_monst < LIMIT_11_WAVE && counter_monst >= LIMIT_10_WAVE) {
            monst[counter_monst].monst_y = -300 - 280 * (counter_monst - LIMIT_10_WAVE);
            monst[counter_monst].monst_x = -90;
            monst[counter_monst].hp = 120000;
            monst[counter_monst].is_live = true;
            monst[counter_monst].type_monster = AIR_MONSTER;
        }

        if(counter_monst < LIMIT_12_WAVE && counter_monst >= LIMIT_11_WAVE) {
            monst[counter_monst].monst_y = -300 - 280 * (counter_monst - LIMIT_11_WAVE);
            monst[counter_monst].monst_x = -90;
            monst[counter_monst].hp = 100000;
            monst[counter_monst].is_live = true;
            monst[counter_monst].type_monster = SHADOW_MONSTER;
        }


        if(counter_monst < LIMIT_13_WAVE && counter_monst >= LIMIT_12_WAVE) {
            if(counter_monst % 3 == 0) {
                monst[counter_monst].monst_y = -300 - 280 * (counter_monst - LIMIT_12_WAVE);
                monst[counter_monst].monst_x = -90;
                monst[counter_monst].hp = 120000;
                monst[counter_monst].is_live = true;
                monst[counter_monst].type_monster = EARTH_MONSTER;
            }
            else if(counter_monst % 3 == 1) {
                monst[counter_monst].monst_y = -300 - 280 * (counter_monst - LIMIT_12_WAVE);
                monst[counter_monst].monst_x = -90;
                monst[counter_monst].hp = 140000;
                monst[counter_monst].is_live = true;
                monst[counter_monst].type_monster = AIR_MONSTER;
            }
            else if (counter_monst % 3 == 2){
                monst[counter_monst].monst_y = -300 - 280 * (counter_monst - LIMIT_12_WAVE);
                monst[counter_monst].monst_x = -90;
                monst[counter_monst].hp = 110000;
                monst[counter_monst].is_live = true;
                monst[counter_monst].type_monster = SHADOW_MONSTER;
            }
        }
    }
}
