
#include "DataBase.h"
#include <iostream>

using namespace std;

void main()
    {
    char c;
    DataBase baza("data.bin");

    while ( true )
        {
        cout << endl ;
        cout << "1 - Wyswietlenie aktywnych studentow" << endl ;
        cout << "2 - Wyswietlenie nieaktywnych studentow" << endl ;
        cout << "3 - Dodanie studenta do bazy danych" << endl ;
        cout << "4 - Modyfikacja informacji o studencie" << endl ;
        cout << "5 - Usuniecie nieaktywnych studentow z bazy danych" << endl ;
        cout << "6 - Zapisanie bazy danych do pliku tekstowego" << endl ;
        cout << "7 - Wczytanie bazy danych z pliku tekstowego" << endl ;
        cout << "0 - Koniec" << endl ;
        cout << endl << "Wybierz komende:  " ;
        cin >> c;
        cout << endl ;
        switch ( c )
            {
            case '1':
                cout << " | Imie            | Nazwisko                  | NrInd    | Gr   | Sred | A | " << endl << endl ;
                baza.ListData(true);
                break;
            case '2':
                cout << " | Imie            | Nazwisko                  | NrInd    | Gr   | Sred | A | " << endl << endl ;
                baza.ListData(false);
                break;
            case '3':
                baza.Append();
                break;
            case '4':
                baza.Modify();
                break;
            case '5':
                baza.Pack();
                break;
            case '6':
                baza.WriteTextData();
                break;
            case '7':
                baza.ReadTextData();
                break;
            case '0':
                cout << "Koniec !!!" << endl << endl ;
                return;
            default:
                cout << "Bledna komenda !!!" << endl ;
                break;
            }
        }
    }