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
	std::cout << "Orc: " << name << std::endl;
}
