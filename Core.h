#ifndef CORE_H
#define CORE_H

#include "Board.h"

class Core
{

	protected:

		Board board;		//	plansza
		bool end;			//	stan gry, (true - zakoñczona, false - trwaj¹ca)

		// Metoda zwracaj¹ca liczbê s¹siadów danej komórki
		int checkCellNeighbours(int row, int column);

	public:

		Core();

		Core(const Core& second);

		Core& operator=(const Core& second);

		virtual ~Core();

		// Metoda inicjalizacyjna gry
		void init();
		// Metoda ustawiaj¹ca planszê na nastêpn¹ jednostkê czasu
		void nextUnitOfTime();
		// Metoda zwracaj¹ca stan gry 
		bool isEnded() const;

		virtual void drawBoard() = 0;

};

#endif