#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <math.h>

#include <SDL2/SDL.h>
#include <SDL2/SDL_image.h>

#ifdef EMSCRIPTEN
#include <emscripten/emscripten.h>
#endif

int bdg_game_init();
int bdg_game_loop();


SDL_Window* gpSDLWindow = NULL;
SDL_Surface* gpSDLSurface = NULL;
SDL_Renderer* gpSDLRenderer = NULL;
int gQuitSignalled = 0;
const char *gKeysDown;
int numKeys;

char* gGameTitle = "BDGRT";

int gScreenWidth = 640;
int gScreenHeight = 480;


// functions:

/*
warning: unresolved symbol: sdl_tick_input
warning: unresolved symbol: sdl_draw_rect
warning: unresolved symbol: sdl_keydown
warning: unresolved symbol: srand_from_time
warning: unresolved symbol: rand_int

 */


int rand_int(int max) {
  return rand() % max;
}

void srand_from_time() {
  srand(time(NULL));
}

void delay(int ms) {
  SDL_Delay(ms);
}

int sdl_keydown(int key) {
  return gKeysDown[key]> 0 ? 1 : 0;
}

void sdl_clear_window(int red, int green, int blue) {
  SDL_SetRenderDrawColor( gpSDLRenderer, 
			  red & 0xFF, green & 0xFF, blue & 0xFF, 0xFF );
  SDL_RenderClear( gpSDLRenderer );
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

void sdl_draw_rect(int left, int top, int width, int height, int r, int g, int b) {
  SDL_Rect fillRect = { left, top, width, height };
  SDL_SetRenderDrawColor( gpSDLRenderer, r & 0xff, g & 0xff, b & 0xff, 0xFF );        
  SDL_RenderFillRect( gpSDLRenderer, &fillRect );
}



//
int m_sin(int milliradians, int scale) {
  return (int)(sin(milliradians / 1000.0f) * scale + 0.5f);
}

int m_cos(int milliradians, int scale) {
  return (int)(cos(milliradians / 1000.0f) * scale + 0.5f);
}

int m_atan2(int y, int x) {
  return (int)(atan2(y, x) * 1000);
}

int raise(int error_code) {
  printf("error! %d\n", error_code);
  return error_code;
}



int init() {
  srand(time(NULL));

  if( SDL_Init( SDL_INIT_VIDEO ) < 0 ) {
    printf( "SDL could not initialize! SDL_Error: %s\n", SDL_GetError() );
    return 1;
  }

  //Create window
  gpSDLWindow = SDL_CreateWindow(gGameTitle,
				 SDL_WINDOWPOS_UNDEFINED,
				 SDL_WINDOWPOS_UNDEFINED,
				 gScreenWidth,
			         gScreenHeight,
                                 SDL_WINDOW_SHOWN );
  if(gpSDLWindow == NULL ) {
    printf( "Window could not be created! SDL_Error: %s\n", SDL_GetError() );
    return 1;
  }

  gpSDLRenderer = SDL_CreateRenderer(gpSDLWindow, -1, SDL_RENDERER_ACCELERATED);
  if(gpSDLRenderer == NULL) {
    printf("Renderer could not be created! SDL Error: %s\n", SDL_GetError());
    return 1;
  }

  SDL_SetRenderDrawColor(gpSDLRenderer, 0xFF, 0xFF, 0xFF, 0xFF);  

#ifndef EMSCRIPTEN
  int imgFlags = IMG_INIT_PNG;
  if( !( IMG_Init( imgFlags ) & imgFlags ) ) {
    printf( "SDL_image could not initialize! SDL_image Error: %s\n", IMG_GetError() );
    return 1;
  }
#endif

  gKeysDown = SDL_GetKeyboardState(&numKeys);

  return 0;
}

void loop() {
  SDL_RenderClear(gpSDLRenderer);
  SDL_SetRenderDrawColor(gpSDLRenderer, 0xFF, 0xFF, 0xFF, 0xFF);
  SDL_RenderClear(gpSDLRenderer);

  bdg_game_loop();

  //Update screen
  SDL_RenderPresent(gpSDLRenderer);
}

void shutdown() {
  SDL_DestroyRenderer(gpSDLRenderer);
  gpSDLRenderer = NULL;

  SDL_DestroyWindow(gpSDLWindow);
  gpSDLWindow = NULL;

//IMG_Quit();
  SDL_Quit();
}

int main(int argc, char *args[]){
  if (init() > 0) {
    printf("Failed to init system\n");
    return 1;
  }

  // call the game's init
  bdg_game_init();

#ifdef EMSCRIPTEN
  emscripten_set_main_loop(loop, 0, 1);
#else
  while(!quit) {
    loop();
  }
#endif

  shutdown();
  return 0;
}
