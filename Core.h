#ifndef CORE_H
#define CORE_H

#include "Board.h"

class Core
{

	protected:

		Board board;		//	plansza
		bool end;			//	stan gry, (true - zako�czona, false - trwaj�ca)

		// Metoda zwracaj�ca liczb� s�siad�w danej kom�rki
		int checkCellNeighbours(int row, int column);

	public:

		Core();

		Core(const Core& second);

		Core& operator=(const Core& second);

		virtual ~Core();

		// Metoda inicjalizacyjna gry
		void init();
		// Metoda ustawiaj�ca plansz� na nast�pn� jednostk� czasu
		void nextUnitOfTime();
		// Metoda zwracaj�ca stan gry 
		bool isEnded() const;

		virtual void drawBoard() = 0;

};

#endif