/*
 * tekst.cpp
 * 
 * zlicza liczbę liter w tekście razem ze spacjami
 */


#include <iostream>

#define ROZMIAR 100

using namespace std;

int main(int argc, char **argv)
{
	char tekst[ROZMIAR];
    int i;
    cout << "Podaj tekst" << endl;
    cin.getline(tekst, ROZMIAR);
    cout << strlen(tekst) << endl;
    for (i=0; i < ROZMIAR; i++) {
        cout << tekst[i];
    }
    cout << endl;
    
    i = 0;
    while (i= 0, i > ROZMIAR, i++) {
        cout << tekst[i];
        i++;
    }
    cout << endl;
	return 0;
}

