#include "pch.h"
#include "Elf.h"


Elf::Elf(std::string _name) : name(_name)
{
}


Elf::~Elf()
{
}

void Elf::render()
{
	std::cout << name << std::endl;
}
