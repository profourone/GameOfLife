#include <cstdlib>
#include "Game.h"


Game::Game(): type(DEFAULT_OUTPUT_TYPE),
			  c(0)
{
	setType(DEFAULT_OUTPUT_TYPE);
}

Game::~Game()
{
	if (c)
		delete c;
}

void Game::play()
{
	c -> init();
	while (!c -> isEnded())
	{
		c -> drawBoard();
		c -> nextUnitOfTime();
	}
	if(type == console)
		system("pause");
}
