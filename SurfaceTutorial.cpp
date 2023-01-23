#define SDL_MAIN_HANDLED
#include <iostream>
#include "SDL/include/SDL2/SDL.h"
#include <string>
const int screenWidth=640;
const int screenHeight=480;

enum KeyPressedSurface
{
    KEY_PRESS_SURFACE_DEFAULT,
    KEY_PRESS_SURFACE_UP,
    KEY_PRESS_SURFACE_DOWN,
    KEY_PRESS_SURFACE_LEFT,
    KEY_PRESS_SURFACE_RIGHT,
    KEY_PRESS_SURFACE_TOTAL
};



SDL_Window* window=NULL;
SDL_Surface* screenSurface=NULL;
SDL_Surface* gHelloWorld = NULL;
SDL_Surface* gKeyPressedSurfaces[KEY_PRESS_SURFACE_TOTAL];
SDL_Surface* gCurrentSurface =NULL;

SDL_Surface* loadSurface(std::string path);


bool init(){
    bool good = true;
    if(SDL_Init(SDL_INIT_VIDEO)<0){
        std::cout<<"ERROR: Failed to initialize SDL  " << SDL_GetError()<<"\n";
        good = false    ;

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

SDL_Surface* loadSurface(std::string path){
    SDL_Surface* loadedSurface=SDL_LoadBMP(path.c_str());
    SDL_Surface* OptimizedSurface =NULL;

    if(loadedSurface==NULL){
        std::cout<<"Error loading"<<SDL_GetError()<<"\n";
    }else{
        OptimizedSurface=  SDL_ConvertSurface(loadedSurface,screenSurface->format,0);
        if (OptimizedSurface==NULL){
            std::cout<<"Error"<<SDL_GetError()<<__LINE__<<"\n";
        }
        SDL_FreeSurface(loadedSurface);
    }
    return OptimizedSurface;;
}


bool loadMedia(){
    bool ok = true;
    gKeyPressedSurfaces[KEY_PRESS_SURFACE_UP]= loadSurface("up.bmp");
    if(gKeyPressedSurfaces[KEY_PRESS_SURFACE_UP]==NULL){
        ok=false;
    }
    gKeyPressedSurfaces[KEY_PRESS_SURFACE_DOWN]= loadSurface("down.bmp");
    if(gKeyPressedSurfaces[KEY_PRESS_SURFACE_DOWN]==NULL){
        ok=false;
    }
    gKeyPressedSurfaces[KEY_PRESS_SURFACE_RIGHT]= loadSurface("right.bmp");
        if(gKeyPressedSurfaces[KEY_PRESS_SURFACE_RIGHT]==NULL){
        ok=false;
    }
       gKeyPressedSurfaces[KEY_PRESS_SURFACE_LEFT]= loadSurface("left.bmp"); 
        if(gKeyPressedSurfaces[KEY_PRESS_SURFACE_LEFT]==NULL){
        ok=false;

    }
    gKeyPressedSurfaces[KEY_PRESS_SURFACE_DEFAULT]= loadSurface("press.bmp"); 
    if(gKeyPressedSurfaces[KEY_PRESS_SURFACE_DEFAULT]==NULL){
        ok=false;

    }
    return ok;
}


int main(){
    bool Init = init();
    if(Init){
        if(loadMedia()){

            bool quit =false;
            SDL_Event e;
            gCurrentSurface=gKeyPressedSurfaces[KEY_PRESS_SURFACE_DEFAULT];
            while(!quit){
                while(SDL_PollEvent(&e)!=0){
                    if(e.type==SDL_QUIT){
                        quit = true;
                    } else if(e.type == SDL_KEYDOWN){
                        switch(e.key.keysym.sym){
                            case SDLK_UP: 
                            gCurrentSurface=gKeyPressedSurfaces[KEY_PRESS_SURFACE_UP];
                            break;
                            case SDLK_DOWN:
                            gCurrentSurface=gKeyPressedSurfaces[KEY_PRESS_SURFACE_DOWN];
                            break;
                            case SDLK_RIGHT:
                            gCurrentSurface = gKeyPressedSurfaces[KEY_PRESS_SURFACE_RIGHT];
                            break;
                            case SDLK_LEFT:
                            gCurrentSurface=gKeyPressedSurfaces[KEY_PRESS_SURFACE_LEFT];
                            break;
                            default:
                            gCurrentSurface = gKeyPressedSurfaces[KEY_PRESS_SURFACE_DEFAULT];
                            break;
                        }
                    }
                }
            SDL_Rect sr = {0,0,32,32};
            SDL_BlitSurface(gCurrentSurface,NULL,screenSurface,NULL);
            SDL_UpdateWindowSurface(window);
            }


        }
    }
    close();
    return 0;
}