#pragma once
#include <vector>
#include "Cell.h"

class Life {
public:
	Life();
	~Life();
	virtual void runSimulation() = 0;
	Cell cells[25][25];
	Cell calcCells[25][25];
};

