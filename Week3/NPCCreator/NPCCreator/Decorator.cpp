#include "pch.h"
#include "Decorator.h"


Decorator::Decorator(NPC* _npc) {
	npc = _npc;
}

Decorator::~Decorator() {
}

void Decorator::render() {
	npc->render();
}
