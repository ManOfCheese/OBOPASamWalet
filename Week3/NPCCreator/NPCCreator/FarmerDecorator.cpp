#include "pch.h"
#include "FarmerDecorator.h"

FarmerDecorator::FarmerDecorator(NPC *_npc) : Decorator(_npc) {
}


void FarmerDecorator::render() {
	Decorator::render();
	std::cout << "- Farmer" << std::endl;
}
