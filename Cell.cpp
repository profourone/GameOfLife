#include "Cell.h"

Cell::Cell(): state(false)
{
}

Cell& Cell::operator=(const Cell& second)
{
	if(this != &second)
		state = second.state;
	return *this;
}

Cell::~Cell()
{
}

void Cell::setState(bool state)
{
	this -> state = state;
}

bool Cell::getState() const
{
	return state;
}
