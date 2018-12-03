#include "pch.h"
#include "ShamanDecorator.h"

ShamanDecorator::ShamanDecorator(NPC *_npc) : Decorator(_npc) {
}


void ShamanDecorator::render() {
	Decorator::render();
	std::cout << "- Occupation: Shaman" << std::endl;
}
