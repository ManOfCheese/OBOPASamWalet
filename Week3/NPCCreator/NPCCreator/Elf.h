#pragma once
#include <iostream>
#include "NPC.h"

class Elf : public NPC
{
public:
	Elf(std::string _name);
	~Elf();
	void render();
	std::string name;
};

