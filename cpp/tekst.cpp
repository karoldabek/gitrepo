/*
 * tekst.cpp
 * 
 * nie obsługuje znaków międzynarodowych
 * jeśli wprowadzamy litery alfabatu polskiego  to ona są liczone innaczej więc trza coś dodać  np/ litera ł zajmuje 2 bałtu (?) XD
 */


#include <iostream>

#define ROZMIAR 10

using namespace std;

int main(int argc, char **argv)
{
	char tekst[ROZMIAR];
    int i;
    cout << "Podaj imię i nazwisko" << endl;
    //cin >> tekst;  -   tu nie oodczytuje spacji znaków  białych 
    cin.getline(tekst, ROZMIAR);  //   w tym przypadku odczykuje spacje
    //cout << tekst;
    for (i=0; i < ROZMIAR; i++) {
        cout << tekst[i];
    }
    cout << endl;
    
    i = 0;
    while (tekst[i] != '\0') {
        cout << tekst[i];
        i++;
    }
    cout << endl;
	return 0;
}

