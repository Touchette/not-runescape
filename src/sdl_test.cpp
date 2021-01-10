#include <stdio.h>
#include <SDL2/SDL.h>

int main(int argc, char *argv[])
{
	if (SDL_Init(SDL_INIT_VIDEO) != 0)
	{
		fprintf(stderr, "error initializing SDL: %s\n", SDL_GetError());
		return 1;
	}

	fprintf(stdout, "success\n");

	SDL_Quit();

	return 0;
}
