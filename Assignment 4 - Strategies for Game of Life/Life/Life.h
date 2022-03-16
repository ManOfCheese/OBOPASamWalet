#pragma once
#include <vector>
#include "Cell.h"

class Life {
public:
	Life();
	~Life();
	void runSimulation();
	void generateRandomStart();
	void generateEmptyStart();
	void spawnBlinker( int x, int y );
	void spawnGlider( int x, int y );
	void drawGrid();
	bool displayCells[ 25 ][ 25 ];
	bool calcCells[ 25 ][ 25 ];
protected:
	int checkForLivingNeighbors( int x, int y );
	int minNeighborToLive;
	int maxNeighborsToLive;
	int repopulationThreshold;
};

