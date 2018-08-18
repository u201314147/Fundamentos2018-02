#include <SDL\SDL.h>
//#include <GL\glew.h>
#include "MainGame.h"
int main(int argc, char** argv)
{
	SDL_Init(SDL_INIT_EVERYTHING);
	MainGame maingame;
	maingame.run();
	system("PAUSE");
	return 0;

}