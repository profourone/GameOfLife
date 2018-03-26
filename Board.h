#ifndef BOARD_H
#define BOARD_H

#include "Cell.h"
#include "Constants.h"

class Board
{

	protected:

		Cell cells[SIDE_LENGTH][SIDE_LENGTH];	// tablica komórek

	public:

		Board();

		Board(const Board& second);

		Board& operator=(const Board& second);

		~Board();

		// Metoda, generuj¹ca szybowiec
		void generateGilder(int startPos);
		// Metoda, generuj¹ca œwiat³a uliczne
		void generateBlinker(int startPos);
		// Metoda zwracaj¹ca komórkê o danym wierszu i kolumnie.
		Cell& getCell(int row, int column);

};

#endif


