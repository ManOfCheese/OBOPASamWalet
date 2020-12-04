#pragma once
#include "NPC.h"

class Decorator : public NPC {
	NPC* npc;
public:
	Decorator(NPC* _npc);
	virtual ~Decorator();
	virtual void render();
};

