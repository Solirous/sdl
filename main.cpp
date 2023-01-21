#define SDL_MAIN_HANDLED
#include <iostream>
#include "SDL/include/SDL2/SDL.h"
const int screenWidth=640;
const int screenHeight=480;

int main(){
    SDL_Window* window=NULL;
    SDL_Surface* screenSurface=NULL;
    if(SDL_Init(SDL_INIT_VIDEO)<0){
        std::cout<<"ERROR: Failed to initialize SDL  " << SDL_GetError()<<"\n";

    }else{
        //Create Window
        window =SDL_CreateWindow("SDL Tutorial",SDL_WINDOWPOS_UNDEFINED,SDL_WINDOWPOS_UNDEFINED,screenWidth,screenHeight,SDL_WINDOW_SHOWN);
        if (window ==NULL){
            std::cout<<"ERROR: Failed to create "<<SDL_GetError() <<"\n";
        }else{
             //Get window surface
            screenSurface = SDL_GetWindowSurface( window );

            //Fill the surface white
            SDL_FillRect( screenSurface, NULL, SDL_MapRGB( screenSurface->format, 0xFF, 0xFF, 0xFF ) );
            
            //Update the surface
            SDL_UpdateWindowSurface( window );

            //Hack to get window to stay up
            SDL_Event e; bool quit = false; while( quit == false ){ while( SDL_PollEvent( &e ) ){ if( e.type == SDL_QUIT ) quit = true; } }
            
        }
    }

    return 0;
}