#include "header.h"
//monst_x = -160
// monst_y = - 90

void move_monster(monster_t *monst, int num) {
    int speed = 2;
    if(num >= LIMIT_3_WAVE && num < LIMIT_6_WAVE) {
        speed = 3;
    }
    if(num >= LIMIT_6_WAVE && num < LIMIT_9_WAVE) {
        speed = 4;
    }
    if(num >= LIMIT_9_WAVE) {
        speed = 5;
    }
    if(monst[0].type_monster == EARTH_MONSTER) {
        if(monst[0].monst_y < 85 && monst[0].monst_x == -90) {
            monst[0].monst_y+= speed;
            monst[0].facing = 'j';
        }
        if((monst[0].monst_y == 85|| monst[0].monst_y == 86 || monst[0].monst_y == 87|| monst[0].monst_y == 88) && monst[0].monst_x < 780) {
            monst[0].monst_x+= speed;
            monst[0].facing = 'l';
        }
        if(monst[0].monst_y < 400 && (monst[0].monst_x == 780|| monst[0].monst_x == 782)) {
            monst[0].monst_y += speed;
            monst[0].facing = 'j';
        }
        if((monst[0].monst_y == 400 || monst[0].monst_y == 401|| monst[0].monst_y == 402) && monst[0].monst_x > 50) {
            monst[0].monst_x -= speed;
            monst[0].facing = 'h';
        }
        if(monst[0].monst_y >= 400 && monst[0].monst_y < 690 && (monst[0].monst_x == 50|| monst[0].monst_x == 51)) {
            monst[0].monst_y += speed;
            monst[0].facing = 'j';
        }
        if((monst[0].monst_y == 690|| monst[0].monst_y == 691 || monst[0].monst_y == 692) && monst[0].monst_x < 850) {
            monst[0].monst_x += speed;
            monst[0].facing = 'l';
        }
        if(monst[0].monst_y < 930 && (monst[0].monst_x == 850 || monst[0].monst_x == 849)) {
            monst[0].monst_y += speed;
            monst[0].facing = 'j';
        }
    }
    if(monst[0].type_monster == AIR_MONSTER) {
        if(monst[0].monst_y < 35 && monst[0].monst_x == -90) {
            monst[0].monst_y+= speed;
        }
        if((monst[0].monst_y == 15|| monst[0].monst_y == 16 || monst[0].monst_y == 17) && monst[0].monst_x < 780) {
            monst[0].monst_x+= speed;
        }
        if(monst[0].monst_y < 310 && (monst[0].monst_x == 780|| monst[0].monst_x == 782)) {
            monst[0].monst_y += speed;
            monst[0].facing = 'j';
        }
        if((monst[0].monst_y == 310 || monst[0].monst_y == 311|| monst[0].monst_y == 312) && monst[0].monst_x > 50) {
            monst[0].monst_x -= speed;
            monst[0].facing = 'h';
        }
        if(monst[0].monst_y >= 200 && monst[0].monst_y < 610 && (monst[0].monst_x == 50|| monst[0].monst_x == 51)) {
            monst[0].monst_y += speed;
            monst[0].facing = 'j';
        }
        if((monst[0].monst_y == 610|| monst[0].monst_y == 611 || monst[0].monst_y == 612) && monst[0].monst_x < 850) {
            monst[0].monst_x += speed;
            monst[0].facing = 'l';
        }
        if(monst[0].monst_y < 930 && (monst[0].monst_x == 850 || monst[0].monst_x == 849)) {
            monst[0].monst_y += speed;
            monst[0].facing = 'j';
        }
    }
    if(monst[0].type_monster == SHADOW_MONSTER) {
        if(monst[0].monst_y < 85 && monst[0].monst_x == -90) {
            monst[0].monst_y+= speed;
            monst[0].facing = 'j';
        }
        if((monst[0].monst_y == 85|| monst[0].monst_y == 86 || monst[0].monst_y == 87|| monst[0].monst_y == 88) && monst[0].monst_x < 780) {
            monst[0].monst_x+= speed;
            monst[0].facing = 'l';
        }
        if(monst[0].monst_y < 400 && (monst[0].monst_x == 780|| monst[0].monst_x == 782)) {
            monst[0].monst_y += speed;
            monst[0].facing = 'j';
        }
        if((monst[0].monst_y == 400 || monst[0].monst_y == 401|| monst[0].monst_y == 402) && monst[0].monst_x > 50) {
            monst[0].monst_x -= speed;
            monst[0].facing = 'h';
        }
        if(monst[0].monst_y >= 400 && monst[0].monst_y < 690 && (monst[0].monst_x == 50|| monst[0].monst_x == 51)) {
            monst[0].monst_y += speed;
            monst[0].facing = 'j';
        }
        if((monst[0].monst_y == 690|| monst[0].monst_y == 691 || monst[0].monst_y == 692) && monst[0].monst_x < 850) {
            monst[0].monst_x += speed;
            monst[0].facing = 'l';
        }
        if(monst[0].monst_y < 930 && (monst[0].monst_x == 850 || monst[0].monst_x == 849)) {
            monst[0].monst_y += speed;
            monst[0].facing = 'j';
        }
    }
}
