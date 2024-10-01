//
// Created by myagi on 1.10.2024.
//

#define SDL_MAIN_HANDLED
#include <stdio.h>
#include <SDL2/SDL.h>
#include <SDL2/SDL_timer.h>
#include <SDL2/SDL_image.h>
#include <math.h>

#define WINDOW_WIDTH 640
#define WINDOW_HEIGHT 400

// speed in pixel/second
#define SCROLL_SPEED 300

#define SPEED 300

int main(void) {
	// attempt to initialize graphics system
	if (SDL_Init(SDL_INIT_VIDEO|SDL_INIT_TIMER) != 0){ printf("Error initializing SDL: %s\n", SDL_GetError()); return 1; }
	SDL_Window* win = SDL_CreateWindow("Hello!", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, 640, 400, 0);
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

	// get and scale the dimensions of texture
	SDL_QueryTexture(tex, NULL, NULL, &dest.w, &dest.h);
	dest.w /= 4;
	dest.h /= 4;

	// start sprite in center of the screen
	float x_pos = (WINDOW_HEIGHT - dest.w) / 2;
	float y_pos = (WINDOW_HEIGHT - dest.h) / 2;

	float x_vel = 0;
	float y_vel = 0;

    // keep track of which inputs are given
    int up = 0;
    int down = 0;
    int left = 0;
    int right = 0;


	// set to 1 when window close button is pressed
	int close_requested = 0;

	// position the sprite at the bottom center of the window
	// origin is the top left corner, positibe y is down
	dest.x = (WINDOW_WIDTH - dest.w) / 2;

	// animation loop
	while (!close_requested) {

		// process events
		SDL_Event event;
		while (SDL_PollEvent(&event)) {if (event.type == SDL_QUIT) { close_requested = 1;}}

		// get cursor position relative to window
		int mouse_x, mouse_y;
		int buttons = SDL_GetMouseState(&mouse_x, &mouse_y);

		// determine velocity toward mouse
		int target_x = mouse_x - dest.w / 2;
		int target_y = mouse_y - dest.h / 2;
		float delta_x = target_x - x_pos;
		float delta_y = target_y - y_pos;
		float distance = sqrt(delta_x * delta_x + delta_y * delta_y);

		// prevent jitter
		if (distance < 5) { x_vel = y_vel = 0;}
		else {
			x_vel = delta_x * SPEED / distance;
			y_vel = delta_y * SPEED / distance;
		}


		// reverse velocity if mouse button 1 pressed
		if (buttons & SDL_BUTTON(SDL_BUTTON_LEFT)) {
			x_vel = -x_vel;
			y_vel = -y_vel;
		}

		// Update positions
		x_pos += x_vel / 60;
		y_pos += y_vel / 60;

		// Collision detection with bounds
		if (x_pos <= 0){ x_pos = 0; }
		if (y_pos <= 0){ y_pos = 0; }
		if (x_pos >= WINDOW_WIDTH - dest.w){ x_pos = WINDOW_WIDTH - dest.w;}
		if (y_pos >= WINDOW_HEIGHT -dest.h){ y_pos = WINDOW_HEIGHT - dest.h;}


		// set the positions in the struct
		dest.y = (int) y_pos;
		dest.x = (int) x_pos;

		// Clear the window
		SDL_RenderClear(rend);


		// draw the image to the window
		SDL_RenderCopy(rend, tex, NULL, &dest);
		SDL_RenderPresent(rend);


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