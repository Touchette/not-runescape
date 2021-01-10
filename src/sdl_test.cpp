#include <stdio.h>
#include <SDL2/SDL.h>
#include <SDL2/SDL_video.h>

int main(int argc, char *argv[])
{
	if (SDL_Init(SDL_INIT_VIDEO) != 0)
	{
		fprintf(stderr, "error initializing SDL: %s\n", SDL_GetError());
		return 1;
	}

        SDL_Window *window = SDL_CreateWindow("Test",
                SDL_WINDOWPOS_CENTERED,
                SDL_WINDOWPOS_CENTERED,
                640,
                480,
                0);

        if (window == NULL)
        {
            fprintf(stderr, "could not create window: %s\n", SDL_GetError());
            return 1;
        }

        SDL_Delay(3000);

        SDL_DestroyWindow(window);
	SDL_Quit();

	return 0;
}
