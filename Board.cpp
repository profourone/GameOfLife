#include "Board.h"


Board::Board()
{
}

Board::Board(const Board& second)
{
	for (int i = 0; i < SIDE_LENGTH; i++)
	{
		for (int j = 0; j < SIDE_LENGTH; j++)
			cells[i][j] = second.cells[i][j];
	}
}

Board::~Board()
{
}

void Board::generateGilder(int startPos)
{
	if(startPos+2 < SIDE_LENGTH && startPos >= 0)
	{
		cells[startPos][startPos + 1].setState(true);
		cells[startPos + 1][startPos + 2].setState(true);
		cells[startPos + 2][startPos].setState(true);
		cells[startPos + 2][startPos + 1].setState(true);
		cells[startPos + 2][startPos + 2].setState(true);
	}
}

void Board::generateBlinker(int startPos)
{
	if (startPos + 2 < SIDE_LENGTH && startPos >= 0)
	{
		for(int i = 0; i < 3; i++)
			cells[startPos][startPos+i].setState(true);
	}
}

Cell& Board::getCell(int row, int column)
{
	return cells[row][column];
}
