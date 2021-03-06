// Modules.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include "Docent.h"
#include "Module.h"
#include "Student.h"
#include <iostream>

int main() {
	//Maak 3 modules, 10 studenten en 3 docenten.
	Module* grafischeVormgeving = new Module("Grafische Vormgeving", 1);
	Module* afvalZoeken = new Module("Afval Zoeken", 2);
	Module* slangenTemmen = new Module("Slangen Temmen", 2);
	Module* modules[ 3 ] = { grafischeVormgeving, afvalZoeken, slangenTemmen };

	Student* sam = new Student("Sam Toilet");
	Student* gert = new Student("Gertje");
	Student* samson = new Student("Samson");
	Student* daan = new Student("DJ de Bruijn");
	Student* henk = new Student("Henk de Steen");
	Student* willem = new Student("Stille Willem");
	Student* bob = new Student("Bibbert");
	Student* klus = new Student("Klus de Vlaamse Bosdwerg");
	Student* plop = new Student("Plop de Vlaamse Bosdwerg");
	Student* kwebbel = new Student("Kwebbel de Vlaamse Bosdwerg");
	Student* studenten[ 10 ] = { sam, gert, samson, daan, henk, willem, bob, klus, plop, kwebbel };

	//Wijs docent toe aan module. Wijs student toe aan 1-3 verschillende modules.
	grafischeVormgeving->wijsDocentAan(new Docent("??????"));
	grafischeVormgeving->voegStudentToe(gert);
	grafischeVormgeving->voegStudentToe(samson);
	grafischeVormgeving->voegStudentToe(daan);
	grafischeVormgeving->voegStudentToe(kwebbel);

	afvalZoeken->wijsDocentAan(new Docent("Norbert Geinig"));
	afvalZoeken->voegStudentToe(henk);
	afvalZoeken->voegStudentToe(willem);
	afvalZoeken->voegStudentToe(bob);
	afvalZoeken->voegStudentToe(klus);
	afvalZoeken->voegStudentToe(plop);

	slangenTemmen->wijsDocentAan(new Docent("Valentijn Muijrers"));
	slangenTemmen->voegStudentToe(sam);
	slangenTemmen->voegStudentToe(bob);
	slangenTemmen->voegStudentToe(klus);
	slangenTemmen->voegStudentToe(gert);
	slangenTemmen->voegStudentToe(samson);
	slangenTemmen->voegStudentToe(plop);

	grafischeVormgeving->lijst();
	std::cout << "\n" << std::endl;
	afvalZoeken->lijst();
	std::cout << "\n" << std::endl;
	slangenTemmen->lijst();
	std::cout << "\n" << std::endl;

	//Toon totaal EC per student.
	for( size_t i = 0; i < 3; i++ ) {
		modules[ i ]->geefEC();
	}

	for( size_t i = 0; i < 10; i++ ) {
		std::cout << studenten[ i ]->krijgNaam() << " heeft: " << studenten[ i ]->EC << " EC" << std::endl;
	}
	std::cout << "\n" << std::endl;

	//Wijzig EC van 1 module: toon totaal EC per student.
	afvalZoeken->moduleEC = 666;

	for( size_t i = 0; i < 10; i++ ) {
		studenten[ i ]->EC = 0;
	}

	for( size_t i = 0; i < 3; i++ ) {
		modules[ i ]->geefEC();
	}

	for( size_t i = 0; i < 10; i++ ) {
		std::cout << studenten[ i ]->krijgNaam() << " heeft: " << studenten[ i ]->EC << " EC" << std::endl;
	}
	std::cout << "\n" << std::endl;

	//Verwijder student uit module & toon lijst opniew
	grafischeVormgeving->gooiBob();
	afvalZoeken->gooiBob();
	slangenTemmen->gooiBob();

	grafischeVormgeving->lijst();
	std::cout << "\n" << std::endl;
	afvalZoeken->lijst();
	std::cout << "\n" << std::endl;
	slangenTemmen->lijst();
	std::cout << "\n" << std::endl;

	return(0);
}
