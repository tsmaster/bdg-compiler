#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <math.h>

#ifdef EMSCRIPTEN
#include <SDL.h>
#include <SDL_image.h>
#include <emscripten/emscripten.h>
#else
#include <sdl2/SDL.h>
#include <sdl2/SDL_image.h>
#endif

void bdg_game_init();
void bdg_game_loop();


SDL_Window* gpSDLWindow = NULL;
SDL_Surface* gpSDLSurface = NULL;
int gQuitSignalled = 0;
const char *gKeysDown;
int numKeys;

char* gGameTitle = "BDGRT";

int gScreenWidth = 640;
int gScreenHeight = 480;

unsigned char gSDLDrawColorRed = 255;
unsigned char gSDLDrawColorGreen = 255;
unsigned char gSDLDrawColorBlue = 255;
unsigned char gSDLDrawColorAlpha = 255;

// functions:

/*

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
  SDL_FillRect(gpSDLSurface, NULL, SDL_MapRGB(gpSDLSurface->format, red, green, blue));
}

void sdl_tick_input() {
// TODO: process input
}

void sdl_draw_rect(int left, int top, int width, int height, int r, int g, int b) {
  SDL_Rect fillRect = { left, top, width, height };
  SDL_FillRect(gpSDLSurface, &fillRect, SDL_MapRGB(gpSDLSurface->format, r, g, b));
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
  gpSDLSurface = SDL_SetVideoMode(gScreenWidth,
				  gScreenHeight,
				  32,
				  SDL_SWSURFACE);

  if(gpSDLSurface == NULL ) {
    printf( "Surface could not be created! SDL_Error: %s\n", SDL_GetError() );
    return 1;
  }

  return 0;
}

void loop() {
  bdg_game_loop();

  //Update screen
  SDL_Flip(gpSDLSurface);
}

void shutdown() {
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
