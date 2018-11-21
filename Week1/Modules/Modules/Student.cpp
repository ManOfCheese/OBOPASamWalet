#include "pch.h"
#include "Student.h"


Student::Student(std::string _naam) : naam(_naam){
	EC = 0;
}


Student::~Student(){
}

std::string Student::krijgNaam(){
	return naam;
}
