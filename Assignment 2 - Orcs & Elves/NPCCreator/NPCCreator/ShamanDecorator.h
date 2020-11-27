#pragma once
#include "Decorator.h"
#include <iostream>

class ShamanDecorator : public Decorator
{
public:
	ShamanDecorator(NPC* _npc);
	void render();
};

