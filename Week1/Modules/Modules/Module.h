#pragma once

#include <iostream>
#include <string>
#include <vector>

#include "Docent.h"
#include "Student.h"

class Module
{
public:
	Module(std::string _naam, int _EC);
	~Module();
	std::string krijgNaam();
	void wijsDocentAan(Docent* _docent);
	void voegStudentToe(Student* _student);
	void lijst();
	void geefEC();
	void gooiBob();
	int moduleEC;
private:
	std::string naam;
	Docent* docent;
	std::vector<Student*> studenten;
};

