#include "pch.h"
#include "SoldierDecorator.h"


SoldierDecorator::SoldierDecorator(NPC *_npc) : Decorator(_npc) {
}


void SoldierDecorator::render() {
	Decorator::render();
	std::cout << "- Occupation: Soldier" << std::endl;
}
