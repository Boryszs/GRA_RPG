#pragma once
#include "Champion.h"

class Wizzard : public Champion {
public:
	//Warrior(int id) : Champion( /* -- parametry postaci -- */ ){} -- do implementacja z po��czeniem si� z baz� danych

	// Tymczasowy konstruktor
	Wizzard(const unsigned id, const std::string n, unsigned int l, unsigned int e, double m, int he, int st, int de, int ma, int def, int lu) :
		Champion(id, n, l, e, m, he, st, de, ma, def, lu) {}

	virtual int attack() override;
	//virtual int skill() override;
};