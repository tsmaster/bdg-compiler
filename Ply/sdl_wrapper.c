#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <math.h>

#include <SDL2/SDL.h>

SDL_Window* gpSDLWindow = NULL;
SDL_Surface* gpSDLSurface = NULL;
SDL_Renderer* gpSDLRenderer = NULL;
int gQuitSignalled = 0;
const char *gKeysDown;
int numKeys;


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

  gKeysDown = SDL_GetKeyboardState(&numKeys);
  return 0;
}

void clear_window(int red, int green, int blue) {
   //Clear screen
  SDL_SetRenderDrawColor( gpSDLRenderer, 
			  red & 0xFF, green & 0xFF, blue & 0xFF, 0xFF );
  SDL_RenderClear( gpSDLRenderer );
}

void sdl_clear_window(int r, int g, int b) {
  clear_window(r, g, b);
}

void flip() {
  SDL_RenderPresent(gpSDLRenderer);
  SDL_UpdateWindowSurface(gpSDLWindow);
}

void sdl_tick_input() {
  SDL_Event e;
  while (SDL_PollEvent(&e) != 0) {
    switch (e.type) {
    case SDL_QUIT:
      gQuitSignalled = 1;
      break;
    case SDL_KEYDOWN:
      //printf("key down: %d\n",e.key.keysym.scancode);
      break;
    case SDL_KEYUP:
      break;
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

void sdl_draw_rect_f(float left, float top, float width, float height, int r, int g, int b) {
  int i_left = (int) left;
  int i_top = (int) top;
  int i_width = (int) width;
  int i_height = (int) height;

  sdl_draw_rect(i_left, i_top, i_width, i_height, r, g, b);
}

int rand_int(int max) {
  return rand() % max;
}

float rand_float(float max) {
  return max / RAND_MAX * rand();
}

void srand_from_time() {
  srand(time(NULL));
}

void delay(int ms) {
  SDL_Delay(ms);
}

void delay_f(float seconds) {
  int ms = (int)(seconds*1000);
  delay(ms);
}

int sdl_keydown(int key) {
  return gKeysDown[key]> 0 ? 1 : 0;
}


//
int m_sin(int milliradians, int scale) {
  return (int)(sin(milliradians / 1000.0f) * scale + 0.5f);
}

int m_cos(int milliradians, int scale) {
  return (int)(cos(milliradians / 1000.0f) * scale + 0.5f);
}

float m_cos_f(float radians) {
  return cos(radians);
}

float m_sin_f(float radians) {
  return sin(radians);
}

int m_atan2(int y, int x) {
  return (int)(atan2(y, x) * 1000);
}
