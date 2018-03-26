#include <iostream>
#include <windows.h>
#include "Console.h"

Console::Console(): Core(), refreshTime(REFRESH_TIME)
{
}


Console::~Console()
{
}

/**
 * Metoda wy�wietlaj�ca plansz� na konsoli.
 * 
 * @return void
 */
void Console::drawBoard()
{
	refreshBoard();
	for (int i = 0; i < SIDE_LENGTH; i++)
	{
		for (int j = 0; j < SIDE_LENGTH; j++)
		{
			if(board.getCell(i, j).getState())
				std::cout << "o ";	// dla kom�rki �ywej
			else
				std::cout << ". ";	// dla kom�rki martwej
		}
		std::cout << std::endl;
	}
}

void Console::refreshBoard() const
{
	Sleep(refreshTime);
	system("cls");
}