#ifndef CONSOLE_H
#define CONSOLE_H

#include "Core.h"

class Console: public Core
{

	private:

		int refreshTime;	//	czas od�wie�ania

		// Metoda od�wie�aj�ca plansz�
		void refreshBoard() const;

	public:

		Console();

		Console(const Console& second);

		Console& operator=(const Console& second);

		~Console();

		// C++03
		virtual void drawBoard();
		// C++11
		//void drawBoard() override;

};

#endif
