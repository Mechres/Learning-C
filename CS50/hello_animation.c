//
// Created by myagi on 1.10.2024.
//

#define SDL_MAIN_HANDLED
#include <stdio.h>
#include <SDL2/SDL.h>
#include <SDL2/SDL_timer.h>
#include <SDL2/SDL_image.h>


#define WINDOW_WIDTH 640
#define WINDOW_HEIGHT 480

// speed in pixel/second
#define SCROLL_SPEED 300

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

	// Struct to hold the posiition and size of the sprite
    SDL_Rect dest;

	// get the dimensions of texture
	SDL_QueryTexture(tex, NULL, NULL, &dest.w, &dest.h);

	// position the sprite at the bottom center of the window
	// origin is the top left corner, positibe y is down
	dest.x = (WINDOW_WIDTH - dest.w) / 2;

	// require float resoluution for y position
	float y_pos = WINDOW_HEIGHT;

	// animation loop
	while (dest.y >= -dest.h) {
		// Clear the window
		SDL_RenderClear(rend);

		// set the y position in the struct
		dest.y = (int) y_pos;

		// draw the image to the window
		SDL_RenderCopy(rend, tex, NULL, &dest);
		SDL_RenderPresent(rend);

		// update sprite position
		y_pos -= (float) SCROLL_SPEED / 60;

		// wait 1/60th of a second
		SDL_Delay(1000/60);
	}

	// clean up resources before exiting!
	SDL_DestroyTexture(tex);
	SDL_DestroyRenderer(rend);
	SDL_DestroyWindow(win);
	IMG_Quit();
	SDL_Quit();
	return 0;
}