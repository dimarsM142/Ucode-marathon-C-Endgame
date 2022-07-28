#include "header.h"

int main_menu (SDL_Window * window, SDL_Renderer *renderer) {
    SDL_Event event;
    bool quit = false;
    SDL_Surface *image = 
        SDL_LoadBMP("resource/img/main_menu-background.bmp");
    SDL_Texture *backgroundTexture = 
        SDL_CreateTextureFromSurface(renderer,
                                     image);
    SDL_FreeSurface(image);
    Mix_Music *menu_sound = Mix_LoadMUS("./resource/sounds/menu.mp3");
    Mix_PlayMusic(menu_sound, -1);
    while (!quit){
        SDL_WaitEvent(&event);
 
        switch (event.type) {
            SDL_Delay(10);
            case SDL_QUIT:
                quit = true;
                break;
            case SDL_KEYDOWN:{
                char keyDown = event.key.keysym.scancode;

                switch (keyDown) {
                    case SDL_SCANCODE_RETURN:
                        quit = true;
                        start_menu(window, renderer);
                        return -1;
                        break;
                    case SDL_SCANCODE_ESCAPE:
                        quit = true;
                        return -1;
                        break;
                }
            }
        }
        SDL_RenderClear(renderer);
        SDL_RenderCopy(renderer, backgroundTexture, NULL, NULL);
        SDL_RenderPresent(renderer);
    }
    SDL_DestroyTexture(backgroundTexture);
 
    return 0;
}
