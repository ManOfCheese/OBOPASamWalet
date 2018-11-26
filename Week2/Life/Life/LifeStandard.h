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
private:
	void drawGrid();
	int checkForLivingNeighbors(int x, int y);
};

