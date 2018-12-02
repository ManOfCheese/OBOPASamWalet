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
			if (cells[i][j].isAlive) {
				if (checkForLivingNeighbors(i, j) < 2) {
					cells[i][j].isAlive = false;
				}
				else if (checkForLivingNeighbors(i, j) > 3) {
					cells[i][j].isAlive = false;
				}
			}
			if (!cells[i][j].isAlive) {
				if (checkForLivingNeighbors(i, j) > 2) {
					cells[i][j].isAlive = true;
				}
			}
		}
	}
}

void LifeStandard::drawGrid() {
	for (size_t i = 0; i < 25; i++) {
		for (size_t j = 0; j < 25; j++) {
			if (cells[i][j].isAlive) {
				std::cout << "A";
			}
			if (!cells[i][j].isAlive) {
				std::cout << " ";
			}
		}
	}
	std::cout << std::endl;
}

int LifeStandard::checkForLivingNeighbors(int i, int j)
{
	int liveNeighbourCount = 0;
	if (cells[i+1][j].isAlive) {
		liveNeighbourCount++;
	}
	if (cells[i][j+1].isAlive) {
		liveNeighbourCount++;
	}
	if (cells[i+1][j+1].isAlive) {
		liveNeighbourCount++;
	}
	if (cells[i-1][j].isAlive) {
		liveNeighbourCount++;
	}
	if (cells[i][j-1].isAlive) {
		liveNeighbourCount++;
	}
	if (cells[i-1][j-1].isAlive) {
		liveNeighbourCount++;
	}
	if (cells[i+1][j-1].isAlive) {
		liveNeighbourCount++;
	}
	if (cells[i-1][j+1].isAlive) {
		liveNeighbourCount++;
	}
	return liveNeighbourCount;
}
