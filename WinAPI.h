#ifndef WINAPI_H
#define WINAPI_H

#include "Game.h"

class WinAPI: public Game
{

	public:

		WinAPI();

		WinAPI(const WinAPI& second);

		WinAPI& operator=(const WinAPI& second);

		~WinAPI();

};

#endif
