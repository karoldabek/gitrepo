/*
 * tablice.cpp
 * zadanie 2 z http://ecg.vot.pl/cpp-funkcje
 */


#include <iostream>

using namespace std;

void pobierzOceny(int t[], int r){    //r - rozmian tablicy
    cout << "Podaj 5 ocen: " << endl;
    int i;
    for (i=0; i<r; i++){
        cin >> t[i];
    }
}

void drukujTab(int t[], int r){
    int i = 0;
    for (i=0; i<r; i++){
        cout << t[i];
    }
}

float srednia(int t[], int r, float s){
    int i = 0;
    int suma = 0;
    for (i=0; i<r; i++){
        suma = suma + t[i];
    }
    return suma/r;
}

int main(int argc, char **argv)
{
    int rozmiar;
    cout << "ILe ocen podasz?";
    cin >> rozmiar;
    
    int tablica[rozmiar];
    
    
    pobierzOceny(tablica, rozmiar);
    drukujTab(tablica, rozmiar);
    
    cout >> 
	return 0;
}

