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

	Student* sam = new Student("Sam Toilet");
	Student* gert = new Student("Gert");
	Student* samson = new Student("Samson");
	Student* daan = new Student("DJ de Bruijn");
	Student* henk = new Student("Henk de Steen");
	Student* willem = new Student("Stille Willem");
	Student* bob = new Student("Bibbert");
	Student* klus = new Student("Klus de Vlaamse Bosdwerg");
	Student* plop = new Student("Plop de Vlaamse Bosdwerg");
	Student* kwebbel = new Student("Kwebbel de Vlaamse Bosdwerg");

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
	grafischeVormgeving->geefEC();
	afvalZoeken->geefEC();
	slangenTemmen->geefEC();

	std::cout << "Sam heeft: " << sam->EC << " EC" << std::endl;
	std::cout << "Gert heeft: " << gert->EC << " EC" << std::endl;
	std::cout << "Samson heeft: " << samson->EC << " EC" << std::endl;
	std::cout << "Daan heeft: " << daan->EC << " EC" << std::endl;
	std::cout << "Henk heeft: " << henk->EC << " EC" << std::endl;
	std::cout << "Willem heeft: " << willem->EC << " EC" << std::endl;
	std::cout << "Bob heeft: " << bob->EC << " EC" << std::endl;
	std::cout << "Klus heeft: " << klus->EC << " EC" << std::endl;
	std::cout << "Plop heeft: " << plop->EC << " EC" << std::endl;
	std::cout << "Kwebbel heeft: " << kwebbel->EC << " EC" << std::endl;
	std::cout << "\n" << std::endl;

	//Wijzig EC van 1 module: toon totaal EC per student.
	afvalZoeken->moduleEC = 666;

	sam->EC = 0;
	gert->EC = 0;
	samson->EC = 0;
	daan->EC = 0;
	henk->EC = 0;
	willem->EC = 0;
	bob->EC = 0;
	klus->EC = 0;
	plop->EC = 0;
	kwebbel->EC = 0;

	grafischeVormgeving->geefEC();
	afvalZoeken->geefEC();
	slangenTemmen->geefEC();

	std::cout << "Sam heeft: " << sam->EC << " EC" << std::endl;
	std::cout << "Gert heeft: " << gert->EC << " EC" << std::endl;
	std::cout << "Samson heeft: " << samson->EC << " EC" << std::endl;
	std::cout << "Daan heeft: " << daan->EC << " EC" << std::endl;
	std::cout << "Henk heeft: " << henk->EC << " EC" << std::endl;
	std::cout << "Willem heeft: " << willem->EC << " EC" << std::endl;
	std::cout << "Bob heeft: " << bob->EC << " EC" << std::endl;
	std::cout << "Klus heeft: " << klus->EC << " EC" << std::endl;
	std::cout << "Plop heeft: " << plop->EC << " EC" << std::endl;
	std::cout << "Kwebbel heeft: " << kwebbel->EC << " EC" << std::endl;
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

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
