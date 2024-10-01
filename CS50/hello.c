//
// Created by myagi on 1.10.2024.
//
#define SDL_MAIN_HANDLED
#include <stdio.h>
#include <SDL2/SDL.h>

int main(void) {
	// attempt to initialize graphics system
    if (SDL_Init(SDL_INIT_VIDEO) != 0){ printf("Error initializing SDL: %s\n", SDL_GetError()); return 1; }

    printf("Initialization successful!\n");
    // clean up resources before exiting!
    SDL_Quit();
  return 0;
  }