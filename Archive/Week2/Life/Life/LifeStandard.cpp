#include "pch.h"
#include "LifeStandard.h"

LifeStandard::LifeStandard() {
}

LifeStandard::~LifeStandard() {
}

void LifeStandard::runSimulation() {
	for( size_t i = 0; i < 25; i++ ) {
		for( size_t j = 0; j < 25; j++ ) {
			calcCells[ i ][ j ] = displayCells[ i ][ j ];
		}
	}

	for (size_t i = 0; i < 25; i++) {
		for (size_t j = 0; j < 25; j++) {
			if ( calcCells[ i ][ j ] ) {
				if (checkForLivingNeighbors( i, j ) == 2 || checkForLivingNeighbors( i, j ) == 3 ) {
					displayCells[ i ][ j ] = true;
				}
				else {
					displayCells[ i ][ j ] = false;
				}
			}
			else if ( !calcCells[ i ][ j ] ) {
				if ( checkForLivingNeighbors( i, j ) == 3 ) {
					displayCells[ i ][ j ] = true;
				}
			}
		}
	}
}
