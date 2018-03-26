#ifndef CELL_H
#define CELL_H

class Cell
{
	protected:

		bool state;		// stan kom�rki (true - �ywa, false - martwa)

	public:

		Cell();

		Cell(const Cell& second);

		Cell& operator=(const Cell& second);

		~Cell();

		// Metoda ustawiaj�ca stan kom�rki
		void setState(bool state);
		// Metoda zwracaj�ca stan kom�rki
		bool getState() const;

};

#endif