//
//  main.cpp
//  chap2
//
//  Created by TakekiSato on 2019/09/24.
//  Copyright © 2019 TakekiSato. All rights reserved.
//

#include <stdio.h>
#include <SDL2/SDL.h>

int main(int argc,char *argv[]){
    int close=0;
    SDL_Init(SDL_INIT_VIDEO);
    
    SDL_Window *window = SDL_CreateWindow("WindowTest",SDL_WINDOWPOS_CENTERED,SDL_WINDOWPOS_CENTERED,640,480,0);
    
    while(close==0){
        SDL_Event event;
        while(SDL_PollEvent(&event)){
        }
        if(event.type==SDL_QUIT)
            close++;
    }
    SDL_DestroyWindow(window);
    SDL_Quit();
    return 0;
}
