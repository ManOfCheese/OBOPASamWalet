#include "pch.h"
#include "Docent.h"


Docent::Docent(std::string _naam) : naam(_naam) {
}


Docent::~Docent(){
}

std::string Docent::krijgNaam(){
	return naam;
}
