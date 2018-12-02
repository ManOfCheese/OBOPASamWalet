#pragma once
#include <iostream>
#include "life.h"
#include "Cell.h"

class LifeStandard: public Life {
public:
	LifeStandard();
	~LifeStandard();
	void generateRandomStart();
	void runSimulation();
	void drawGrid();
private:
	int checkForLivingNeighbors(int x, int y);
};

