#include "pch.h"
#include "NPC.h"
#include "Orc.h"
#include "Elf.h"
#include "FarmerDecorator.h"
#include "ShamanDecorator.h"
#include "SoldierDecorator.h"

NPC* NPC::makeNPC(int _type, std::string _name) {
	NPC* npc;
	npc = new Orc(_name);
	if (_type == 1) {
		npc = new Orc(_name);
	}
	else if (_type == 2) {
		npc = new Elf(_name);
	}
	return npc;
}
