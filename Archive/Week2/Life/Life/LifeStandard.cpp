#include "pch.h"
#include "LifeStandard.h"

LifeStandard::LifeStandard() {
}


LifeStandard::~LifeStandard() {
}

void LifeStandard::generateRandomStart() {
	for (size_t i = 0; i < 25; i++) {
		for (size_t j = 0; j < 25; j++) {
			bool _isAlive = (rand() % 2) < 1;
			Cell cell;
			cell.isAlive = _isAlive;
			cells[i][j] = cell;
			if (cell.isAlive) {
				std::cout << "A";
			}
			if (!cell.isAlive) {
				std::cout << " ";
			}
		}
	}
	std::cout << std::endl;
}

void LifeStandard::runSimulation() {
	for (size_t i = 0; i < 25; i++) {
		for (size_t j = 0; j < 25; j++) {
			if (calcCells[i][j].isAlive) {
				if (checkForLivingNeighbors(i, j) < 2) {
					calcCells[i][j].isAlive = false;
				}
				else if (checkForLivingNeighbors(i, j) > 3) {
					calcCells[i][j].isAlive = false;
				}
			}
			if (!calcCells[i][j].isAlive) {
				if (checkForLivingNeighbors(i, j) > 2) {
					calcCells[i][j].isAlive = true;
				}
			}
		}
	}
}

void LifeStandard::drawGrid() {
	for (size_t i = 0; i < 25; i++) {
		for (size_t j = 0; j < 25; j++) {
			cells[i][j] = calcCells[i][j];
		}
	}
	
	for (size_t i = 0; i < 25; i++) {
		for (size_t j = 0; j < 25; j++) {
			if (cells[i][j].isAlive) {
				std::cout << "A";
			}
			else /*if (!cells[i][j].isAlive)*/ {
				std::cout << " ";
			}
		}
	}
	std::cout << std::endl;
}

int LifeStandard::checkForLivingNeighbors(int i, int j)
{
	int liveNeighbourCount = 0;
	if (calcCells[i+1][j].isAlive) {
		liveNeighbourCount++;
	}
	if (calcCells[i][j+1].isAlive) {
		liveNeighbourCount++;
	}
	if (calcCells[i+1][j+1].isAlive) {
		liveNeighbourCount++;
	}
	if (calcCells[i-1][j].isAlive) {
		liveNeighbourCount++;
	}
	if (calcCells[i][j-1].isAlive) {
		liveNeighbourCount++;
	}
	if (calcCells[i-1][j-1].isAlive) {
		liveNeighbourCount++;
	}
	if (calcCells[i+1][j-1].isAlive) {
		liveNeighbourCount++;
	}
	if (calcCells[i-1][j+1].isAlive) {
		liveNeighbourCount++;
	}
	return liveNeighbourCount;
}
