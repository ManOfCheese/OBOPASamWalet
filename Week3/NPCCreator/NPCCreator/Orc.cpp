#include "pch.h"
#include "Orc.h"


Orc::Orc(std::string _name) : name(_name)
{
}


Orc::~Orc()
{
}

void Orc::render()
{
	std::cout << name << std::endl;
}
