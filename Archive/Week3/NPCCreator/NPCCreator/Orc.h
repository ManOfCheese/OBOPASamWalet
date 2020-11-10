#pragma once
#include <iostream>
#include "NPC.h"

class Orc : public NPC
{
public:
	Orc(std::string _name);
	~Orc();
	void render();
	std::string name;
};

