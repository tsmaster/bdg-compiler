#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <math.h>

#include <SDL2/SDL.h>
#include <SDL2/SDL_image.h>
#include <SDL2/SDL_opengl.h>

#ifdef EMSCRIPTEN
#include <emscripten/emscripten.h>
#endif

int gQuitSignalled = 0;
const char *gKeysDown;
int numKeys;

char* gWindowTitle = "BDGRT";

int gScreenWidth = 640;
int gScreenHeight = 480;

SDL_Window* gWindow;
SDL_Surface* gScreenSurface;
SDL_Renderer* gRenderer;
SDL_GLContext gGLContext;


// gl wrappers

void gl_clear(int bits) {
  glClear(bits);
}

void gl_viewport(float x, float y, float width, float height) {
  glViewport(x, y, width, height);
}

void gl_matrixMode(int mode) {
  glMatrixMode(mode);
}

void gl_loadIdentity() {
  glLoadIdentity();
}

void gl_flip() {
  SDL_GL_SwapWindow(gWindow);
}

int gl_openWindow(int x, int y) {
  //Initialize SDL
  if (SDL_Init(SDL_INIT_VIDEO) < 0) {
    printf( "SDL could not initialize! SDL_Error: %s\n", SDL_GetError() );
    return -1;
  } else {
    //Use OpenGL 2.1
    SDL_GL_SetAttribute( SDL_GL_CONTEXT_MAJOR_VERSION, 2 );
    SDL_GL_SetAttribute( SDL_GL_CONTEXT_MINOR_VERSION, 1 );
    
    //Create window
    gScreenWidth = x;
    gScreenHeight = y;
    
    gWindow = SDL_CreateWindow(gWindowTitle,
			      SDL_WINDOWPOS_UNDEFINED,
			      SDL_WINDOWPOS_UNDEFINED,
			      gScreenWidth,
			      gScreenHeight,
			      SDL_WINDOW_OPENGL | SDL_WINDOW_SHOWN );

    if (gWindow == NULL) {
      printf( "Window could not be created! SDL_Error: %s\n", SDL_GetError() );
      return -2;
    } else {
      //Create context
      gGLContext = SDL_GL_CreateContext( gWindow );
      if( gGLContext == NULL ) {
                printf( "OpenGL context could not be created! SDL Error: %s\n", SDL_GetError() );
                return -3;
      } else {
	//Use Vsync
	if( SDL_GL_SetSwapInterval( 1 ) < 0 ) {
	  printf( "Warning: Unable to set VSync! SDL Error: %s\n", SDL_GetError() );
	}
      }
    }
  }

  gKeysDown = SDL_GetKeyboardState(&numKeys);
}

void gl_begin(int mode) {
  glBegin(mode);
}

void gl_end() {
  glEnd();
}

void gl_color3f(float r, float g, float b) {
  glColor3f(r, g, b);
}

void gl_vertex3f(float x, float y, float z) {
  glVertex3f(x, y, z);
}

void gl_pushMatrix() {
  glPushMatrix();
}

void gl_popMatrix() {
  glPopMatrix();
}

void gl_translateF(float x, float y, float z) {
  glTranslatef(x, y, z);
}

// Special case of just rotating within the x/y plane.
void gl_rotate(float angle) {
  float x = 0.0f;
  float y = 0.0f;
  float z = 1.0f;
  glRotatef(angle, x, y, z);
}

// Uniform scaling in all dimensions
void gl_scaleF(float scale) {
  glScalef(scale, scale, scale);
}



// GLU Functions:

void glu_ortho2d(float left, float right, float bottom, float top) {
  gluOrtho2D(left, right, bottom, top);
}

// misc functions:

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
  SDL_Delay(seconds / 1000);
}

float get_current_time() {
  float ticks = SDL_GetTicks();
  return ticks / 1000;
}



// Math
float sin_f(float theta_radians) {
  return sin(theta_radians);
}

float cos_f(float theta_radians) {
  return cos(theta_radians);
}

float atan2_f(float y, float x) {
  return atan2(y,x);
}

// SDL wrappers (move to sdl?)
int sdl_quit_signalled() {
  return gQuitSignalled;
}

void sdl_tick_input() {
  SDL_Event e;
  while (SDL_PollEvent(&e) != 0) {
    switch (e.type) {
    case SDL_QUIT:
      gQuitSignalled = 1;
      break;
    case SDL_KEYDOWN:
      printf("key down: %d\n",e.key.keysym.scancode);
      break;
    case SDL_KEYUP:
      break;
    }
  }
}

int sdl_keydown(int key) {
  return gKeysDown[key]> 0 ? 1 : 0;
}

