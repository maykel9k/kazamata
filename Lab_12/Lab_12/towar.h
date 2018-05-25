#pragma once
#include <iostream>
#include <vector>
#include <list>
#include "alkohole.h"
using namespace std;

class Towar
{
	list<Alkohol*> towar;
public:
	Towar() {};

	//Etap 2
	void dodaj(Alkohol*);
	friend ostream& operator<<(ostream& out, const Towar& s);
	double wartosc();
	Alkohol* sprzedaj();

	//Etap 3
	void wczytaj(const char*);

	//Etap 4
	list<Alkohol*> usun_duplikaty();

	//Etap 5
	list<Alkohol*> sprzedaj(double cena);
};

