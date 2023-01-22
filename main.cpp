#define SDL_MAIN_HANDLED
#include <iostream>
#include "SDL/include/SDL2/SDL.h"
const int screenWidth=640;
const int screenHeight=480;

SDL_Window* window=NULL;
SDL_Surface* screenSurface=NULL;
SDL_Surface* gHelloWorld = NULL;
bool init(){
    bool good = true;
    if(SDL_Init(SDL_INIT_VIDEO)<0){
        std::cout<<"ERROR: Failed to initialize SDL  " << SDL_GetError()<<"\n";
        good = false;

    }else{
        //Create Window
        window =SDL_CreateWindow("SDL Tutorial",SDL_WINDOWPOS_UNDEFINED,SDL_WINDOWPOS_UNDEFINED,screenWidth,screenHeight,SDL_WINDOW_SHOWN);
        if (window ==NULL){
            std::cout<<"ERROR: Failed to create "<<SDL_GetError() <<"\n";
            good = false;
        }else{
             //Get window surface
            screenSurface = SDL_GetWindowSurface( window );
        }
    }
    return good;
}

void close(){
    SDL_FreeSurface(gHelloWorld);
    gHelloWorld = NULL;
    SDL_DestroyWindow(window);
    window=NULL;
    SDL_Quit();
}

bool loadMedia(){
    bool ok = true;
    gHelloWorld=SDL_LoadBMP("./hello_world.bmp");
    if(gHelloWorld==NULL){
        std::cout<<"ERROR: Failed to load "<<SDL_GetError()<<"\n";
        ok = false;
    }else{
        std::cout<<"Loaded successfully "<<'\n';
    }
    return ok;
}


int main(){
    SDL_Window* window=NULL;
    SDL_Surface* screenSurface=NULL;
    bool Init = init();
    if(Init){
       bool loadMed = loadMedia();
       if(loadMed){
        SDL_BlitSurface(gHelloWorld,NULL,screenSurface,NULL);
        SDL_UpdateWindowSurface(window); //
        SDL_Event e; bool quit = false; while( quit == false ){ while( SDL_PollEvent( &e ) ){ if( e.type == SDL_QUIT ) quit = true; } }
     }
    }
    close();
    return 0;
}