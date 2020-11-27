#pragma once
#include "Decorator.h"
#include <iostream>

class SoldierDecorator : public Decorator
{
public:
	SoldierDecorator(NPC* _npc);
	void render();
};

