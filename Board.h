#ifndef BOARD_H
#define BOARD_H

#include "Cell.h"
#include "Constants.h"

class Board
{

	protected:

		Cell cells[SIDE_LENGTH][SIDE_LENGTH];	// tablica kom�rek

	public:

		Board();

		Board(const Board& second);

		Board& operator=(const Board& second);

		~Board();

		// Metoda, generuj�ca szybowiec
		void generateGilder(int startPos);
		// Metoda, generuj�ca �wiat�a uliczne
		void generateBlinker(int startPos);
		// Metoda zwracaj�ca kom�rk� o danym wierszu i kolumnie.
		Cell& getCell(int row, int column);

};

#endif


