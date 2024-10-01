//
// Created by myagi on 1.10.2024.
//
#define SDL_MAIN_HANDLED
#include <stdio.h>
#include <SDL2/SDL.h>

int main(void) {
	// attempt to initialize graphics system
	if (SDL_Init(SDL_INIT_VIDEO|SDL_INIT_TIMER) != 0){ printf("Error initializing SDL: %s\n", SDL_GetError()); return 1; }
	SDL_Window* win = SDL_CreateWindow("Hello!", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, 640, 480, 0);
	if (win == NULL) { printf("Error creating window: %s\n", SDL_GetError()); return 1; }
	SDL_Delay(5000);
	SDL_DestroyWindow(win);
	// clean up resources before exiting!
	SDL_Quit();
	return 0;
}