#include "header.h"

int win_menu (SDL_Window * window, SDL_Renderer *renderer) {
    SDL_Event event;
    bool quit = false;

     bool leftMouseButtonDown = false;
    SDL_Point mousePos;
    SDL_Surface *tempSurface;

    SDL_Surface *image = 
        SDL_LoadBMP("resource/img/you_win.bmp");
    SDL_Texture *backgroundTexture = 
        SDL_CreateTextureFromSurface(renderer,
                                     image);
    SDL_FreeSurface(image);


    tempSurface = SDL_LoadBMP("resource/img/exit.bmp");
    SDL_Texture *exit = 
        SDL_CreateTextureFromSurface(renderer, tempSurface);
    SDL_FreeSurface(tempSurface);

    tempSurface = SDL_LoadBMP("resource/img/tryAgain.bmp");
    SDL_Texture *try = 
        SDL_CreateTextureFromSurface(renderer, tempSurface);
    SDL_FreeSurface(tempSurface);

    Mix_Music *menu_sound = Mix_LoadMUS("./resource/sounds/menu.mp3");
    Mix_PlayMusic(menu_sound, -1);
    while (!quit){
        //SDL_GetWindowSize(window, &w, &h);
        SDL_PollEvent(&event);
 
        switch (event.type) {
            SDL_Delay(10);
            case SDL_QUIT:
                quit = true;
                break;
            
            case SDL_MOUSEBUTTONDOWN:
                if (!leftMouseButtonDown && event.button.button == SDL_BUTTON_LEFT){ /* if left button down */
                    //leftMouseButtonDown = true;
                    
                        //leftMouseButtonDown = true;
                    if (mousePos.x >= 670 && mousePos.x <= 1090 && mousePos.y >= 450 && mousePos.y <= 530) {
                       main_game(window, renderer);
                       return -1;
                    }
                    if (mousePos.x >= 670 && mousePos.x <= 1090 && mousePos.y >= 660 && mousePos.y <= 730) {
                        return -1;
                    }
                }
            case SDL_MOUSEMOTION:
                mousePos.x = event.motion.x;
                mousePos.y = event.motion.y;

        }
        SDL_Rect exit_arr = {750, 650, 350, 80};
        SDL_Rect try_arr = {750, 450, 350, 80};
        
       

        SDL_RenderClear(renderer);
        SDL_RenderCopy(renderer, backgroundTexture, NULL, NULL);
        SDL_RenderCopy(renderer, exit, NULL, &exit_arr);
        SDL_RenderCopy(renderer, try, NULL, &try_arr);
        SDL_RenderPresent(renderer);
    }
    SDL_DestroyTexture(backgroundTexture);
    SDL_DestroyTexture(exit);
    SDL_DestroyTexture(try);
 
    return 0;
}
