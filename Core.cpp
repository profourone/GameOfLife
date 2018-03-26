#include "Core.h"


Core::Core() : end(false)
{
}

Core::~Core()
{
}

void Core::init()
{
	board.generateBlinker(3);
	board.generateGilder(6);
}

void Core::nextUnitOfTime()
{
	// bierze stan planszy w bie��cej jednostce czasu
	Board newBoard(board);
	// obliczanie ile razy jaka� kom�rka zmieni�a sw�j stan na planszy
	int changedState = 0;

	for (int i = 0; i < SIDE_LENGTH; i++)
	{
		for (int j = 0; j < SIDE_LENGTH; j++)
		{
			if (board.getCell(i, j).getState())
			{
				if (checkCellNeighbours(i, j) < MIN_CELLS_ALIVE || checkCellNeighbours(i, j) > MAX_CELLS_ALIVE)
				{
					changedState++;
					newBoard.getCell(i, j).setState(false);
				}

			}
			else
			{
				if (checkCellNeighbours(i, j) >= MIN_CELLS_DEAD && checkCellNeighbours(i, j) <= MAX_CELLS_DEAD)
				{
					changedState++;
					newBoard.getCell(i, j).setState(true);
				}

			}
		}
	}

	for (int i = 0; i < SIDE_LENGTH; i++)
	{
		for (int j = 0; j < SIDE_LENGTH; j++)
			board.getCell(i, j).setState(newBoard.getCell(i, j).getState());
	}

	// je�eli wszystkie kom�rki umr� lub nie s� w stanie zmieni� swoich stan�w
	if (changedState == 0)
		end = true;
}

int Core::checkCellNeighbours(int row, int column)
{
	// ilo�� �ywych s�siad�w wok� kom�rki
	int neighbours = 0;

	for (int i = row - 1; i <= row + 1; i++)
	{
		for (int j = column - 1; j <= column + 1; j++)
		{
			if ((i == row && j == column) || i < 0 || j < 0 || i >= SIDE_LENGTH || j >= SIDE_LENGTH)
				continue;
			if (board.getCell(i, j).getState())
				neighbours++;
		}
	}

	return neighbours;	// zwracamy ilo�� �ywych s�siad�w wok� kom�rki
}

bool Core::isEnded() const
{
	return end;
}
