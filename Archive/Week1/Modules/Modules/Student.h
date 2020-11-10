#pragma once
#include <string>

class Student
{
public:
	Student(std::string _naam);
	~Student();
	std::string krijgNaam();
	int EC;
private:
	std::string naam;
};

