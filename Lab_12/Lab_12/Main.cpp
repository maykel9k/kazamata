#include <iostream>
#include <ctime>
#include "alkohole.h"
#include "towar.h"

using namespace std;

int main()
{
	//srand(unsigned(time(0)));
	srand(0);

	cout << endl;
	cout << "*********************** ETAP 1 (1 pkt) *********************** " << endl << endl;

	Wino w1("Carlos Serres Crianza DOC Rioja", 42.90, 2013, rodzaj_wina::WYTRAWNE);
	Wino w2("Tavernello Rosso Amabile", 23.90, 2015, rodzaj_wina::POLSLODKIE);
	Wino w3("Carlos Serres Crianza DOC Rioja", 66.99, 2000, rodzaj_wina::WYTRAWNE);

	cout << "nr. 1: " << w1 << endl;
	cout << "nr. 2: " << w2 << endl;
	cout << "nr. 3: " << w3 << endl << endl;
	if (w1 == w3) cout << "Wina 1 i 3 sa takie same" << endl << endl;
	else cout << "Blad operatora ==" << endl << endl;

	Piwo p1("Oud Beersel", 35, 5, rodzaj_piwa::JASNE, rodzaj_opakowania::BUTELKA);
	Piwo p2("Deer Bear", 21, 9, rodzaj_piwa::NIEFILTROWANE, rodzaj_opakowania::BUTELKA);
	Piwo p3("Oud Beersel", 35, 5, rodzaj_piwa::JASNE, rodzaj_opakowania::PUSZKA);

	cout << "nr. 1: " << p1 << endl;
	cout << "nr. 2: " << p2 << endl;
	cout << "nr. 3: " << p3 << endl << endl;
	if (w1 == w3) cout << "Piwa 1 i 3 sa takie same" << endl << endl;
	else cout << "Blad operatora ==" << endl << endl;


	cout << "*********************** ETAP 2 (1.5 pkt) *********************** " << endl << endl;
	/*
	Towar sklep1;
	cout << sklep1 << endl;
	sklep1.dodaj(&w1);
	sklep1.dodaj(&p1);
	sklep1.dodaj(&p2);
	sklep1.dodaj(&w2);
	sklep1.dodaj(&w3);
	sklep1.dodaj(&p3);
	cout << "Pierwsza dostawa towaru:" << endl;
	cout << sklep1;
	cout << "Wartosc towaru w sklepie: " << sklep1.wartosc() << " zl" << endl << endl;
	
	cout << "Losowo wybrana bytelka do wzniesienia toastu na otwarcie sklepu: " << endl;
	cout << *sklep1.sprzedaj() << endl << endl;
	cout << "W sklepie pozostalo:" << endl;
	cout << sklep1;
	cout << "Wartosc towaru: " << sklep1.wartosc() << " zl" << endl << endl;
	*/
	cout << "*********************** ETAP 3 (1,5 pkt) *********************** " << endl << endl;
	/*
	sklep1.wczytaj("wino.bin");
	cout << "Dostawa win do sklepu:" << endl;
	cout << sklep1;
	cout << "Wartosc towaru: " << sklep1.wartosc() << " zl" << endl << endl;
	*/
	cout << "*********************** ETAP 4 (2.0 pkt) *********************** " << endl << endl;
	/*
	list<Alkohol*> duplikaty;
	duplikaty = sklep1.usun_duplikaty();
	cout << "Wlasciciel otwiera filie swojego sklepu i przenosi tam wszystkie duplikaty trunkow.";
	cout << endl << endl;
	cout << "Duplikaty:" << endl;
	for (Alkohol* al : duplikaty) cout << *al << endl;
	cout << endl << "Pozostaly towar:" << endl;
	cout << sklep1;
	cout << "Wartosc towaru po usunieciu duplikatow: " << sklep1.wartosc() << " zl" << endl << endl;
	*/
	cout << "*********************** ETAP 5 (2.0 pkt) *********************** " << endl << endl;
	/*
	list<Alkohol*> sprzedane = sklep1.sprzedaj(30);
	cout << "Pierwszy klient i od razu kupuje to co najlepsze." << endl << endl;
	cout << "Towar po sprzedazy najdrozszych:" << endl;
	cout << sklep1;
	cout << "Wartosc towaru: " << sklep1.wartosc() << " zl" << endl << endl;
	cout << "Lista sprzedanego towaru:" << endl;
	for (Alkohol* al : sprzedane) cout << *al << endl;
	*/
	system("pause");
	return 0;
}