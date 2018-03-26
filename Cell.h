#ifndef CELL_H
#define CELL_H

class Cell
{
	protected:

		bool state;		// stan komórki (true - ¿ywa, false - martwa)

	public:

		Cell();

		Cell(const Cell& second);

		Cell& operator=(const Cell& second);

		~Cell();

		// Metoda ustawiaj¹ca stan komórki
		void setState(bool state);
		// Metoda zwracaj¹ca stan komórki
		bool getState() const;

};

#endif