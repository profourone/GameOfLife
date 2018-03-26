#ifndef GAME_H
#define GAME_H

#include "Console.h"

class Game
{

	public:

		enum Types
		{
			console,	// 0
			qt,			// 1 - opcjonalne
			sfml		// 2 - opcjonalne
		};

		Game();

		Game(const Game& second);

		Game& operator=(const Game& second);

		~Game();

		void play();

		Types getType() const
		{
			return type;
		}

		// metoda ustawiaj¹ca "liniê produkcyjn¹" na której obecnie pracujemy
		void setType(Types type)
		{
			delete c;					// usuwamy wskaŸnik na stary stan, star¹ liniê
			this -> type = type;		// "linia produkcyjna" na której obecnie pracujemy

			switch(type)
			{
				case console:
					c = new Console();		// wskaŸnik na obiekt typu Console
					break;
				default:
					c = new Console();
					break;
			}
		}

	private:

		Types type;
		Core * c;

		const Types DEFAULT_OUTPUT_TYPE = console;

};

#endif