#include <iostream>
#include <fstream>

using namespace std;

int main() {
    const string src = "dane.txt";
    //zapisz do pliku
    ofstream doPliku(src, ios::app);
    if (doPliku) {
        int wiek = 17;
        string pesel = "2956234650923";
        doPliku << "Imie: Jan \n";
        doPliku << "Nazwisko: Kowalski \n";
        doPliku << "Wiek: " << wiek << "\n";
        doPliku << "Pesel: " << pesel << "\n";
    } else {
        cout << "nie mozna zapisac do pliku";
    }

    //odczyt z pliku

    ifstream zPliku(src);
    if (zPliku) {
        string linia, slowo;
        //getline(zPliku,linia);
        //cout << "Linia tekstu: " << linia << "\n";
        //zPliku >> slowo;
        //cout << "Slowo" << slowo << "\n";
        //char znak;
        //zPliku.get(znak);
        //cout << "Znak: " << znak;
        string lin;
        while(!zPliku.eof()){
            getline(zPliku, lin);
            cout << lin << "\n";
        }
    } else {
        cout << "Nie mozna otworzyc pliku do odczytu";
    }

    return 0;
}
