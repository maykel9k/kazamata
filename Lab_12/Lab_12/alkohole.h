#pragma once
#include <iostream>
using namespace std;

//Etap 1

enum rodzaj_wina { WYTRAWNE, POLWYTRAWNE, POLSLODKIE, SLODKIE };
enum rodzaj_piwa { JASNE, CIEMNE, BIALE, NIEPASTERYZOWANE, NIEFILTROWANE };
enum rodzaj_opakowania { BUTELKA, PUSZKA };

class Alkohol
{
protected:
	double cena;
	double zawartosc_alkoholu;
	string nazwa;

public:
	Alkohol() {};
	Alkohol(string _nazwa, double _cena, double _zawartosc_al);
	string get_nazwa();
	double get_cena();
	double get_zawartosc_alkoholu() const;
	virtual void wypisz(ostream& out) const =0;
	friend ostream& operator<<(ostream& out, const Alkohol& w);
};

class Wino : public Alkohol
{
	int rocznik;
	rodzaj_wina rodzaj;

public:
	Wino(string _nazwa, double _cena, int _rok, rodzaj_wina _rodzaj);
	int get_rocznik();
	string get_rodzaj() const;
	virtual void wypisz(ostream& out) const;

	friend bool operator==(const Wino& w1, const Wino& w2);
};

class Piwo : public Alkohol
{
	rodzaj_opakowania opakowanie;
	rodzaj_piwa rodzaj;

public:
	Piwo(string _nazwa, double _cena, double _zawartosc_al, rodzaj_piwa _rodzaj, rodzaj_opakowania _opakowanie);
	string get_opakowanie() const;
	string get_rodzaj() const;
	virtual void wypisz(ostream& out) const;

	friend bool operator==(const Piwo& w1, const Piwo& w2);
};