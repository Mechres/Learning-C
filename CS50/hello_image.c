//
// Created by myagi on 1.10.2024.
//

#define SDL_MAIN_HANDLED
#include <stdio.h>
#include <SDL2/SDL.h>
#include <SDL2/SDL_timer.h>
#include <SDL2/SDL_image.h>

int main(void) {
	// attempt to initialize graphics system
	if (SDL_Init(SDL_INIT_VIDEO|SDL_INIT_TIMER) != 0){ printf("Error initializing SDL: %s\n", SDL_GetError()); return 1; }
	SDL_Window* win = SDL_CreateWindow("Hello!", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, 640, 480, 0);
	if (!win) { printf("Error creating window: %s\n", SDL_GetError()); return 1; }

	// Create a renderer, which sets up the graphics hardware
	Uint32 render_flags = SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC;
	SDL_Renderer* rend = SDL_CreateRenderer(win, -1, render_flags);
	if (!rend) { printf("Error creating renderer: %s\n", SDL_GetError()); return 1; }

	// Load the image into memory using SDL_image library function
	SDL_Surface* surface = IMG_Load("img\\image.png");
	if (!surface) { printf("Error creating surface: %s\n", SDL_GetError()); return 1; }

	// load the image data into the graphics hardware's memory.
	SDL_Texture* tex = SDL_CreateTextureFromSurface(rend, surface);
	if (!tex) { printf("Error creating texture: %s\n", SDL_GetError()); SDL_DestroyRenderer(rend); SDL_DestroyWindow(win); SDL_Quit(); return 1; }

	// Clear the window
	SDL_RenderClear(rend);

	// draw the image to the window
	SDL_RenderCopy(rend, tex, NULL, NULL);
	SDL_RenderPresent(rend);

	SDL_Delay(5000);

	// clean up resources before exiting!
	SDL_DestroyTexture(tex);
	SDL_DestroyRenderer(rend);


	SDL_DestroyWindow(win);
	IMG_Quit();
	SDL_Quit();
	return 0;
}