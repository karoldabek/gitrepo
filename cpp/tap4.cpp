/*
 * tap4.cpp
 * cout << strlen(tekst) << endl; //sprawdza ile znaków jest w tekście
 */


#include <iostream>
#define ROZMIAR 100
using namespace std;


int main(int argc, char **argv)
{
	
    char tekst[ROZMIAR];
    cout << "Podaj tekst" << endl;
    cin.getline(tekst, ROZMIAR);
    cout << strlen(tekst) << endl;
    int i;
    for(i = strlen(ROZMIAR); i >= 0; i--){
        cout << tekst[i] << endl;
    }
    
    cout << tekst [i] << endl;
    
	return 0;
}

