// Life.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include "Life.h"
#include "LifeStandard.h"
#include "LifeCustom.h"
#include "LifeCustom2.h"
#include <iostream>
#include <ctime>
#include <windows.h>

int main() {
	srand(std::time(NULL));

	LifeStandard life;
	life.generateEmptyStart();
	life.spawnBlinker(12, 12);
	life.spawnGlider( 5, 22 );
	while (true) {
		life.runSimulation();
		life.drawGrid();
		Sleep(500);
	}
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
