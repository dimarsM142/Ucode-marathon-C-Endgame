#include "header.h"

int main_game(SDL_Window * window, SDL_Renderer *renderer) {
    bool quit = false;
    int array[ARRAYW][ARRAYH] = {
        { 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1 },
        { 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1 },
        { 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1 },
        { 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1 },
        { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1 },
        { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1 },
        { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1 },
        { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1 },
        { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1 },
        { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1 },
        { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1 },
        { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1 },
        { 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1 },
        { 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1 },
        { 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1 },
        { 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1 },
        { 0, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1 },
        { 0, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1 },
        { 0, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1 },
        { 0, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1 },
        { 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1 },
        { 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1 },
        { 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1 },
        { 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1 },
        { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1 },
        { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1 },
        { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1 },
        { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1 },
        { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1 },
        { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1 }};
    SDL_Event event;
    int w;
    int h;
    int i;
    int j;
    int counter = 1001;
    //char monstDir = 'k';
    int placedtowercunter = 0;
    bool leftMouseButtonDown = false;
    int coins_required;
    SDL_Point mousePos;
    SDL_Texture *monster_texts[4];
    SDL_Point clickOffset;
    SDL_Rect aoErect = {-500, -500, 500, 500};
    int coins = 10;
    int kills = 0;
    char coins_itoa[10];
    char kills_itoa[10];
    for (i = 0; i < 10; i++) { coins_itoa[i]=0; kills_itoa[i]=0; }

    TTF_Font* joystixSmall = TTF_OpenFont("resource/ttf/font1.ttf", 64);

    monster_t monst [MONSTERCUNT];
    set_arr_monst(monst, 330);

    SDL_Texture *placedtower[PLACEDTOWERCUNT];
    tower_t placedrectanglepos[PLACEDTOWERCUNT];
    for (i = 0; i < PLACEDTOWERCUNT; i++)
        placedtower[i] = NULL;
    monst[0].monst_y = -160;
    monst[0].monst_x = -90;

    /* initialize textures */
    SDL_Texture *purchaseTowers[TOWERCUNT];
    SDL_Surface *tempSurface;
    tempSurface = SDL_LoadBMP("resource/img/basicTower.bmp");
    SDL_Texture *basicTower =
        SDL_CreateTextureFromSurface(renderer, tempSurface);
    SDL_FreeSurface(tempSurface);
    tempSurface = SDL_LoadBMP("resource/img/groundTower.bmp");
    SDL_Texture *groundTower =
        SDL_CreateTextureFromSurface(renderer, tempSurface);
    SDL_FreeSurface(tempSurface);
    tempSurface = SDL_LoadBMP("resource/img/airTower.bmp");
    SDL_Texture *airTower =
        SDL_CreateTextureFromSurface(renderer, tempSurface);
    tempSurface = SDL_LoadBMP("resource/img/basicBullet.bmp");
    SDL_Texture *basicBullet =
       SDL_CreateTextureFromSurface(renderer, tempSurface);
       tempSurface = SDL_LoadBMP("resource/img/airBullet.bmp");
    SDL_Texture *airBullet =
       SDL_CreateTextureFromSurface(renderer, tempSurface);
       tempSurface = SDL_LoadBMP("resource/img/earthBullet.bmp");
    SDL_Texture *earthBullet =
       SDL_CreateTextureFromSurface(renderer, tempSurface);
    SDL_FreeSurface(tempSurface);
    purchaseTowers[0] = basicTower;
    purchaseTowers[1] = groundTower;
    purchaseTowers[2] = airTower;
    /* initialize rectangles for textures */
    SDL_Rect *purchaseRectangles[TOWERCUNT];
    SDL_Point purchaseTowerPos[TOWERCUNT];
    for (i = 0; i < TOWERCUNT; i++) {
        purchaseTowerPos[i].x = 0.62 * SIZE_WINDOWW+230*i;
        purchaseTowerPos[i].y = 255;
    }
    tempSurface = SDL_LoadBMP("resource/img/aoe.bmp");
    SDL_Texture * areaOfEffect =
        SDL_CreateTextureFromSurface(renderer, tempSurface);
    SDL_FreeSurface(tempSurface);
    i = 0;
    SDL_Rect towerRect1 = { purchaseTowerPos[i].x, 
        purchaseTowerPos[i].y, GRID_CELL*4, GRID_CELL*4 };
    i++;
    SDL_Rect towerRect2 = { purchaseTowerPos[i].x, 
        purchaseTowerPos[i].y, GRID_CELL*4, GRID_CELL*4 };
    i++;
    SDL_Rect towerRect3 = { purchaseTowerPos[i].x, 
        purchaseTowerPos[i].y, GRID_CELL*4, GRID_CELL*4 };
    i++;
    purchaseRectangles[0] = &towerRect1;
    purchaseRectangles[1] = &towerRect2;
    purchaseRectangles[2] = &towerRect3;
    selected_rect_t selectedRect;
    selectedRect.selectedRect = NULL;
    selectedRect.i = -1;

    tempSurface = SDL_LoadBMP("resource/img/map1.bmp");
    SDL_Texture *background_texture = 
        SDL_CreateTextureFromSurface(renderer, tempSurface);
    SDL_FreeSurface(tempSurface);

    tempSurface = SDL_LoadBMP("resource/img/walkingMonster1.bmp");
    SDL_Texture *earth_monster_tex1 = 
        SDL_CreateTextureFromSurface(renderer, tempSurface);
    SDL_FreeSurface(tempSurface);
    tempSurface = SDL_LoadBMP("resource/img/walkingMonster2.bmp");
    SDL_Texture *earth_monster_tex2 = 
        SDL_CreateTextureFromSurface(renderer, tempSurface);
    SDL_FreeSurface(tempSurface);

    tempSurface = SDL_LoadBMP("resource/img/flyingMonster1.bmp");
    SDL_Texture *air_monster_tex1 = 
        SDL_CreateTextureFromSurface(renderer, tempSurface);
    SDL_FreeSurface(tempSurface);
    tempSurface = SDL_LoadBMP("resource/img/flyingMonster2.bmp");
    SDL_Texture *air_monster_tex2 = 
        SDL_CreateTextureFromSurface(renderer, tempSurface);
    SDL_FreeSurface(tempSurface);

    tempSurface = SDL_LoadBMP("resource/img/ghost1.bmp");
    SDL_Texture *shadow_monster_tex1 = 
        SDL_CreateTextureFromSurface(renderer, tempSurface);
    SDL_FreeSurface(tempSurface);
    tempSurface = SDL_LoadBMP("resource/img/ghost2.bmp");
    SDL_Texture *shadow_monster_tex2 = 
        SDL_CreateTextureFromSurface(renderer, tempSurface);
    SDL_FreeSurface(tempSurface);

    monster_texts[0] = earth_monster_tex1;
    monster_texts[1] = air_monster_tex1;
    monster_texts[2] = shadow_monster_tex1;

    tempSurface = SDL_LoadBMP("resource/img/mechet.bmp");
    SDL_Texture *village = 
        SDL_CreateTextureFromSurface(renderer, tempSurface);
    SDL_FreeSurface(tempSurface);

    tempSurface = SDL_LoadBMP("resource/img/pauseButton.bmp");
    SDL_Texture *pause_button = 
        SDL_CreateTextureFromSurface(renderer, tempSurface);
    SDL_FreeSurface(tempSurface);

    j = 0;
    SDL_SetRenderDrawColor(renderer, 255, 255, 255, 255);

    SDL_Color color = {255, 255, 255, 255};

    SDL_Surface* textScoreSurface1; 
    SDL_Texture* textScoreTexture1;
    SDL_Surface* textScoreSurface2; 
    SDL_Texture* textScoreTexture2;

    Mix_Music *backgroundSound = Mix_LoadMUS("resource/sounds/game.mp3");
    Mix_PlayMusic(backgroundSound, -1);                                             // Playing music and looping
    Mix_Volume(2,MIX_MAX_VOLUME);
        
    while (!quit){
        snprintf(coins_itoa, 10, "%d", coins);
        snprintf(kills_itoa, 10, "%d", kills);
        textScoreSurface1 = TTF_RenderText_Solid(joystixSmall, coins_itoa, color);
        textScoreSurface2 = TTF_RenderText_Solid(joystixSmall, kills_itoa, color);
        textScoreTexture1 = SDL_CreateTextureFromSurface(renderer, textScoreSurface1);
        textScoreTexture2 = SDL_CreateTextureFromSurface(renderer, textScoreSurface2);
        SDL_Rect textScoreRect = {1500, 0, 100, 100};
        SDL_Rect textScoreRect2 = {1330, 490, 100, 100};

        SDL_GetWindowSize(window, &w, &h);
        SDL_Delay(10);
        SDL_PollEvent(&event);
        switch (event.type) {
            case SDL_QUIT:
                quit = true;
                break;
            //case SDL_KEYDOWN:{
               // char keyDown = event.key.keysym.scancode;

//                switch (keyDown) {
                    //case SDL_SCANCODE_RETURN:
                    //    quit = true;
                    //    break;
                    //case SDL_SCANCODE_ESCAPE:
                      //  if (pauses(renderer) == -1) {
                        //    return;
                        //}
                        //Mix_PlayMusic(backgroundSound, -1);  
                        //break; 
                        //default:
                        //    break;
              //  }
            //}
            case SDL_MOUSEBUTTONUP: /* button up place tower action */
                if (leftMouseButtonDown && event.button.button == SDL_BUTTON_LEFT) { /* if correct button down */
                    if (selectedRect.selectedRect) { /* if any rectangle was selected */
                        if (getboundaries(array, mousePos, event.type)) { /* if space not occupied */
                            ocuppyarray(array, mousePos, selectedRect.i); /*then occupy */
                            placedtower[placedtowercunter] = purchaseTowers[selectedRect.i];
                            placedrectanglepos[placedtowercunter].x = 
                                selectedRect.selectedRect->x - 
                                remainder(selectedRect.selectedRect->x , GRID_CELL);
                            placedrectanglepos[placedtowercunter].y =
                                selectedRect.selectedRect->y - 
                                remainder(selectedRect.selectedRect->y , GRID_CELL);
                                switch(selectedRect.i) {
                                case 0:
                                    placedrectanglepos[placedtowercunter].type_tower = AIR_AND_EARTH_TOWER;
                                    placedrectanglepos[placedtowercunter].damage_tower = 1;
                                    break;
                                case 1:
                                    placedrectanglepos[placedtowercunter].type_tower = EARTH_TOWER;
                                    placedrectanglepos[placedtowercunter].damage_tower = 2;
                                    break;
                                case 2:
                                    placedrectanglepos[placedtowercunter].type_tower = AIR_TOWER;
                                    placedrectanglepos[placedtowercunter].damage_tower = 2;
                                    break;
                                default:
                                    break;
                            }
                            placedrectanglepos[placedtowercunter].is_down = true;
                            placedtowercunter++;
                            if (selectedRect.i == 0) {
                                coins -= 5;
                            }
                            if (selectedRect.i == 1) {
                                coins -= 10;
                            }
                            if (selectedRect.i == 2) {
                                coins -= 10;
                            }
                            
                        }
                        else
                            placedtower[placedtowercunter] = NULL;
                        SDL_SetTextureAlphaMod(purchaseTowers[selectedRect.i], 255);
                        purchaseRectangles[selectedRect.i]->x = purchaseTowerPos[selectedRect.i].x -  
                            remainder(purchaseTowerPos[selectedRect.i].x, GRID_CELL);
                        purchaseRectangles[selectedRect.i]->y = purchaseTowerPos[selectedRect.i].y -  
                            remainder(purchaseTowerPos[selectedRect.i].y, GRID_CELL);
                        selectedRect.i = -1;
                    }
                    leftMouseButtonDown = false;
                    selectedRect.selectedRect = NULL;
                }
                break;
            case SDL_MOUSEBUTTONDOWN:
                if (!leftMouseButtonDown && event.button.button == SDL_BUTTON_LEFT){ /* if left button down */
                    leftMouseButtonDown = true;
                    for (i = 0; i < TOWERCUNT; i++) { 
                        switch (i) {
                            case 0: coins_required = 5;  break;
                            case 1: coins_required = 10; break;
                            case 2: coins_required = 10; break;
                        }
                        if (SDL_PointInRect(&mousePos, purchaseRectangles[i]) && coins >= coins_required){ /* if one of the rectangles under cursor */
                            selectedRect.selectedRect = 
                                purchaseRectangles[i]; /*set rectangle under cursor as selected */
                            selectedRect.i = i; /* set rectangle i as current i */
                            clickOffset.x = purchaseRectangles[i]->w/2;
                            clickOffset.y = purchaseRectangles[i]->h/2;
                            placedtower[placedtowercunter] = purchaseTowers[selectedRect.i];
                            break;
                        }
                    }
                    
                        //leftMouseButtonDown = true;
                    if (mousePos.x >= 1790 && mousePos.x <= 1900 && mousePos.y >= 26 && mousePos.y <= 120) {
                        if (pauses(renderer) == -1) {
                            return -1;
                        }
                        Mix_PlayMusic(backgroundSound, -1); 
                        break;

                    }
                    
                }
            case SDL_MOUSEMOTION:
                mousePos.x = event.motion.x;
                mousePos.y = event.motion.y;
                if (leftMouseButtonDown && 
                    selectedRect.selectedRect != NULL) {
                    if (getboundaries(array, mousePos, event.type))
                        SDL_SetTextureAlphaMod(purchaseTowers[selectedRect.i], 100);
                    else
                        SDL_SetTextureAlphaMod(purchaseTowers[selectedRect.i], 255);
                    selectedRect.selectedRect->x 
                        = mousePos.x - clickOffset.x;
                    placedrectanglepos[placedtowercunter].x = 
                        selectedRect.selectedRect->x - remainder(selectedRect.selectedRect->x , GRID_CELL);
                    selectedRect.selectedRect->y 
                        = mousePos.y - clickOffset.y;
                    placedrectanglepos[placedtowercunter].y = selectedRect.selectedRect->y - remainder(selectedRect.selectedRect->y , GRID_CELL);
                }
                break;
        }
        SDL_RenderClear(renderer);

        /* render background */
        SDL_Rect dstrect = { 0, 0, w, h };
        SDL_RenderCopy(renderer, background_texture, NULL, &dstrect);
        /* render monster */
        if (!(rand() % 20)) monster_texts[0] = rand() % 2 ? 
            earth_monster_tex1: 
            earth_monster_tex2;
        if (!(rand() % 20)) monster_texts[1] = rand() % 2 ? 
            air_monster_tex1: 
            air_monster_tex2;
        if (!(rand() % 20)) monster_texts[2] = rand() % 2 ? 
            shadow_monster_tex1: 
            shadow_monster_tex2;

        for (int re = 0; re < MONSTERCUNT; re++) {
            if ((monst[re].monst_x >= 850 || monst[re].monst_x == 849)  && monst[re].monst_y >= 930) {
                if (game_over(window, renderer) == -1) {
                    return -1;

                }
                return -1;
                //return 0;
                //printf("OVERRR");
            }
        }

    
        if (kills == 330) {
            win_menu(window, renderer);
            return -1;
        }
        /* render village*/
        SDL_Rect village_arr = {690, 720, 600, 600};
        SDL_Rect pause_arr = {1700, -60, 300, 300};
        SDL_RenderCopy(renderer, textScoreTexture1, NULL, &textScoreRect);
        SDL_RenderCopy(renderer, textScoreTexture2, NULL, &textScoreRect2);
         SDL_RenderCopy(renderer, pause_button, NULL, &pause_arr);
        SDL_SetRenderDrawColor(renderer, 0, 255, 0, 55);
        /* render occupied array temp */
        //for (i = 0; i < 30; i++) {
        //    for (j = 0; j < 30; j++) {
        //        if (array[j][i]) {
        //        SDL_Rect rectum = { GRID_CELL*i, GRID_CELL*j, (int)GRID_CELL, (int)GRID_CELL};
        //        SDL_RenderFillRect(renderer, &rectum);
        //        }
        //    }
        //}
        /* render towers */
        //sort_towers(placedrectanglepos,
            //placedtower, selectedRect);
        for (i = 0; i < PLACEDTOWERCUNT; i++) {
            if (placedtower[i]) {
                SDL_Rect purchaseRectangles_arr = {
                    placedrectanglepos[i].x,
                    placedrectanglepos[i].y,
                    purchaseRectangles[0]->w,
                    purchaseRectangles[0]->h };
                SDL_RenderCopy(renderer,
                    placedtower[i], NULL,
                    &purchaseRectangles_arr);
                aoErect.x = get_rectangle_pos(purchaseRectangles_arr).x - aoErect.w / 5;
                aoErect.y = get_rectangle_pos(purchaseRectangles_arr).y - aoErect.h / 5;
            }
        }
        if (selectedRect.selectedRect)
            SDL_RenderCopy(renderer, areaOfEffect, NULL, &aoErect);
        /* render tower menu */
        SDL_SetRenderDrawColor(renderer, 255, 255, 0, 55);
        for (i = 0; i < TOWERCUNT; i++) {
            if (i == selectedRect.i)
                continue;
            //SDL_RenderFillRect(renderer, purchaseRectangles[i]);
            SDL_Rect purchaseRectangles_arr = {
                purchaseRectangles[i]->w/2 + get_rectangle_pos(*purchaseRectangles[i]).x,
                purchaseRectangles[i]->h/2 + get_rectangle_pos(*purchaseRectangles[i]).y,
                purchaseRectangles[i]->w ,
                purchaseRectangles[i]->h  };
            SDL_RenderCopy(renderer, purchaseTowers[i], NULL, &purchaseRectangles_arr);
        }

        do_arr_monst(monst, 
            placedrectanglepos, 
            placedtower, 
            renderer,
            monster_texts,
            basicBullet, airBullet, earthBullet,
            &coins, &kills, &counter);

        SDL_RenderCopy(renderer, village, NULL, &village_arr);
        SDL_RenderPresent(renderer);
        SDL_FreeSurface(textScoreSurface1);
        SDL_FreeSurface(textScoreSurface2);
        SDL_DestroyTexture(textScoreTexture1);
        SDL_DestroyTexture(textScoreTexture2);
    }
    
    SDL_DestroyTexture(background_texture);
    TTF_CloseFont(joystixSmall);
    SDL_DestroyTexture(air_monster_tex1);
    SDL_DestroyTexture(air_monster_tex2);
    SDL_DestroyTexture(earth_monster_tex1);
    SDL_DestroyTexture(earth_monster_tex2);
    SDL_DestroyTexture(village);
    SDL_DestroyTexture(airTower);
    SDL_DestroyTexture(groundTower);
    SDL_DestroyTexture(basicTower);
    SDL_DestroyTexture(areaOfEffect);
    SDL_DestroyTexture(pause_button);
    return 0;
}
