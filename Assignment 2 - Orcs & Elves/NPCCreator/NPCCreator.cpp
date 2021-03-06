// NPCCreator.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <vector>
#include <iostream>
#include "NPC.h"
#include "Orc.h"
#include "Elf.h"

void render(std::vector<NPC*> npcs) {
	for (auto& npc : npcs) {
		std::cout << "---" << std::endl;
		npc->render();
	}
	std::cout << "---" << std::endl;
}

int main() {
	std::vector<NPC*> npcs;

	NPC* npc;
	int npcType;
	std::string name;

	while (true) {
		std::cin >> npcType >> name;

		if (npcType == 0) {
			break;
		}
		else {
			npc = NPC::makeNPC(npcType, name);
		}
		npcs.push_back(npc);
		render(npcs);
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
