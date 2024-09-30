//
// Created by myagi on 30.09.2024.
//
#define SDL_MAIN_HANDLED
#include <stdio.h>
#include <SDL2/SDL.h>
#include "constants.h"

int game_is_running = FALSE;
SDL_Window* window = NULL;
SDL_Renderer* renderer = NULL;

int last_frame_time = 0;

struct ball {
	float x;
	float y;
	float width;
	float height;
} ball;

int initialize_window(void) {
	// Check SDL
	if (SDL_Init(SDL_INIT_EVERYTHING) != 0){fprintf(stderr, "Error initializing SDL.\n"); return FALSE;}
	// Create a window
	window = SDL_CreateWindow(NULL,
		SDL_WINDOWPOS_CENTERED,
		SDL_WINDOWPOS_CENTERED,
		WINDOW_WIDTH,
		WINDOW_HEIGHT,
		SDL_WINDOW_BORDERLESS
		);
	if (!window) {fprintf(stderr, "Error creating SDL window.\n"); return FALSE;}
	// Create Renderer
	renderer = SDL_CreateRenderer(window, -1, 0); // -1 default
	if (!renderer) {fprintf(stderr, "Error creating renderer.\n"); return FALSE;}
	return TRUE;
}

void process_input() {
	SDL_Event event;
	SDL_PollEvent(&event);
	switch (event.type) {
		case SDL_QUIT:
			game_is_running = FALSE;
			break;
		case SDL_KEYDOWN:
			if (event.key.keysym.sym == SDLK_ESCAPE){game_is_running = FALSE;}
			break;

	}

}
void setup() {
	ball.x = 20;
	ball.y = 20;
	ball.width = 15;
	ball.height = 15;
}
void update() {
	// Logic to keep a fixed timestep
		// Waste some time / sleep until we reach the frame target.
		//while(!SDL_TICKS_PASSED(SDL_GetTicks(), last_frame_time + FRAME_TARGET_TIME));
	// Sleep the execution until we reach the target frame time in milliseconds
	//int time_to_wait = FRAME_TARGET_TIME - (SDL_GetTicks() - last_frame_time);
	// Only call delay if we are too fast to process this frame
	//if (time_to_wait > 0 && time_to_wait < FRAME_TARGET_TIME) {SDL_Delay(time_to_wait);}

	// Get a delta time factor converted to seconds to be used to update my objects
	float delta_time = (SDL_GetTicks() - last_frame_time) / 1000.0f;

	last_frame_time = SDL_GetTicks();
	ball.x += 70 * delta_time;
	ball.y += 50 * delta_time;
}

void render() {
	SDL_SetRenderDrawColor(renderer, 0, 0, 0, 255);
	SDL_RenderClear(renderer);

	// Start drawing game objects
	// Draw a rectangle
	SDL_Rect ball_rect = {
			(int)ball.x,
			(int)ball.y,
		(int)ball.width,
		 (int)ball.height
	};
	SDL_SetRenderDrawColor(renderer, 255, 255, 255, 255);
	SDL_RenderFillRect(renderer, &ball_rect);

	SDL_RenderPresent(renderer);

}
void destroy_window() {
	SDL_DestroyRenderer(renderer);
	SDL_DestroyWindow(window);
	SDL_Quit();
}

int main() {
	game_is_running = initialize_window();

	setup();

	while (game_is_running) {
		process_input();
		update();
		render();
	}

	destroy_window();

	return 0;
  }