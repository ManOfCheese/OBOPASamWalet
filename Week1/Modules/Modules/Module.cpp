#include "pch.h"
#include "Module.h"


Module::Module(std::string _naam, int _EC) : naam(_naam), moduleEC(_EC) {
}

std::string Module::krijgNaam(){
	return naam;
}

void Module::wijsDocentAan(Docent* _docent) {
	docent = _docent;
}

void Module::voegStudentToe(Student* _student) {
	studenten.push_back(_student);
}

void Module::lijst() {
	std::cout << naam << " word gegeven door - " << docent->krijgNaam() << std::endl;
	std::cout << naam << " word gevolgd door:" << std::endl;

	std::vector<Student*>::iterator it = studenten.begin();
	while (it != studenten.end()) {
		std::cout << " - " << (*it)->krijgNaam() << std::endl;
		it++;
	}
}

void Module::geefEC(){
	std::vector<Student*>::iterator it = studenten.begin();
	while (it != studenten.end()) {
		(*it)->EC += moduleEC;
		it++;
	}
}

void Module::gooiBob() {
	std::vector<Student*>::iterator it = studenten.begin();

	while (it != studenten.end()) {
		if ((*it)->krijgNaam() == "Bibbert") {
			std::cout << (*it)->krijgNaam() << " is uit " << naam << " gegooid" << std::endl;
			delete *it;
			it = studenten.erase(it);
		} else {
			it++;
		}
	}
}

Module::~Module() {
	std::vector<Student*>::iterator it = studenten.begin();
	while (it != studenten.end()) {
		delete *it;
		it++;
	}
}
