#include "header.h"

int main()
{
    SDL_Init(SDL_INIT_VIDEO | SDL_INIT_VIDEO) ;
    Mix_OpenAudio(44100, MIX_DEFAULT_FORMAT, 2, 2048);
    SDL_Window * window = SDL_CreateWindow(
  "Test", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, SIZE_WINDOWW, SIZE_WINDOWH,
  SDL_WINDOW_SHOWN);
    TTF_Init();
    //SDL_GetWindowSize(window, &get_size_w, &get_size_h);
    SDL_Renderer * renderer = SDL_CreateRenderer(window, -1, 0);

   
    
    
    main_menu(window, renderer);
   
    
    

    
    SDL_DestroyWindow(window);
    //SDL_DestroyRenderer(renderer);
    TTF_Quit();
    SDL_QuitSubSystem(SDL_INIT_EVERYTHING);
    Mix_CloseAudio();
    SDL_Quit();
 
    return 0;
}
