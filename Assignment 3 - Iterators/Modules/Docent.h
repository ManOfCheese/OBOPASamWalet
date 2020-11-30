#pragma once
#include <string>

class Docent
{
public:
	Docent(std::string _naam);
	~Docent();
	std::string krijgNaam();
private:
	std::string naam;
};

