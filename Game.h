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

		// metoda ustawiaj�ca "lini� produkcyjn�" na kt�rej obecnie pracujemy
		void setType(Types type)
		{
			delete c;					// usuwamy wska�nik na stary stan, star� lini�
			this -> type = type;		// "linia produkcyjna" na kt�rej obecnie pracujemy

			switch(type)
			{
				case console:
					c = new Console();		// wska�nik na obiekt typu Console
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