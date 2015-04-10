#include <SDL.h>
// #include <gl\glew.h>
#include <SDL_opengl.h>
#include <GL/gl.h>
#include <GL/glut.h>
#include <stdio.h>
#include <string>
#include <iostream>

int main(int argc[], char* argv) {
    if (SDL_Init(SDL_INIT_VIDEO|SDL_INIT_TIMER) != 0) {
        std::cerr << "SDL_Init: " << SDL_GetError() << std::endl;
        return 1;
    }

    SDL_Window* window = SDL_CreateWindow("OpenGL Demo", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, 640, 480, SDL_WINDOW_OPENGL);
    if(window == NULL) {
        std::cerr << "SDL_Window: " << SDL_GetError() << std::endl;
        return 1;
    }

    SDL_GLContext context = SDL_GL_CreateContext(window);
    if(context == NULL) {
        std::cerr << "SDL_GL_CreateContext: " << SDL_GetError() << std::endl;
        return 1;
    }

    glClearColor(0, 0, 0, 1);
    glClear(GL_COLOR_BUFFER_BIT);
    SDL_GL_SwapWindow(window);

    // while(true) {
    //
    // }

    SDL_GL_DeleteContext(context);
    SDL_DestroyWindow(window);

}
