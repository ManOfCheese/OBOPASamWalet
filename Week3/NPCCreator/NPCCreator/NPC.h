#pragma once
#include <string>

class NPC
{
public:
	static NPC* makeNPC(int _type, std::string _name);
	virtual void render() = 0;
};

