#include "pch.h"
#include "Life.h"
#include <iostream>

Life::Life() {
}


Life::~Life() {
}

void Life::generateRandomStart() {
	for( size_t i = 0; i < 25; i++ ) {
		for( size_t j = 0; j < 25; j++ ) {
			bool _isAlive = ( rand() % 2 ) < 1;
			bool cell;
			cell = _isAlive;
			displayCells[ i ][ j ] = cell;
		}
	}
}

void Life::generateEmptyStart() {
	for( size_t i = 0; i < 25; i++ ) {
		for( size_t j = 0; j < 25; j++ ) {
			bool cell;
			cell = false;
			displayCells[ i ][ j ] = cell;
		}
	}
}

void Life::spawnBlinker( int x, int y ) {
	if( x > 24 ) { x = 24; }
	if( x < 1 ) { x = 1; }
	if( y > 24 ) { y = 24; }
	if( y < 1 ) { y = 1; }

	displayCells[ x ][ y ] = true;
	displayCells[ x ][ y - 1 ] = true;
	displayCells[ x ][ y + 1 ] = true;
}

void Life::spawnGlider( int x, int y ) {
	if( x > 24 ) { x = 24; }
	if( x < 1 ) { x = 1; }
	if( y > 24 ) { y = 24; }
	if( y < 1 ) { y = 1; }

	displayCells[ x ][ y - 1 ] = true;
	displayCells[ x - 1 ][ y - 1 ] = true;
	displayCells[ x + 1 ][ y - 1 ] = true;
	displayCells[ x ][ y + 1 ] = true;
	displayCells[ x + 1 ][ y ] = true;
}

void Life::drawGrid() {
	for( size_t i = 0; i < 25; i++ ) {
		for( size_t j = 0; j < 25; j++ ) {
			if( displayCells[ i ][ j ] ) {
				std::cout << "X";
			}
			else if( !displayCells[ i ][ j ] ) {
				std::cout << "-";
			}
		}
		std::cout << std::endl;
	}
	std::cout << std::endl;
}

int Life::checkForLivingNeighbors( int i, int j ) {
	int liveNeighbourCount = 0;

	for( int x = -1; x < 2; x++ ) {
		for( int y = -1; y < 2; y++ ) {
			if( i + x < 25 && i + x > -1 && j + y < 25 && j + y > -1 ) {
				if( x == 0 && y == 0 ) { continue; }
				if( calcCells[ i + x ][ j + y ] ) {
					liveNeighbourCount++;
				}
			}
		}
	}

	return liveNeighbourCount;
}
