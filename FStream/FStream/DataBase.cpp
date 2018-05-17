
#define _CRT_SECURE_NO_WARNINGS

#include "DataBase.h"
#include "Student.h"
#include <fstream>
#include <iostream>
// uzupelnij !!!

using namespace std;

DataBase::DataBase(const char* file)
    {
    strcpy(dataFileName, file);
    }

void DataBase::ListData(bool akt)
{
	// uzupelnij !!!
	ifstream wej("data.bin", ios::in | ios::binary);	//Otwarcie
	if (!wej)
	{
		cout << "Nie mozna otworzyc pliku !!!" << endl;
		return;
	}

	wej.seekg(0, ios::end);		//Ile obiektów
	long ile = wej.tellg() / sizeof(Student);
	wej.seekg(0, ios::beg);

	Student* studenciaki = new Student[ile];
	Student st;
	int i = 0;

	while (wej.read((char*)&st, sizeof(Student)))	//pobranie danych (mo¿na by ca³oœæ na bie¿¹co wypisywaæ)
	{
		studenciaki[i] = st;
		i++;
	}

	for (int i = 0; i < ile; i++)	//wypisywanie warunkowe
	{
		if (akt == studenciaki[i].Active)
			cout << studenciaki[i];
	}


	//if (wej.eof())		//Usuniêcie EOF??
	//	wej.clear();
	//else 
	//{
	//	cout << "Niepoprawny odczyt pliku: " << dataFileName << endl;
	//	return;
	//}
	
	delete[] studenciaki;
	wej.close();
	return;
}

void DataBase::Append()
{
    // uzupelnij !!!
	Student st;
	cout << "Podaj imie: " << endl;
	cin >> st.FirstName;
	cout << "Podaj nazwisko: " << endl;
	cin >> st.LastName;
	cout << "Podaj NrInd: " << endl;
	cin >> st.IdNumber;
	cout << "Podaj grupe: " << endl;
	cin >> st.Group;
	cout << "Podaj srednia: " << endl;
	cin >> st.Average;
	st.Active = 1;

	ofstream wyj("data.bin", ios::in | ios::binary);	//Otwarcie
	if (!wyj)
	{
		cout << "Nie mozna otworzyc pliku !!!" << endl;
		return;
	}

	wyj.seekp(0, ios::end);		//Append
	if (wyj.write((char*)&st, sizeof(Student)))
		cout << "Dane poprawione !" << endl;
	else 
		cout << "Niepowodzenie" << endl;

	wyj.close();
	return;
}

void DataBase::Modify()
{
    // uzupelnij !!!
	fstream plik(dataFileName, ios::in | ios::out | ios::binary);	//Otwarcie
	if (!plik)
	{
		cout << "Nie mozna otworzyc pliku !!!" << endl;
		return;
	}

	plik.seekg(0, ios::end);		//Ile obiektów
	long ile = plik.tellg() / sizeof(Student);
	plik.seekg(0, ios::beg);

	Student* studenciaki = new Student[ile];
	Student st;
	int i = 0;

	while (plik.read((char*)&st, sizeof(Student)))	//pobranie danych (mo¿na by ca³oœæ na bie¿¹co wypisywaæ)
	{
		studenciaki[i] = st;
		i++;
	}
	plik.clear();

	cout << "Podaj NrInd: " << endl;
	cin >> st.IdNumber;

	for (int i = 0; i < ile; i++)
	{
		if (st.IdNumber == studenciaki[i].IdNumber)
		{

			plik.seekg(sizeof(Student)*(i), ios::beg);		// w to samo miejsce
			plik.read((char*)&st, sizeof(Student));

			cout << st;

			cout << "Podaj grupe: " << endl;
			cin >> st.Group;
			cout << "Podaj srednia: " << endl;
			cin >> st.Average;
			cout << "Czy aktywny? (0/1)";
			cin >> st.Active;

			plik.seekp(sizeof(Student)*(i), ios::beg);
			if (plik.write((char*)&st, sizeof(Student)))
				cout << "Dane poprawione!" << endl;
			else cout << "???";
			return;
		}
	}

	cout << "Nie ma takiego studenta";
	plik.close();
	return;
}

void DataBase::Pack()
{
    // uzupelnij !!!
}

void DataBase::WriteTextData()
{
    // uzupelnij !!!
}

void DataBase::ReadTextData()
{
    // uzupelnij !!!
}
