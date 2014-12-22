#include <stdlib.h>
#include <stdio.h>
#include <time.h>

#include <SDL2/SDL.h>

SDL_Window* gpSDLWindow = NULL;
SDL_Surface* gpSDLSurface = NULL;
SDL_Renderer* gpSDLRenderer = NULL;
int gQuitSignalled = 0;

int open_window(int width, int height) {
  if (SDL_Init(SDL_INIT_VIDEO) < 0) {
    printf("Cannot initialize video: %s\n", SDL_GetError());
    return -1;
  }
  gpSDLWindow = SDL_CreateWindow("BDGRT",
				 SDL_WINDOWPOS_UNDEFINED,
				 SDL_WINDOWPOS_UNDEFINED,
				 width,
				 height,
				 SDL_WINDOW_SHOWN);
  if (gpSDLWindow == NULL) {
    printf("Cannot open window: %s\n", SDL_GetError());
    return -2;
  }

  //gpSDLSurface = SDL_GetWindowSurface(gpSDLWindow);
  gpSDLRenderer = SDL_CreateRenderer(gpSDLWindow, -1, SDL_RENDERER_ACCELERATED);
  if (gpSDLRenderer == NULL) {
    printf("Cannot create renderer: %s\n", SDL_GetError());
    return -3;
  }
  return 0;
}

void clear_window(int red, int green, int blue) {
  /*
  SDL_FillRect(gpSDLSurface, 
	       NULL, 
	       SDL_MapRGB(gpSDLSurface->format,
			  red & 0xff, green& 0xff, blue & 0xff));
  */
  
   //Clear screen
  SDL_SetRenderDrawColor( gpSDLRenderer, 
			  red & 0xFF, green & 0xFF, blue & 0xFF, 0xFF );
  SDL_RenderClear( gpSDLRenderer );
}

void flip() {
  SDL_RenderPresent(gpSDLRenderer);
  SDL_UpdateWindowSurface(gpSDLWindow);
}

void sdl_tick_input() {
  SDL_Event e;
  while (SDL_PollEvent(&e) != 0) {
    if (e.type == SDL_QUIT) {
      gQuitSignalled = 1;
    }
  }
}

int sdl_quit_signalled() {
  return gQuitSignalled;
}

void sdl_draw_rect(int left, int top, int width, int height, int r, int g, int b) {
  SDL_Rect fillRect = { left, top, width, height };
  SDL_SetRenderDrawColor( gpSDLRenderer, r & 0xff, g & 0xff, b & 0xff, 0xFF );        
  SDL_RenderFillRect( gpSDLRenderer, &fillRect );
}

int rand_int(int max) {
  return rand() % max;
}

void srand_from_time() {
  srand(time(NULL));
}

void delay(int ms) {
  SDL_Delay(ms);
}
