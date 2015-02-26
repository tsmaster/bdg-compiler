#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <math.h>

#include <SDL/SDL.h>

#ifdef __EMSCRIPTEN__
#include <emscripten.h>
#endif

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
  gpSDLSurface = SDL_SetVideoMode(width,
				  height,
				  32,
				  SDL_SWSURFACE);
  if (gpSDLSurface == NULL) {
    printf("Cannot open window: %s\n", SDL_GetError());
    return -2;
  }

  gKeysDown = SDL_GetKeyboardState(&numKeys);
  return 0;
}

void clear_window(int red, int green, int blue) {
  //Clear screen
  SDL_FillRect(gpSDLSurface, NULL, SDL_MapRGB(gpSDLSurface->format, red, green, blue));
}

void flip() {
  SDL_Flip(gpSDLSurface);
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
  SDL_FillRect(gpSDLSurface, &fillRect, SDL_MapRGB(gpSDLSurface->format, r, g, b));
}

int rand_int(int max) {
  return rand() % max;
}

void srand_from_time() {
  srand(time(NULL));
}

void delay(int ms) {
  //SDL_Delay(ms);
}

int sdl_keydown(int key) {
  return gKeysDown[key]> 0 ? 1 : 0;
}


int m_sin(int milliradians, int scale) {
  return (int)(sin(milliradians / 1000.0f) * scale + 0.5f);
}

int m_cos(int milliradians, int scale) {
  return (int)(cos(milliradians / 1000.0f) * scale + 0.5f);
}

int m_atan2(int y, int x) {
  return (int)(atan2(y, x) * 1000);
}
