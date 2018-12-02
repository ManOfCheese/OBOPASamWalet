#pragma once
#include "Decorator.h"
#include <iostream>

class FarmerDecorator : public Decorator
{
public:
	FarmerDecorator(NPC* _npc);
	void render();
};

