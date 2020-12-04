#include "pch.h"
#include "LifeCustom.h"

LifeCustom::LifeCustom() {
}

LifeCustom::~LifeCustom() {
}

void LifeCustom::runSimulation() {
	for( size_t i = 0; i < 25; i++ ) {
		for( size_t j = 0; j < 25; j++ ) {
			calcCells[ i ][ j ] = displayCells[ i ][ j ];
		}
	}

	for( size_t i = 0; i < 25; i++ ) {
		for( size_t j = 0; j < 25; j++ ) {
			if( calcCells[ i ][ j ] ) {
				if( checkForLivingNeighbors( i, j ) == 1 || checkForLivingNeighbors( i, j ) == 2 ) {
					displayCells[ i ][ j ] = true;
				}
				else {
					displayCells[ i ][ j ] = false;
				}
			}
			else if( !calcCells[ i ][ j ] ) {
				if( checkForLivingNeighbors( i, j ) == 2 ) {
					displayCells[ i ][ j ] = true;
				}
			}
		}
	}
}