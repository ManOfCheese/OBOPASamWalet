#include "pch.h"
#include "NPC.h"
#include "Orc.h"
#include "Elf.h"
#include "FarmerDecorator.h"
#include "ShamanDecorator.h"
#include "SoldierDecorator.h"

NPC* NPC::makeNPC(int _type, std::string _name) {
	NPC* npc = NULL;
	if (_type == 1) {
		npc = new Orc(_name);
	}
	else if (_type == 2) {
		npc = new Elf(_name);
	}
	else if (_type == 3) {
		npc = new ShamanDecorator(new Orc(_name));
	}
	else if (_type == 4) {
		npc = new FarmerDecorator(new Elf(_name));
	}
	else if (_type == 5) {
		npc = new SoldierDecorator(new Elf(_name));
	}
	else if (_type == 6) {
		npc = new SoldierDecorator(new Orc(_name));
	}

	return npc;
}
